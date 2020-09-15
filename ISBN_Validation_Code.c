//
//  main.c
//  
//
//  Created by Hunter Spallas on 1/30/17.
//  Copyright © 2017 Hunter Spallas. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {

   //Author: Hunter Spallas
   //Created: 1/30/17
   //Input: ISBN number
   //Output: Whether or not the ISBN number is valid
   //Relationship: Using a formula and equation, the code can be considered valid based on the code that the user inputs



    int digitOne;
    int digitTwo;
    int digitThree;
    int digitFour;
    int digitFive;
    int digitSix;
    int digitSeven;
    int digitEight;
    int digitNine;
    int digitTen;
    int digitEleven;
    int digitTwelve;
    int digitThirteen;
    int productSum;
    int checkDigit;

    printf("Enter a 13-digit ISBN code:\n");
    scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d", &digitOne, &digitTwo, &digitThree, &digitFour, &digitFive, &digitSix, &digitSeven, &digitEight, &digitNine, &digitTen, &digitEleven, &digitTwelve, &digitThirteen);

    productSum = (digitOne * 1)+(digitTwo * 3)+(digitThree * 1)+(digitFour * 3)+(digitFive * 1)+(digitSix * 3)+(digitSeven * 1)+(digitEight * 3)+(digitNine * 1)+(digitTen * 3)+(digitEleven * 1)+(digitTwelve * 3);

    checkDigit = 10 - (productSum%10);

    if(checkDigit == digitThirteen){
        printf("This is a valid ISBN code!\n");
    }
    else
        printf("This is not a valid ISBN code!\n");




    return 0;
}



