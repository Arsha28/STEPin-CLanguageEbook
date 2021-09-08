#include<stdio.h>
#include"user.h"
#include"panalcolor.h"
#include"topicfunctions.h"
#include<windows.h>
#include"topics.h"

void Topicindex(){
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
           printf("1.Introduction To C\n");
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
           int Topicchoice;
           setxy(65,18);
           printf("CHOOSE THE TOPIC NUMBER");
           setxy(90,18);
           scanf("%d",&Topicchoice);
           functions(Topicchoice);

}


void introductions(){
    system("cls");
    setxy(45,0);
    printf("--------------------------------------");
    setxy(48,1);
    printf("Introduction To C");
    setxy(45,2);
    printf("--------------------------------------");
    setxy(5,5);
    printf("****************************************************************************************************************\n");

    setxy(10,6);
    printf("|| C programming is a general-purpose, procedural, imperative computer programming language developed in");
    setxy(9,7);
    printf("\t1972 by Dennis M. Ritchie at the Bell Telephone Laboratories to develop the UNIX operating system. ");
    setxy(9,8);
    printf("\tC is the most widely used computer language. It keeps fluctuating at number one scale of popularity");
    setxy(9,9);
    printf("\talong with Java programming language, which is also equally popular and most widely used among modern");
    setxy(9,10);
    printf("\tsoftware programmers.");
    setxy(12,12);
    printf("--------------------------------------");
    setxy(14,13);
    printf("Facts about C");
    setxy(12,14);
    printf("--------------------------------------");

    setxy(13,15);
    printf("1.C was invented to write an operating system called UNIX.");
    setxy(13,16);
    printf("2.C is a successor of B language which was introduced around the early 1970s.");
    setxy(13,17);
    printf("3.The language was formalized in 1988 by the American National Standard Institute (ANSI).");
    setxy(13,18);
    printf("4.The UNIX OS was totally written in C.");
    setxy(13,19);
    printf("5.Most of the state-of-the-art software have been implemented using C.");
    setxy(20,23);
    printf("---------------------------------------------------------------------");
    setxy(36,24);
    printf("Hello World using C Programming.");
    setxy(20,25);
    printf("---------------------------------------------------------------------");
    setxy(35,26);
    printf("#include <stdio.h>");
    setxy(35,28);
    printf("int main(){");
    setxy(35,29);
    printf("\"Hello World\"");
    setxy(35,30);
    printf("return 0 ; }");
    setxy(20,33);
    printf("--------------------------------------------------------------");
    setxy(36,34);
    printf("Data Types");
    setxy(20,35);
    printf("--------------------------------------------------------------");
    setxy(35,36);
    printf("C supports the following basic data types:");
    setxy(35,37);
    printf("1.int: integer, a whole number.");
    setxy(35,38);
    printf("2.float: floating point, a number with a fractional part.");
    setxy(35,39);
    printf("3.double: double-precision floating point value.");
    setxy(35,40);
    printf("4.char: single character.");

    setxy(5,45);
    printf("***********************************************************************************************************");


}






