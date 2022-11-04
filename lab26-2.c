/** lab26-2.c
* ===========================================================
* Name: Benjamin Tat
* Section: T6
* Project: Lab 26
* Purpose: More fun with structs
* ===========================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include "dungeon.h"

int main() {

    Room* dungeon = createDungeon();
    
    // When You Know Where the Key Is, Call This Function and Give It the Path
    getKey(dungeon->goNorth->goNorth->goWest->goWest->goNorth);

    // When You Know Where the Sword Is, Call This Function and Give It the Path
    getSword(dungeon->goNorth->goNorth->goNorth->goNorth->goEast->goSouth);

    // When You Know Where the Door Is, Call This Function and Give It the Path
    openDoor(dungeon->goNorth->goNorth->goNorth->goNorth->goWest);

    // When You Know Where the Dragon Is, Call This Function and Give It the Path
    attackDragon(dungeon->goNorth->goNorth->goNorth->goNorth->goWest->goWest->goWest->goNorth);

    return 0;
}