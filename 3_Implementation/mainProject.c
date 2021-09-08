/**
 * @file mainProject.c
 * @author Arshad (you@domain.com)
 * @brief This is the main file of the project
 * @version 0.1
 * @date 2021-09-07
 *
 * @copyright Copyright (c) 2021
 *
 */

#include<stdio.h>
#include "panalcolor.h"
#include <windows.h>
#include"user.h"
#include"topicfunctions.h"
#include"topics.h"



/**
 * @brief The main function takes the user details
 *
 * @return int
 */


int main(){
    /**
     * @brief U is the object to the user
     *
     */
    user U;

    /**
     * @brief setxy is function it takes the x,y int input and set their position on the compiler
     *
     */
    setxy(45,0);
    printf("--------------------------------------");
    setxy(48,1);
    printf("Hi! There Please Enter the Details");
    setxy(45,2);
    printf("--------------------------------------");
    setxy(35,5);
    printf("*******************************************************\n");
    system("color 60");
    for(int pos=5;pos<12;pos++){
    setxy(35,pos);
    printf("*");
    }
    for(int pos=5;pos<12;pos++){
    setxy(90,pos);
    printf("*");
    }

   setxy(40,7);
   printf("First Name\t:");
   setxy(40,8);
   printf("Last Name\t:");
   setxy(40,9);
   printf("Email id\t:");
   setxy(40,10);
   printf("Phone Number\t:");
   setxy(35,12);
   printf("*******************************************************\n");
   setxy(60,7);
   scanf("%s",U.first);
   setxy(60,8);
   scanf("%s",U.last);
   setxy(60,9);
   scanf("%s",U.email);
   setxy(60,10);
   scanf("%s",U.phone);


    system("cls");


    Topicindex();

   //topics(Topicchoice);

    return 0;


    }











