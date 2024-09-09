// String methods in C
// String methods in C are the functions that are used to perform operations on strings. These methods are used to manipulate strings in C. Some of the commonly used string methods in C are:
// strlen(): This method is used to find the length of a string.
// strcpy(): This method is used to copy one string to another.
// strcat(): This method is used to concatenate two strings.
// strcmp(): This method is used to compare two strings.

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){

    char a[10];

    // strlen;

    puts("Enter the String :-");
    gets(a);

    strlen (a);

    puts("The length of the string is %d\n");
    puts(strlen(a));

}