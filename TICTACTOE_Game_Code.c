//
//  main.c
//  TicTacToe
//
//  Edited by Hunter Spallas on 9/15/20.
//  Copyright © 2020 Hunter Spallas. All rights reserved.
//

//
//  main.c
//  Tic Tac Toe
//
//
//  Copyright © 2017 Hunter Spallas. All rights reserved.
//  Author: Hunter Spallas
//  First Created: 03/20/2017
//  Game: Tic Tac Toe


#include <string.h>
#include <stdio.h>
#define p1 0
#define p2 1
#define TIE 2
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int check_board(int x[][3]){    //Checks for winner

    int i,j;
    int count = 0;
    if (x[0][0] == 'X' && x[1][0] == 'X' && x[2][0] == 'X') {   //Checks to see if the player wins
        return(0);
    }

    if (x[0][1] == 'X' && x[1][1] == 'X' && x[2][1] == 'X') {
        return(0);
    }

    if (x[0][2] == 'X' && x[1][2] == 'X' && x[2][2] == 'X') {
        return(0);
    }

    if ((x[0][0] == 'X' && x[0][1] == 'X' && x[0][2] == 'X')) {
        return(0);
    }

    if (x[1][0] == 'X' && x[1][1] == 'X' && x[1][2] == 'X') {
        return(0);
    }
    if (x[2][0] == 'X' && x[2][1] == 'X' && x[2][2] == 'X') {
        return(0);
    }
    if (x[0][0] == 'X' && x[1][1] == 'X' && x[2][2] == 'X') {
        return(0);
    }
    if (x[0][2] == 'X' && x[1][1] == 'X' && x[2][0] == 'X') {
        return(0);
    }




    if (x[0][0] == 'O' && x[0][1] == 'O' && x[0][2] == 'O') {    //Checks to see if the computer wins
        return(1);
    }

    if (x[1][0] == 'O' && x[1][1] == 'O' && x[1][2] == 'O') {
        return(1);
    }
    if (x[2][0] == 'O' && x[2][1] == 'O' && x[2][2] == 'O') {
        return(1);
    }

    if ((x[0][0] == 'O' && x[1][0] == 'O' && x[2][0] == 'O')) {
        return(1);
    }

    if (x[0][1] == 'O' && x[1][1] == 'O' && x[2][1] == 'O') {
        return(1);
    }
    if ((x[0][2] == 'O' && x[1][2] == 'O' && x[2][2] == 'O')) {
        return(1);
    }
    if (x[0][0] == 'O' && x[1][1] == 'O' && x[2][2] == 'O') {
        return(1);
    }

    if (x[0][2] == 'O' && x[1][1] == 'O' && x[2][0] == 'O') {
        return(1);
    }



    for (i = 0; i < 3; i++) {                  //Resets all spots in the array to a space/blank
        for (j = 0; j < 3; j++) {
            if (x[i][j] != 32) {
                count++;
            }
        }
    }
    if (count == 9) {                       //Checks for a TIE
        return(2);

    }
    else {
        return(4);
    }
}





void print_board(int x[][3]){          //Prints the board



    printf("                      Position Coordinates\n\n");
    printf("      |     |                |     |     \n");
    printf("   %c  |  %c  |  %c        (0,0)|(0,1)|(0,2)\n", x[0][0], x[0][1], x[0][2]);
    printf("      |     |                |     |     \n");
    printf(" ----- ----- -----      ----- ----- -----\n");
    printf("      |     |                |     |     \n");
    printf("   %c  |  %c  |  %c        (1,0)|(1,1)|(1,2)\n", x[1][0], x[1][1], x[1][2]);
    printf("      |     |                |     |     \n");
    printf(" ----- ----- -----      ----- ----- -----\n");
    printf("      |     |                |     |     \n");
    printf("   %c  |  %c  |  %c        (2,0)|(2,1)|(2,2)\n", x[2][0], x[2][1], x[2][2]);
    printf("      |     |                |     |     \n\n");

}

void randnum(int *rval1, int *rval2){         //Sets up the random set of numbers for the computer
    *rval1 = rand() % 3;
    *rval2 = rand() % 3;



}

int main(void) {
    int rval1;
    int rval2;
    int x[3][3];
    char playerName[50];
    int val = 0;
    int val2 = 0;
    int i,j = 0;
    int outcome = 4;
    int L = 1;

    for(i = 0;i<3;i++){               //Resets all elements of array to a blank/space
        for(j=0;j<3;j++){
            x[i][j] = 32;
        }
        
        }


    printf("Player 1 enter your name: \n");
    scanf("%50[^\n]", playerName);              //Allows the user to input full name
    

    printf("%s, Let's play Tic Tac Toe: \n\n\n", playerName);



    print_board(x);


    while(outcome == 4){
        L=1;
        while(L == 1){
        
    printf("%s, enter an 'X' by typing in a coordinate point in the correct format. For example, if you want to place your 'X' in the center position, type the coordinate 1,1. :\n\n ", playerName);
    scanf("%d,%d", &val, &val2);
            
            while((val != 0 && val != 1 && val != 2) || (val2 != 0 && val2 != 1 && val2 != 2)){
                printf("\nWrong Input. Try again!\n\n");
                
                printf("%s, enter an 'X' by typing in a coordinate point in the correct format. For example, if you want to place your 'X' in the center position, type the coordinate 1,1. :\n\n ", playerName);
                scanf("%d,%d", &val, &val2);
            }
        
        
        if(x[val][val2] == 32){   //Makes sure to only print an X if there is a blank space
            
            x[val][val2] = 'X';
            printf("\n");
            print_board(x);
            L=2;
            }
        
        else if((x[val][val2] != 32)){
            printf("\nThis is not an available spot!\n\n");
            
        
        }
        }
        
        outcome = check_board(x);
        if(outcome != 4){
            break;
        }
        randnum(&rval1, &rval2);
        
        while(x[rval1][rval2] != 32){  //Computer picks random value but has to be in an open spot in array
            randnum(&rval1, &rval2);
            
        }

        x[rval1][rval2] = 'O';
        printf("\n");
        
        print_board(x);


        printf("\nThe computer entered an 'O' at position: %d,%d\n\n", rval1, rval2);

        outcome = check_board(x);

    }
    if(outcome == 2){                               //Checks to see who wins
        printf("\nIt's a Tie!\n\n");
    }
    else if(outcome == 0){
        printf("\nYou win!\n\n");
    }
    else if(outcome == 1){
        printf("\nComputer wins!\n\n");
    }







        return 0;
}

