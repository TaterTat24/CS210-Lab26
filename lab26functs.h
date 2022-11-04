/** lab26functs.h
* ===========================================================
* Name: Benjamin Tat
* Section: t6
* Project: Lab 26
* Purpose: More fun with structs
* ===========================================================
*/
#include <math.h>

// YOUR STRUCTS GO HERE
typedef struct Point_struct {
    int x;
    int y;
} Point;

typedef struct USAFBaseData_struct {
    char baseName[50];
    int bldgsOwned;
    int structsOwned;
    char city[50];
    char state[30];
} USAFBaseData;


// LAB 26-1 FUNCTIONS GO HERE
void getPoints(Point* Point1, Point* Point2);

double getDistance(Point Point1, Point Point2);

// LAB 26-3 FUNCTIONS GO HERE
int getNumLines(char filename[]);

void readFile(char filename[], USAFBaseData* baseStruct, int lines);

void printData(USAFBaseData* bases, int numBases);