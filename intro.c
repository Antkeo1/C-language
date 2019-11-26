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

    // created a character array of 20 characters
    // '\0' takes one spot and respresent end of a string, so we need to leave one spot
    // in a 20 character array we can store 19 characters
    printf("what is your name: ");
    char name[20]; 
    scanf("%19s", name);

    printf("Your name: %s\n", name);
    return 0;
}

