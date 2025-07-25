#include <stdio.h>          //import the library

char first_name;            //Declare a character variable 'first_name' to hold the first student's name
int first_age;              //Declare an integer variable 'first_age' to hold the first student's age
float first_height;         //Declare a float variable 'first_height' to hold the first student's height
float first_weight;         //Declare a float variable 'first_weight' to hold the first student's weight
char first_grade;           //Declare a character variable 'first_grade' to hold the first student's grade

char second_name;           //Declare a character variable 'second_name' to hold the second student's name
int second_age;             //Declare an integer variable 'second_age' to hold the second student's age
float second_height;        //Declare a float variable 'second_height' to hold the second student's height
float second_weight;        //Declare a float variable 'second_weight' to hold the second student's weight
char second_grade;          //Declare a character variable 'second_grade' to hold the second student's grade

char third_name;            //Declare a character variable 'third_name' to hold the third student's name
int third_age;              //Declare an integer variable 'third_age' to hold the third student's age
float third_height;         //Declare a float variable 'third_height' to hold the third student's height
float third_weight;         //Declare a float variable 'third_weight' to hold the third student's weight
char third_grade;           //Declare a character variable 'third_grade' to hold the third student's grade

int main(){                 //main function starts here

    //Input
    printf("Enter first student's name, age, height(cm), weight(kg), and grade: (T*19*170.1*52.3*A)\n");     //display prompt for user input
    scanf(" %c*%d*%f*%f*%c", &first_name, &first_age, &first_height, &first_weight, &first_grade);           //read user input for first student's name, age, height, weight, and grade
    
    printf("Enter second student's name, age, height(cm), weight(kg), and grade: (T*19*170.1*52.3*A)\n");    //display prompt for user input
    scanf(" %c*%d*%f*%f*%c", &second_name, &second_age, &second_height, &second_weight, &second_grade);      //read user input for second student's name, age, height, weight, and grade

    printf("Enter third student's name, age, height(cm), weight(kg), and grade: (T*19*170.1*52.3*A)\n");     //display prompt for user input
    scanf(" %c*%d*%f*%f*%c", &third_name, &third_age, &third_height, &third_weight, &third_grade);           //read user input for third student's name, age, height, weight, and grade

    //Output
    printf("+--------+-----+-----------+-----------+------------+\n");                                                          // display the border of the table
    printf("|  Name  | Age | Height(cm)| Weight(kg)| Grade Code |\n");                                                          // display the header of the table
    printf("+--------+-----+-----------+-----------+------------+\n");                                                          // display the border of the table
    printf("|%-8c|%5d|%11.1f|%11.1f|%12c|\n", first_name, first_age, first_height, first_weight, first_grade);                  // display the first student's information
    printf("|%-8c|%5d|%11.1f|%11.1f|%12c|\n", second_name, second_age, second_height, second_weight, second_grade);             // display the second student's information
    printf("|%-8c|%5d|%11.1f|%11.1f|%12c|\n", third_name, third_age, third_height, third_weight, third_grade);                  // display the third student's information
    printf("+--------+-----+-----------+-----------+------------+\n");

    return 0;                                                                                                                   //the program running is successful
}