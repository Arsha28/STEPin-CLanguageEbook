#include<stdlib.h>
#include "panalcolor.h"
#include<stdio.h>
#include <windows.h>
COORD c = {0, 0};

void setxy (int x, int y)
{
 c.X = x; c.Y = y; // Set X and Y coordinates
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
