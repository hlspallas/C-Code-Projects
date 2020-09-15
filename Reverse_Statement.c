//
//  main.c
// 
//
// Created by Hunter Spallas on 3/25/17.
// Copyright © 2017 Hunter Spallas. All rights reserved.
// Author: Hunter Spallas
// Created: 03/28/2017
// Input: Statement
// Output: prints statement in reverse
// Prints how many words in the statement

#include <stdio.h>
#include <string.h>
int main(void) {

long long int i;
    int counter = 1;
char statement[1000];


    printf("Enter a statement: \n");
    fgets(statement, 1000, stdin);      //Reads the statement with the spaces


    for(i=strlen(statement);i >= 0; i--){  //starts with the position of the last letter and switches each
        if(statement[i] == ' '){            // letter until position zero
            printf(" ");
            counter++;                      //Counts words in the statement
        }
        else{
            printf("%c", statement[i]);
        }

    }







    printf("\n");
    printf("There are %d words in the statement\n", counter);   //Print statements





    return 0;
}