void ConditionsLoops(){
    system("cls");
    setxy(45,0);
    printf("--------------------------------------");
    setxy(48,1);
    printf("Introduction to Conditions and Loops");
    setxy(45,2);
    printf("--------------------------------------");
    setxy(5,5);
    printf("****************************************************************************************************************");

    setxy(10,6);
    printf("|| Conditionals are used to perform different computations or actions depending on whether a condition");
    setxy(10,7);
    printf("evaluates to true or false.");
    setxy(10,9);
    printf("\tThe if Statement");
    setxy(10,10);
    printf("||The if statement is called a conditional control structure because it executes statements when an");
    setxy(10,11);
    printf("expression is true. For this reason,the if is also known as a decision structure. It takes the form: ");

    setxy(12,13);
    printf("\tif (expression)");
    setxy(12,14);
    printf("\t\tstatements");
    setxy(9,15);
    printf("||The expression evaluates to either true or false, and statements can be a single statement or a code");
    setxy(9,16);
    printf("block enclosed by curly braces { }.");


    setxy(12,17);
    printf("--------------------------------------");
    setxy(18,18);
    printf("For example:");
    setxy(12,19);
    printf("--------------------------------------");

    setxy(13,20);
    printf("#include<stdio.h>");
    setxy(13,21);
    printf("int main(){");
    setxy(13,22);
    printf("int score=80");
    setxy(13,23);
    printf("if score>75");
    setxy(13,24);
    printf("printf(\"you passed\") ");
    setxy(13,25);
    printf("}");

    setxy(30,27);
    printf("----------------------------------------------");
    setxy(46,28);
    printf("NESTED IF ");
    setxy(30,29);
    printf("-----------------------------------------------");
    setxy(13,30);
    printf("An if statement can include another if statement to form a nested statement. Nesting an if allows a");
    setxy(13,31);
    printf("decision to be based on further requirements.");

    setxy(35,32);
    printf("#include <stdio.h>");
    setxy(35,33);
    printf("int main(){");
    setxy(35,34);
    printf("int p=12000");
    setxy(35,35);
    printf("if(p>1000)");
    setxy(35,36);
    printf("\tif(l>100)");
    setxy(35,37);
    printf("\tbonus=10000");
    setxy(35,38);
    printf("else");
    setxy(35,39);
    printf("\tbonus=2000");
    setxy(35,40);
    printf("}");
    setxy(5,41);
    printf("*****************************************************************************************************************");
    setxy(30,43);
    printf("----------------------------------------------");
    setxy(46,44);
    printf("SWITCH");
    setxy(30,45);
    printf("-----------------------------------------------");
    setxy(10,46);
    printf("||The switch statement branches program control by matching the result of an expression with a constant case");
    setxy(10,47);
    printf("value.The switch statement often provides a more elegant solution to if-else if and nested if statements.");
    setxy(10,48);
    printf("The switch takes the form:");
    setxy(30,50);
    printf("Example");
    setxy(31,52);
    printf("switch (expression) {");
    setxy(31,53);
    printf("\tcase val1:");
    setxy(31,54);
    printf("\tstatements");
    setxy(31,55);
    printf("break;");
    setxy(31,56);
    printf("\tcase val1:");
    setxy(31,57);
    printf("\tstatements");
    setxy(31,58);
    printf("break;");
    setxy(31,59);
    printf("default");
    setxy(31,60);
    printf("statements");
    setxy(32,61);
    printf("}");


    setxy(5,62);
    printf("**********************************************************************************************");
    setxy(30,63);
    printf("-------------------------------------");
    setxy(46,64);
    printf("WHILE LOOP");
    setxy(30,65);
    printf("--------------------------------------");
    setxy(10,66);
    printf("||The while statement is called a loop structure because it executes statements repeatedly while an");
    setxy(10,67);
    printf("expression is true, looping over and over again. It takes the form:");
    setxy(30,69);
    printf("Expression");
    setxy(25,71);
    printf("while(condition){");
    setxy(25,72);
    printf("statements\t}");
    setxy(5,73);
    printf("************************************************************************************************");
    setxy(30,76);
    printf("-------------------------------------");
    setxy(46,77);
    printf("FOR LOOP");
    setxy(30,78);
    printf("--------------------------------------");
    setxy(10,80);
    printf("||The for statement is a loop structure that executes statements a fixed number of times.");
    setxy(30,81);
    printf("for (initvalue; condition; increment) {");
    setxy(30,82);
    printf("statements;\t}");

    setxy(10,83);
    printf("The initvalue is a counter set to an initial value. This part of the for loop is performed only once.");
    setxy(10,84);
    printf("The condition is a Boolean expression that compares the counter to a value before each loop iteration,");
    setxy(10,85);
    printf("stopping the loop when false is returned.");
    setxy(10,86);
    printf("The increment increases (or decreases) the counter by a set value.");
    setxy(5,88);
    printf("***********************************************************************************************************************");



}


