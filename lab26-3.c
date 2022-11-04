/** lab26-3.c
* ===========================================================
* Name: Benjamin Tat
* Section: T6
* Project: Lab 26
* Purpose: (Optional) More fun with structs
* ===========================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include "lab26functs.h"

int main() {
    int numberLinesInFile;
    numberLinesInFile = getNumLines("lab26Data.csv");

    USAFBaseData* USAFBases = (USAFBaseData*)malloc(sizeof(USAFBaseData)*numberLinesInFile);

    readFile("lab26Data.csv", USAFBases, numberLinesInFile);

    printData(USAFBases, numberLinesInFile);
    
    return 0;
}