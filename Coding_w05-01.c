#include <stdio.h>                                           //import the library

char name = 'F';                                             //Declare a character variable 'name' and made it 'F'
int age = 19;                                                //Declare a integer variable 'age' and made it '19'
float weight = 95.0;                                         //Declare a float variable 'weight' and made it '95.0'

int main() {                                                 //main function starts here

    printf("Student %c is %d years old.\n", name, age);      //display the value of the 'name' and 'age' of the student
    printf("His weight is %.1f kg.\n", weight);              //display the value of the 'weight' of the student

    return 0;                                                //the program running is successful
    
}
