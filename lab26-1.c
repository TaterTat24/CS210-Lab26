/** lab26-1.c
* ===========================================================
* Name: Benjamin Tat
* Section: T6
* Project: Lab 26
* Purpose: More fun with structs
* ===========================================================
*/

#include <stdio.h>
#include "lab26functs.h"

int main() {
    // Declare Two Point Structs
    Point A;
    Point B;

    // Call Get Points
    getPoints(&A, &B);

    // Print the Distance Between Point 1 and Point 2
    printf("The distance between the points is: %.2lf", getDistance(A, B));

    return 0;
}