// types of function in c programming
// 1. User-defined function


// wr-wa => with return type and with argument
// wr-na => with return type and No argument
// nr-wa => No return type and with argument
// nr-na  => No return type and No argument



// NR - NA => No return type and No argument

// Two nubers addition

#include<stdio.h>
#include<conio.h>
int addfun();
void main(){

    addfun();

}

int addfun(){

    int a, b, sum = 0;

    printf("Enter the first number :- ");
    scanf("%d", &a);

    printf("Enter the second number :- ");
    scanf("%d", &b);

    sum = a + b;

    printf("The sum of the two numbers is %d\n", sum);

}