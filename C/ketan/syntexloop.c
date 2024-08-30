// what is loop ?
// -> loop is a control structure that repeats a group of statements a specified number of times.


// Types of loop in C programming
// 1. for loop
// 2. while loop
// 3. do-while loop 

// --------------------------------------------------------------------------------------------------------------

// for loop in C programming
// -> for loop is a most commonly used loop in C programming. 

// The syntax of for loop is:   
// for(initialization; condition; increment/decrement)
// {
//     // statements to be executed
// }

// --------------------------------------------------------------------------------------------------------------

// while loop in C programming
// -> while loop is also a most commonly used loop in C programming.

// The syntax of while loop is:
// initialization;
// while(condition)
// {
//     // statements to be executed
       // increment/decrement;
// }



// --------------------------------------------------------------------------------------------------------------

// do-while loop in C programming
// -> do-while loop is an exit control loop.

// The syntax of do-while loop is:
// initialization;
// do
// {
//     // statements to be executed
//     // increment/decrement;
// }while(condition);


// --------------------------------------------------------------------------------------------------------------


// Example of for loop 

#include <stdio.h>
#include <conio.h>

int main()
{
    int i;

    for(i = 0; i <= 5 ; i++)
    {
        printf("Hello World\n");
    }
}


// --------------------------------------------------------------------------------------------------------------

// Example of while loop

#include <stdio.h>
#include <conio.h>

int main()
{
    int i = 0;
    while(i <= 5)
    {
        printf("Hello World\n");
        i++;
    }
}

// --------------------------------------------------------------------------------------------------------------

// Example of do-while loop

#include <stdio.h>
#include <conio.h>

int main()
{
    int i = 0;
    do
    {
        printf("Hello World\n");
        i++;
    }while(i <= 5);
}
