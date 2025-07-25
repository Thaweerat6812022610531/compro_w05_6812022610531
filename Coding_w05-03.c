#include <stdio.h>              //import the library
                                      
float a = 0.617;                      //Declare a float variable 'a' and made it '0.617'               
int b = 25;                           //Declare an integer variable 'b' and made it '25'
float c = 19.000;                     //Declare a float variable 'c' and made it '19.000'
int d = 9;                            //Declare an integer variable 'd' and made it '9'
float e = 124.555;                    //Declare a float variable 'e' and made it '124.555'
float f = 0.001;                      //Declare a float variable 'f' and made it '0.001'    

int main() {                                           //main function starts here

    printf("a=%6.3f%%\n", a);                           //display the value of 'a' with 3 decimal and 6 total width
    printf("b=%4d%%\n", b);                             //display the value of 'b' with 4 total width
    printf("c =%6.3f%%\n", c);                          //display the value of 'c' with 3 decimal and 6 total width, and equal sign is not aligned (1 spaces)
    printf("d  =%-2d%%\n", d);                          //display the value of 'd' with 2 total width, left aligned, and equal sign is not aligned (2 spaces)
    printf("e=%.3f%%\n", e);                            //display the value of 'e' with 3 decimal
    printf("f=%.3f%%\n", f);                            //display the value of 'f' with 3 decimal 
    return 0;                                           //the program running is successful
}