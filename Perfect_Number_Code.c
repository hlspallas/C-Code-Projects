//
//  main.c
//  
//
//  Created by Hunter Spallas on 2/3/17.
//  Copyright © 2017 Hunter Spallas. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <stdbool.h>


int main(int argc, const char * argv[]) {

   //Author: Hunter Spallas
   //Created: 2/4/17
   //Input: A number
   //Output: Whether the number is perfect and the number of iterations performed
   //Relationship: The loop takes the user input number and figures out if the sum of its divisors equal the original number

int sum = 0;
int num;
int i = 1;
int iterationNum = 0;
char letter;
bool Play_again = true;

    while(Play_again == true){
        printf("Enter a perfect number: ");
        scanf("%d", &num);

        while(i < num){

            if(num%i == 0)

                sum = sum + i;

                i++;

            if(num%i == 0)
                iterationNum = iterationNum + 1;


    }

        if(sum == num)
            printf("Number %d is perfect\n", num);

        else
            printf("Number %d is not perfect\n", num);


        printf("Number of iterations: %d\n", iterationNum);

        printf("Do you want to continue (y/n)?\n");
        scanf(" %c", &letter);

        if(letter == 'n'){
            Play_again = false;
        }

    }
       printf("Goodbye!\n");



    return(0);
}
