/** lab26functs.c
* ===========================================================
* Name: Benjamin Tat
* Section: T6
* Project: Lab 26
* Purpose: More fun with structs
* ===========================================================
*/
#include <stdio.h>
#include <stdlib.h>
#include "lab26functs.h"

void getPoints(Point* Point1, Point* Point2) {
    printf("Enter coordinates of point a: ");
    scanf("%d %d", &Point1->x, &Point1->y);
    printf("Enter coordinates of point b: ");
    scanf("%d %d", &Point2->x, &Point2->y);
}

double getDistance(Point Point1, Point Point2) {
    double distance;

    distance = sqrt(pow((double)Point2.x - (double)Point1.x, 2) + pow((double)Point2.y - (double)Point1.y, 2));

    return distance;
}

/**
 * @pre file exists and can be opened - if not, the program terminates
 * @pre each line of the file with data has newline character (even last line)
 * @post file contents is unchanged
 */
int getNumLines(char filename[])  {  
    char c;  
    int count = 0;  
    // Open the file  
    FILE* fp = fopen(filename, "r");  

    // Check if file exists  
    if (fp == NULL) {  
        fprintf(stderr, "Could not open file %s", filename);  
        fprintf(stderr, " - terminating\n");  
        exit(1); 
    }

    // Extract characters from file and store in character c  
    for (c = getc(fp); c != EOF; c = getc(fp)) {  
        // count newline chars 
        if (c == '\n') { 
           count++;
        }
    }  

    // Close the file  
    fclose(fp); 

    return count;  
}

void readFile(char filename[], USAFBaseData* baseStruct, int lines){
    // Open the file  
    FILE* fp = fopen(filename, "r");  

    // Check if file exists  
    if (fp == NULL) {  
        fprintf(stderr, "Could not open file %s", filename);  
        fprintf(stderr, " - terminating\n");  
        exit(1); 
    }

    for (int i = 0; i < lines; i++) {
        fscanf(fp, "%[^,],%d,%d,%[^,],%[^\n]\n", baseStruct[i].baseName, &baseStruct[i].bldgsOwned, &baseStruct[i].structsOwned, baseStruct[i].city, baseStruct[i].state);
    }

    fclose(fp);
}

void printData(USAFBaseData* bases, int numBases){
    for (int i = 0; i < numBases; i++) {
        printf("%s, %d, %d, %s, %s\n", bases[i].baseName, bases[i].bldgsOwned, bases[i].structsOwned, bases[i].city, bases[i].state);
    }
    
}