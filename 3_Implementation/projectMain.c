/**
 * @file projectMain.c
 * @author Arshad
 * @brief Main file of the project
 * @version 0.1
 * @date 2021-09-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include"basicConcepts.h"


/**
 * @brief According to the choice the selectedTopic function call the another function
 * 
 * @param topicChoice 
 */
void selectedTopic(int topicChoice){

     switch(topicChoice){

        case 1:
            basicConcepts();
            break;
        case 2:
            ConditionalsandLoops();
            break;



     }
printf("%c",topicChoice);
printf("HEEE");
}
int main(){
	
   system("color 70");
   printf("---------------------\n");
   printf("C - LANGUAGE E-BOOK\n");
   printf("---------------------");
  
   printf("\n*******************************************************\n");
   printf("*\t\t1.Basic Concepts\n");
   printf("*\t\t2.Conditionals and Loops\n");
   printf("*\t\t3.Functions, Array and Pointer\n");
   printf("*\t\t4.Strings\n");
   printf("*\t\t5.Structure\n");
   printf("*\t\t6.Memory Management\n");
   printf("*\t\t7.Files and Error Handilings\n");
   printf("*\t\t8.The Processor\n");
   printf("********************************************************");
   printf("\n\tSelect the topic:");


   typedef int index;
   index topicChoice;
   scanf("%d",&topicChoice);

   /**
    * @brief selectedTopic is a fuction call 
    * 
    */
   selectedTopic(topicChoice);
   
   
  
    
}