void  FunctionsArraypointer(){
    system("cls");
    setxy(45,0);
    printf("--------------------------------------------------------");
    setxy(45,1);
    printf("Introduction to Arrays, Pointer and Functions");
    setxy(45,2);
    printf("--------------------------------------------------------");
    setxy(5,5);
    printf("****************************************************************************************************************");

    setxy(9,6);
    printf("|| Functions are central to C programming and are used to accomplish a program solution as a series of subtasks.");
    setxy(9,7);
    printf("By now you know that every C program contains a main() function. And you're familiar with the printf() function.");
    setxy(9,9);
    printf("\tYou can also create your own functions.");




    setxy(10,10);
    printf("||A function:");
    setxy(10,11);
    printf("*is a block of code that performs a specific task ");
    setxy(10,12);
    printf("*is reusable ");
    setxy(10,13);
    printf("*makes a program easier to test");
    setxy(10,14);
    printf("*can be modified without changing the calling program");
    setxy(10,15);
    printf("*Even a simple program is easier to understand when main() is broken down into subtasks that are implemented ");
    setxy(10,16);
    printf("*with functions.");

    setxy(35,18);
    printf("int main() {");
    setxy(37,19);
    printf("int x, result;");
    setxy(37,20);
    printf("x = 5;");
    setxy(37,21);
    printf("result = square(x);");
    setxy(37,22);
    printf("return 0;\t}");
    setxy(5,23);
    printf("*******************************************************************************************************************");

    setxy(30,25);
    printf("---------------------------------------");
    setxy(46,26);
    printf("Array");
    setxy(30,27);
    printf("----------------------------------------");

    setxy(5,28);
    printf("||An array is a data structure that stores a collection of related values that are all the same type.");
    setxy(5,29);
    printf("Arrays are useful because they can represent related data with one descriptive name rather than using");
    setxy(5,30);
    printf("separate variables that each must be named uniquely.");
    setxy(5,31);
    printf("For example, the array test_scores[25] can hold 25 test scores.");
    setxy(5,32);
    printf("An array declaration includes the type of the values it stores, an identifier, and square brackets [ ]");
    setxy(5,33);
    printf("with a number that indicates the array size.");
    setxy(30,35);
    printf("Example");
    setxy(30,36);
    printf("int test_scores[25]; /* An array size 25 */ ");
    setxy(30,37);
    printf("You can also initialize an array when it is declared, as in the following statement:");
    setxy(30,38);
    printf("float prices[5] = {3.2, 6.55, 10.49, 1.25, 0.99};");
    setxy(30,39);
    printf("Note that initial values are separated by commas and placed inside curly braces { }.");
    setxy(30,40);
    printf("An array can be partially initialized, as in:");
    setxy(30,41);
    printf("float prices[5] = {3.2, 6.55}; ");

    setxy(5,43);
    printf("**************************************************************************************************************");




    setxy(30,45);
    printf("---------------------------------------");
    setxy(46,46);
    printf("Pointer");
    setxy(30,47);
    printf("----------------------------------------");
    setxy(10,49);
    printf("||C is designed to be a low-level language that can easily access memory locations and perform memory-related");
    setxy(10,50);
    printf("operations.For instance, the scanf() function places the value entered by the user at the location, or address,");
    setxy(10,51);
    printf("of the variable. This is accomplished by using the & symbol.");

    setxy(30,52);
    printf("Example");
    setxy(35,53);
    printf("int num;");
    setxy(35,54);
    printf("printf(\"Enter a number;\")");
    setxy(35,55);
    printf("scanf(d,&num)");
    setxy(35,56);
    printf("printf(\"d\",num");
    setxy(5,57);
    printf("&num is the address of variable num.A memory address is given as a hexadecimal number. Hexadecimal, or hex,");
    setxy(5,58);
    printf("is a base-16 number system that uses digits 0 through 9 and letters A through F (16 characters)");
    setxy(5,59);
    printf("to represent a group of four binary digits that can have a value from 0 to 15.");
    setxy(5,60);
    printf("It's much easier to read a hex number that is 8 characters long for 32 bits of memory than to try to decipher ");
    setxy(5,61);
    printf("32 1s and 0s in binary.The following program displays the memory addresses for variables i and k\")");


}

