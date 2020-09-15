//
//  main.c
// 
//
//  Created by Hunter Spallas on 2/8/17.
//  Copyright © 2017 Hunter Spallas. All rights reserved.
//
//Author: Hunter Spallas
//Created: 02/12/2017
//Input: A number between 1 and 4, and a value of x.
//Output: The value of the function
//Relationship: The program uses the user input of x and puts it into whatever function that was tagged in a number between 1 and 4.


#include <stdio.h>
#include <math.h>

//Different functions for the different operations

double factorial(int n){
    double product = 1.0;
    int i;
    for(i = 2; i<=n; i++)
        product = product * i;
    return product;
}
double my_cosh(double xVal){
    int j = 0;
    double y = 0;
    double sum = 0;

    for( j = 0; j < 38; j = j+2){
        y = (pow(xVal,j+2))/(factorial(j+2));
    sum = sum + y;

    }
    sum = sum +1;
    return (sum);
}
double my_sinh(double xVal){
    int j = 1;
    double y = 0;
    double sum = 0;

    for( j = 1; j < 39; j = j+2){
        y = (pow(xVal,j+2))/(factorial(j+2));
        sum = sum + y;
    }

    sum = sum + xVal;
    return (sum);
}
double my_sinh2(double xVal){
    int j = 1;
    double y = 0;
    double sum = 0;

    for( j = 1; j < 39; j = j+2){
        y = (pow(2 * xVal,j+2))/(factorial(j+2));
        sum = sum + y;
    }

    sum = sum + (2 * xVal);
    return (sum);
}
double my_cosh2(double xVal){
    int j = 0;
    double y = 0;
    double sum = 0;

    for( j = 0; j < 38; j = j+2){
        y = (pow(2 * xVal,j+2))/(factorial(j+2));
        sum = sum + y;
    }
    sum = sum + 1;
    return (sum);


}



int main(void){
        char userLetter;
        double xVal;
        double y;
        int userNum;
    while(userLetter != 'q'){
    printf("Option Function\n");
    printf("1\t\tsinh(x)\n");
    printf("2\t\tcosh(x)\n");
    printf("3\t\tsinh(2x)\n");
    printf("4\t\tcosh(2x)\n");
        printf("Enter option 1-4:\n");
        scanf("%d", &userNum);


        if(userNum == 1){

            printf("Enter value of x: ");
            scanf("%lf", &xVal);

            y = my_sinh(xVal);

            printf("sinh(%.3lf) = %.5lf\n", xVal, y);
        }

        else if(userNum == 2){
            printf("Enter value of x: ");
            scanf("%lf", &xVal);

            y = my_cosh(xVal);
            printf("cosh(%.3lf) = %.5lf\n", xVal, y);
}
        else if(userNum == 3){
            printf("Enter value of x: ");
            scanf("%lf", &xVal);
            y = my_sinh2(xVal);
            xVal = 2 * xVal;
            printf("sinh(%.3lf) = %.5lf\n", xVal, y);


        }
        else if(userNum == 4){
            printf("Enter value of x: ");
            scanf("%lf", &xVal);
            y = my_cosh2(xVal);
            xVal = xVal * 2;
            printf("cosh(%.3lf) = %.5lf\n", xVal, y);


        }
        printf("Do you want to continue (q to quit)? \n");
        scanf(" %c", &userLetter);
    }

    return 0;
    }



