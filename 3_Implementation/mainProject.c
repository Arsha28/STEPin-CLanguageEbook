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


#include"user.h"
#include"topicfunctions.h"




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
   
    printf("--------------------------------------");
    
    printf("Hi! There Please Enter the Details");
  
    printf("--------------------------------------");
   
    printf("*******************************************************\n");
    


  
   printf("First Name\t:");
  
   printf("Last Name\t:");
  
   printf("Email id\t:");
  
   printf("Phone Number\t:");
  
   printf("*******************************************************\n");
   
   scanf("%s",U.first);
 
   scanf("%s",U.last);
   
   scanf("%s",U.email);
  
   scanf("%s",U.phone);


   

    Topicindex();

   //topics(Topicchoice);

    return 0;


    }











