#include <stdio.h>                                      //import the library

int main() {                                            //main function starts here

    char name [30];                                     //Declare a character array 'name' to hold the student's name
    int age;                                            //Declare an integer variable 'age' to hold the student's age
    float height;                                       //Declare a float variable 'height' to hold the student's height 
    char subject;                                       //Declare a character variable 'subject' to hold the subject name
    float grade;                                        //Declare a float variable 'grade' to hold the student's grade
    char gradeLetter;                                   //Declare a character variable 'gradeLetter' to hold the letter grade

    printf("Enter your name, age, height(in centimeters), (e.g. Kyle 25 140.2). \n");          //display prompt for user input
    scanf("%s %d %f", name, &age, &height);                                                    //read user input for name, age, and height

    printf("Enter your subject's name, grade, grade letter (e.g. M 3.50 A)\n");                //display prompt for user input
    scanf(" %c %f %c",&subject, &grade, &gradeLetter);                                         //read user input for subject, grade, and grade letter                    

    printf("%s is %d years old and %.2f centimeters tall.\n", name, age, height);                                 //display the student's name, age, and height
    printf("In subject %c %s got %.2f which is symbolized as '%c' \n", subject, name, grade, gradeLetter);        //display the subject, student's name, grade, and letter grade
    


    return 0;                                         //the program running is successful
}

