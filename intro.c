#include <stdio.h> // to allow us use functions from the <stdio.h> library 

// a function that will execute when our program runs
int main()
{
    printf("Hello World\n"); // to print to the console simular to console.log()

    // a variable named x and y
    int x = 50;
    int y; // declaration 
    y = 10; // intialization

    printf("%s World\n", "Hello"); // printing to console using a format string, %s will represent Hello 
    printf("The value of x is %d\n", x); // printing a variable, %d will represent the variable x 
    printf("X: %d, Y: %d\n", x, y); // to print out multiple variables

    printf("Give me a radius: ");
    int radius;
    // takes two arguments, format string + &variableName
    scanf("%d", &radius); // when we want to change value of variable we need adress of operator (&) === (pointer)

    printf("You chose the value %d\n", radius);
    return 0;
}

