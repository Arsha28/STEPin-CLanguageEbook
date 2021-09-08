#include<stdio.h>
#include"user.h"

#include"topicfunctions.h"



int Topicindex(){
    
           printf("---------------------");
           
           printf("C - LANGUAGE E-BOOK");
          
           printf("---------------------");
          
           printf("*******************************************************\n");
           
           printf("1.Introduction To C\n");
           
           printf("2.Conditionals and Loops\n");

           printf("3.Functions, Array and Pointer\n");
        
           printf("4.Strings\n");
           
           printf("5.Structure\n");
           
           printf("6.Memory Management\n");
           
           printf("7.Files and Error Handilings\n");
          
           printf("8.The Processor\n");
           

           printf("********************************************************");
           int Topicchoice;
          
           printf("CHOOSE THE TOPIC NUMBER");
          
           scanf("%d",&Topicchoice);
           functions(Topicchoice);
           return 0;

}


void introductions(){
    
    printf("--------------------------------------\n");
   
    printf("Introduction To C\n");
    
    printf("--------------------------------------\n");
   
    

    
    printf("|| C programming is a general-purpose, procedural, imperative computer programming language developed in\n");
    
    printf("\t1972 by Dennis M. Ritchie at the Bell Telephone Laboratories to develop the UNIX operating system. ");
   
    printf("\tC is the most widely used computer language. It keeps fluctuating at number one scale of popularity");
    
    printf("\talong with Java programming language, which is also equally popular and most widely used among modern");
    
    printf("\tsoftware programmers.\n");
    
    printf("--------------------------------------");
   
    printf("Facts about C");
   
    printf("--------------------------------------");

    
    printf("1.C was invented to write an operating system called UNIX.\n");
   
    printf("2.C is a successor of B language which was introduced around the early 1970s.\n");
    
    printf("3.The language was formalized in 1988 by the American National Standard Institute (ANSI).\n");
    
    printf("4.The UNIX OS was totally written in C.\n");
    
    printf("5.Most of the state-of-the-art software have been implemented using C.\n");
    
    printf("---------------------------------------------------------------------\n");
    
    printf("Hello World using C Programming.\n");
    
    printf("---------------------------------------------------------------------\n");
    
    printf("#include <stdio.h>");
    
    printf("int main(){\n");
    
    printf("\"Hello World\"");
    
    printf("return 0 ; }");
   
    printf("--------------------------------------------------------------");
    
    printf("Data Types");
    
    printf("--------------------------------------------------------------");
    
    printf("C supports the following basic data types:");
   
    printf("1.int: integer, a whole number.");
    
    printf("2.float: floating point, a number with a fractional part.");
    
    printf("3.double: double-precision floating point value.");
    
    printf("4.char: single character.\n");

    
    printf("***********************************************************************************************************");


}






