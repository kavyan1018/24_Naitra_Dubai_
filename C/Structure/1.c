// What is Structure in c ?

// Structure is user defined data type that allows you to combine data items of different kinds. Structure is used to represent a record. Suppose you want to store the information about a person: his/her name, citizenship number, address, age etc. You can easily create a structure that can hold all this information.

// Syntax of structure:

#include <stdio.h>
#include <conio.h>

struct Student
{
    int Roll_No;
    char Name;
    int Std;
};


void main()
{
    struct Student a1, a2, a3, a4, a5;

    printf("Enter Your Roll Number :-");
    scanf("%d",&a1.Roll_No);

    printf("Enter Your Name :");
    scanf("%s",&a1.Name);

    printf("Enter Your Std :-");
    scanf("%d",& a1.Std);


    // 1.
    printf("%d\t %s\t %d\t",a1.Roll_No, a1.Name, a1.Std);
}