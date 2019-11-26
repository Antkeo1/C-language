// VARIABLES
#include <stdio.h> 
#include <stdbool.h> // allows me to use bool 

int main() {
    // variable a is an integer/ int 
    int a = 10;
    double b = 10.5; // the same as int but you can add a decimal, 64 bit number
    printf("%lu\n", sizeof(b)); // 8 bytes = 64 bits
    
    float c = 10.5; // 32 bit number
    printf("%lu\n", sizeof(c)); // 4 bytes = 32 bits, will take less memory

    char d = 'a';
    char e[] = "char array"; // a string

    bool f = false;

    // int zero = .99999999; // will equal to 0
    // printf("zero is %d\n", zero);

    int slices = 17;
    int people = 2;
    double slicesPerPerson =  slices / people; // would equal to 8 even correct math answer is 8.5
    // (double): unary operator, it will only work on varible closet to it, in this case slices
    double actualSlicesPerPerson = (double) slices /* 17.0 */ / people; /* 8.5 */ // will equal to 8.5

    printf("%lf\n", slicesPerPerson); // %lf for a double
    printf("%lf\n", actualSlicesPerPerson);

    double test1 = 25 / 2 * 2; // answer: 24.0
    double test2 = 25 / 2 * 2.0; // answer: 24.0

    double test3 = 25.0 / 2 * 2; //  answer: 25.0
    double test4 = (double) 25 / 2 * 2; //  answer: 25.0
    printf("%lf\n", test4);

    return 0;
}