void ConditionsLoops(){
    
    printf("--------------------------------------\n");
    
    printf("Introduction to Conditions and Loops");
   
    printf("--------------------------------------\n\n");
   
    
    printf("|| Conditionals are used to perform different computations or actions depending on whether a condition");
   
    printf("evaluates to true or false.");
    
    printf("\tThe if Statement");
    
    printf("||The if statement is called a conditional control structure because it executes statements when an");
    
    printf("expression is true. For this reason,the if is also known as a decision structure. It takes the form: ");

    
    printf("\tif (expression)");
   
    printf("\t\tstatements");
    
    printf("||The expression evaluates to either true or false, and statements can be a single statement or a code");
   
    printf("block enclosed by curly braces { }.");


    
    printf("--------------------------------------\n");
   
    printf("For example:");
    
    printf("--------------------------------------");

    
    printf("#include<stdio.h>");
    
    printf("int main(){");
    
    printf("int score=80");
    
    printf("if score>75");
    
    printf("printf(\"you passed\") ");
    
    printf("}");

    
    printf("----------------------------------------------");
    
    printf("NESTED IF ");
   
    printf("-----------------------------------------------");
    
    printf("An if statement can include another if statement to form a nested statement. Nesting an if allows a");
    
    printf("decision to be based on further requirements.");

    
    printf("#include <stdio.h>");
    
    printf("int main(){");
    
    printf("int p=12000");
    
    printf("if(p>1000)");
    
    printf("\tif(l>100)");
    
    printf("\tbonus=10000");
    
    printf("else");
    
    printf("\tbonus=2000");
   
    printf("}");
    
    printf("*****************************************************************************************************************");
   
    printf("----------------------------------------------");
    
    printf("SWITCH");
    
    printf("-----------------------------------------------");
    
    printf("||The switch statement branches program control by matching the result of an expression with a constant case");
    
    printf("value.The switch statement often provides a more elegant solution to if-else if and nested if statements.");
   
    printf("The switch takes the form:");
   
    printf("Example");
    
    printf("switch (expression) {");
    
    printf("\tcase val1:");
    
    printf("\tstatements");
    
    printf("break;");
    
    printf("\tcase val1:");
   
    printf("\tstatements");
    
    printf("break;");
   
    printf("default");
    
    printf("statements");
   
    printf("}");


    
    printf("**********************************************************************************************");
   
    printf("-------------------------------------");
    
    printf("WHILE LOOP");
    
    printf("--------------------------------------");
    
    printf("||The while statement is called a loop structure because it executes statements repeatedly while an");
    
    printf("expression is true, looping over and over again. It takes the form:");
    
    printf("Expression");
    
    printf("while(condition){");
   
    printf("statements\t}");
   
    printf("************************************************************************************************");
    
    printf("-------------------------------------");
    
    printf("FOR LOOP");
    
    printf("--------------------------------------");
    
    printf("||The for statement is a loop structure that executes statements a fixed number of times.");
   
    printf("for (initvalue; condition; increment) {");
    
    printf("statements;\t}");

    
    printf("The initvalue is a counter set to an initial value. This part of the for loop is performed only once.");
    
    printf("The condition is a Boolean expression that compares the counter to a value before each loop iteration,");
   
    printf("stopping the loop when false is returned.");
    
    printf("The increment increases (or decreases) the counter by a set value.");
    
    printf("***********************************************************************************************************************");

   

}


void  FunctionsArraypointer(){
    
    printf("--------------------------------------------------------");
    
    printf("Introduction to Arrays, Pointer and Functions");
    
    printf("--------------------------------------------------------");
    
    printf("****************************************************************************************************************");

    
    printf("|| Functions are central to C programming and are used to accomplish a program solution as a series of subtasks.");
    
    printf("By now you know that every C program contains a main() function. And you're familiar with the printf() function.");
    
    printf("\tYou can also create your own functions.");




    
    printf("||A function:");
    
    printf("*is a block of code that performs a specific task ");
    
    printf("*is reusable ");
    
    printf("*makes a program easier to test");
   
    printf("*can be modified without changing the calling program");
   
    printf("*Even a simple program is easier to understand when main() is broken down into subtasks that are implemented ");
    
    printf("*with functions.");

    
    printf("int main() {");
    
    printf("int x, result;");
  
    printf("x = 5;");
    
    printf("result = square(x);");
    
    printf("return 0;\t}");
   
    printf("*******************************************************************************************************************");

   
    printf("---------------------------------------");
   
    printf("Array");
  
    printf("----------------------------------------");

    printf("||An array is a data structure that stores a collection of related values that are all the same type.");
   
    printf("Arrays are useful because they can represent related data with one descriptive name rather than using");
 
    printf("separate variables that each must be named uniquely.");
    
    printf("For example, the array test_scores[25] can hold 25 test scores.");
   
    printf("An array declaration includes the type of the values it stores, an identifier, and square brackets [ ]");
    
    printf("with a number that indicates the array size.");
    
    printf("Example");
   
    printf("int test_scores[25]; /* An array size 25 */ ");
    
    printf("You can also initialize an array when it is declared, as in the following statement:");
    
    printf("float prices[5] = {3.2, 6.55, 10.49, 1.25, 0.99};");
   
    printf("Note that initial values are separated by commas and placed inside curly braces { }.");
   
    printf("An array can be partially initialized, as in:");
  
    printf("float prices[5] = {3.2, 6.55}; ");

    
    printf("**************************************************************************************************************");




    
    printf("---------------------------------------");
   
    printf("Pointer");
   
    printf("----------------------------------------");
   
    printf("||C is designed to be a low-level language that can easily access memory locations and perform memory-related");
    
    printf("operations.For instance, the scanf() function places the value entered by the user at the location, or address,");
    
    printf("of the variable. This is accomplished by using the & symbol.");

   
    printf("Example");
   
    printf("int num;");
    
    printf("printf(\"Enter a number;\")");
   
    printf("scanf(d,&num)");
    
    printf("printf(\"d\",num");
  
    printf("&num is the address of variable num.A memory address is given as a hexadecimal number. Hexadecimal, or hex,");
 
    printf("is a base-16 number system that uses digits 0 through 9 and letters A through F (16 characters)");
    
    printf("to represent a group of four binary digits that can have a value from 0 to 15.");
    
    printf("It's much easier to read a hex number that is 8 characters long for 32 bits of memory than to try to decipher ");
   
    printf("32 1s and 0s in binary.The following program displays the memory addresses for variables i and k\")");
  

}

