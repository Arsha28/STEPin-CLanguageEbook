#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <windows.h>

COORD c = {0, 0};

void setxy (int x, int y)
{
 c.X = x; c.Y = y; // Set X and Y coordinates
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}


int main(){
	
   system("color 6F");
    for(int pos=5;pos<16;pos++){
   	setxy(35,pos);
   	printf("*");
   }
   for(int pos=5;pos<16;pos++){
   	setxy(90,pos);
   	printf("*");
   }
   setxy(50,0);
   printf("---------------------");
   setxy(50,1);
   printf("C - LANGUAGE E-BOOK");
   setxy(50,2);
   printf("---------------------");
   setxy(35,5);
   printf("*******************************************************\n");
   setxy(40,7);
   printf("1.Basic Concepts\n");
   setxy(40,8);
   printf("2.Conditionals and Loops");
   setxy(40,9);
   printf("3.Functions, Array and Pointer");
   setxy(40,10);
   printf("4.Strings");
   setxy(40,11);
   printf("5.Structure");
   setxy(40,12);
   printf("6.Memory Management");
   setxy(40,13);
   printf("7.Files and Error Handilings");
   setxy(40,14);
   printf("8.The Processor");
   setxy(35,16);
   
   printf("********************************************************");
   char Topicchoice;
   setxy(65,18);
   printf("CHOOSE THE TOPIC NUMBER");
   setxy(90,18);
   scanf("%c",&Topicchoice);
   
  
   
   
  
    
}