void stringsf(){
    system("cls");
    setxy(45,0);
    printf("--------------------------------------");
    setxy(45,1);
    printf("Introduction to Strings");
    setxy(45,2);
    printf("--------------------------------------");
    setxy(5,5);
    printf("****************************************************************************************************************");

    setxy(9,6);
    printf("|| A string in C is an array of characters that ends with a NULL character 0.A string declaration can be made");
    setxy(9,7);
    printf("in several ways, each with its own considerations.");
    setxy(30,9);
    printf("Example");
    setxy(30,10);
    printf("------------");
    setxy(35,11);
    printf("char str_name[str_len] = \"string\"; ");

    setxy(10,13);
    printf("This creates a string named str_name of str_len characters and initializes it to");
    setxy(10,14);
    printf("the value \"string\". ");
    setxy(10,15);
    printf("When you provide a string literal to initialize the string, the compiler automatically adds a NULL character");
    setxy(10,16);
    printf("to the char array.For this reason, you must declare the array size to be at least one character longer ");
    setxy(10,17);
    printf(" than the expected string length.");
    setxy(10,18);
    printf("The statements below creates strings that include the NULL character. If the");
    setxy(10,19);
    printf("declaration does not include a char array size, then it will be calculated based");
    setxy(10,20);
    printf("declaration does not include a char array size, then it will be calculated based");
    setxy(10,21);
    printf("on the length of the string in the initialization plus one for 0:");


    setxy(10,24);
    printf("||A string pointer declaration such as char *str = \"stuff\"; is considered a constant and cannot be changed");
    setxy(10,25);
    printf("from its initial value.To safely and conveniently operate with strings, you can use the Standard Library ");
    setxy(10,26);
    printf("string functions shown below. Don't forget to include <string.h>.");
    setxy(10,27);
    printf("||strlen() - get length of a string");
    setxy(10,28);
    printf("||strcat() - merge two strings");
    setxy(10,29);
    printf("||strcpy() - copy one string to another");
    setxy(10,30);
    printf("||strlwr() - convert string to lower case");

    setxy(10,31);
    printf("||strupr() - convert string to upper case");
    setxy(10,32);
    printf("||strrev() - reverse string");
    setxy(10,33);
    printf("strcmp() - compare two strings");



    setxy(5,48);
    printf("*********************************************************************************************************************");





}


void StructureF(){

    system("cls");
    setxy(45,0);
    printf("--------------------------------------");
    setxy(45,1);
    printf("Introduction to Structure");
    setxy(45,2);
    printf("--------------------------------------");
    setxy(5,5);
    printf("****************************************************************************************************************");

    setxy(9,6);
    printf("|| A structure is a user-defined data type that groups related variables of different data types.");
    setxy(9,7);
    printf("A structure declaration includes the keyword struct, a structure tag for referencing the structure, and curly ");
    setxy(9,9);
    printf("braces { } with a list of variable declarations called members.\"");
    setxy(30,12);
    printf("Example");
    setxy(30,13);
    printf("----------");

    setxy(35,14);
    printf("struct course {");
    setxy(35,15);
    printf(" int id;");
    setxy(35,16);
    printf("char title[40];");
    setxy(35,17);
    printf("float hours; ");
    setxy(35,18);
    printf("};");

    setxy(9,20);
    printf("This struct statement defines a new data type named course that has three members.");
    setxy(9,21);
    printf(" Structure members can be of any data type, including basic types, strings,");
    setxy(9,22);
    printf("arrays, pointers, and even other structures, as you will learn in a later lesson.;");







}



void memoryManagement(){


    system("cls");
    setxy(45,0);
    printf("--------------------------------------");
    setxy(45,1);
    printf("Introduction to Memory Management");
    setxy(45,2);
    printf("--------------------------------------");
    setxy(5,5);
    printf("****************************************************************************************************************");

    setxy(9,6);
    printf("|| Understanding memory is an important aspect of C programming. When you declare a variable using a basic data ");
    setxy(9,7);
    printf("type, C automatically allocates space for the variable in an area of memory called the stack.An int variable, ");
    setxy(9,9);
    printf(" for example, is typically allocated 4 bytes when declared. We know this by using the sizeof operator:");

    setxy(30,12);
    printf("Example");
    setxy(30,13);
    printf("----------");

    setxy(35,14);

    setxy(35,15);
    printf(" int id;");
    setxy(35,16);
    printf("char title[40];");
    setxy(35,17);
    printf("float hours; ");
}




void functions(int Topicchoice ){


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
}
