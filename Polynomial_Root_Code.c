//
//  main.c
//  hw3p2.c
//
//  Created by Hunter Spallas on 2/5/17.
//  Copyright © 2017 Hunter Spallas. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {

    //Author: Hunter Spallas
   //Created: 02/07/2017
   //Input: the coefficients for a 5th degree polynomial and a guess for x
   //Output: The polynomial, a root of the polynomial, and the number of iterations it takes to find the root
   //Relationship: Using the Newton - Raphson method, the program uses the polynomial and its derivative to calculate a root of the polynomial given an x value


    float x;
    float c0;
    float c1;
    float c2;
    float c3;
    float c4;
    float c5;
    float y;
    float dY;
    int iterationCount = 0;


    printf("\nThis program will find one root of a 5th-order polynomial using Newton-Rhapson method.\n\n c5x^5 + c4x^4 + c3x^3 + c2x^2 + c1x + c0\n\n");

    printf("Enter polynomial coefficients: c5 c4 c3 c2 c1 c0 in this order: \n");
    scanf("%f %f %f %f %f %f", &c5, &c4, &c3, &c2, &c1, &c0);


    if(c5 != 0){
        printf("Your polynomial is %.1fx^5 + %.1fx^4 + %.1fx^3 + %.1fx^2 + %.1fx + %.1f\n\n", c5, c4, c3, c2, c1, c0);
    }
    else if(c5 == 0 && c4 == 0 && c3 == 0 && c2 == 0 && c1 == 0){
        printf("Your polynomial is %.1f\n", c0);
    }
    else if(c5 == 0 && c4 == 0 && c3 == 0 && c2 == 0){
        printf("Your polynomial is %.1fx + %.1f\n", c1, c0);
    }
    else if(c5 == 0 && c4 == 0 && c3 == 0){
        printf("Your polynomial is %.1fx^2 + %.1fx + %.1f\n", c2, c1, c0);
    }
    else if(c5 == 0 && c4 == 0){
        printf("Your polynomial is %.1fx^3 + %.1fx^2 + %.1fx + %.1f\n", c3,c2,c1,c0);
    }
    else if(c5 == 0){
        printf("Your polynomial is %.1fx^4 + %.1fx^3 + %.1fx^2 + %.1fx + %.1f\n", c4,c3,c2,c1,c0);
    }
    printf("Enter initial guess for x: \n");
    scanf("%f", &x);


    y = (c5 * (pow(x,5))) + (c4 * (pow(x,4))) + (c3 * (pow(x, 3))) + (c2 * (pow(x, 2))) + (c1 * x) + (c0);



    if(y <= (1E-8)){

    printf("One of the roots of this polynomial is %f\n", x);
    }

    while(y > (.00000001) && iterationCount <= 500){
        dY = ((5 * c5 * (pow(x,4))) + (4 * c4 * (pow(x,3))) + (3 * c3 *(pow(x,2))) + (2 * c2 * (x)) + c1);
        x = x - (y/dY);
        iterationCount = iterationCount +1;
    y = (c5 * (pow(x,5))) + (c4 * (pow(x,4))) + (c3 * (pow(x, 3))) + (c2 * (pow(x, 2))) + (c1 * x) + (c0);
        }
    if(iterationCount > 500){
        printf("The algorithm failed; roots may be complex\n");
    } else{
        printf("One of the roots of this polynomial is: %f\n", x);


    printf("It takes %d iterations to obtain this answer.\n", iterationCount);
    }










    return 0;
}