void stringsf(){
    
    printf("--------------------------------------");
   
    printf("Introduction to Strings");
    
    printf("--------------------------------------");
   
    printf("****************************************************************************************************************");

  
    printf("|| A string in C is an array of characters that ends with a NULL character 0.A string declaration can be made");
    
    printf("in several ways, each with its own considerations.");
   
    printf("Example");
    
    printf("------------");
    
    printf("char str_name[str_len] = \"string\"; ");

    
    printf("This creates a string named str_name of str_len characters and initializes it to");
    
    printf("the value \"string\". ");
    
    printf("When you provide a string literal to initialize the string, the compiler automatically adds a NULL character");
  
    printf("to the char array.For this reason, you must declare the array size to be at least one character longer ");
    
    printf(" than the expected string length.");
    
    printf("The statements below creates strings that include the NULL character. If the");
   
    printf("declaration does not include a char array size, then it will be calculated based");
    
    printf("declaration does not include a char array size, then it will be calculated based");
   
    printf("on the length of the string in the initialization plus one for 0:");


    
    printf("||A string pointer declaration such as char *str = \"stuff\"; is considered a constant and cannot be changed");
    
    printf("from its initial value.To safely and conveniently operate with strings, you can use the Standard Library ");
    
    printf("string functions shown below. Don't forget to include <string.h>.");
    
    printf("||strlen() - get length of a string");
   
    printf("||strcat() - merge two strings");
    
    printf("||strcpy() - copy one string to another");
    
    printf("||strlwr() - convert string to lower case");

 
    printf("||strupr() - convert string to upper case");
   
    printf("||strrev() - reverse string");
    
    printf("strcmp() - compare two strings");



    
    printf("*********************************************************************************************************************");

   



}


void StructureF(){

    
    printf("--------------------------------------");
    
    printf("Introduction to Structure");
    
    printf("--------------------------------------");
    
    printf("****************************************************************************************************************");

    
    printf("|| A structure is a user-defined data type that groups related variables of different data types.");
  
    printf("A structure declaration includes the keyword struct, a structure tag for referencing the structure, and curly ");

    printf("braces { } with a list of variable declarations called members.\"");
    
    printf("Example");
    
    printf("----------");

    
    printf("struct course {");
   
    printf(" int id;");
   
    printf("char title[40];");
    
    printf("float hours; ");
    
    printf("};");

    
    printf("This struct statement defines a new data type named course that has three members.");
   
    printf(" Structure members can be of any data type, including basic types, strings,");
   
    printf("arrays, pointers, and even other structures, as you will learn in a later lesson.;");







}



void memoryManagement(){


   
    
    printf("--------------------------------------");
    
    printf("Introduction to Memory Management");
   
    printf("--------------------------------------");
   
    printf("****************************************************************************************************************");

    
    printf("|| Understanding memory is an important aspect of C programming. When you declare a variable using a basic data ");
  
    printf("type, C automatically allocates space for the variable in an area of memory called the stack.An int variable, ");
    
    printf(" for example, is typically allocated 4 bytes when declared. We know this by using the sizeof operator:");

    
    printf("Example");
  
    printf("----------");

    

  
    printf(" int id;");
   
    printf("char title[40];");
    
    printf("float hours; ");
}




int functions(int Topicchoice ){


    switch(Topicchoice)
    {
    case 1:
        introductions();
        break;
    case 2:
        ConditionsLoops();
        break;
    case 3:
        FunctionsArraypointer();
        break;
    case 4:
        stringsf();
        break;
    case 5:
        StructureF();
        break;
    case 6:
        memoryManagement();
        break;
    default :
        printf("Please enter a valid Number");



    }
    return 0;
    
}
