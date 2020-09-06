//
//  main.c
//  8.2
//
//  Created by Hunter Spallas on 3/26/17.
//  Copyright © 2017 Hunter Spallas. All rights reserved.
// Author: Hunter Spallas
//  Created: 03/28/2017
// Input: Word to search for
// Output: Amount of times the word shows up and on what line

#include <stdio.h>
#include <string.h>
#define SIZE 100


int search_current_line(char Line_str[], char word[]){

    int counter = 0;
    char *ptr;

    ptr = Line_str;
    while((ptr=strstr(ptr,word))!=NULL){      //checks to see if the word exists in the line

        counter++;      //Counts up the occurance of the searched word
        ptr++;
    }
    return counter;          //Displays amount of times that the word occurs in the sentence


}

int main(void) {

    FILE *inp = NULL;
    char Line_str;
    char letter;
    int counter;
    char search[20];
    char user = 'y';

    while(user != 'n'){     //Keeps asking the user if he/she wants to search for another word


    inp = fopen("DataFile.txt", "r");     //Opens file to read
    if(inp == NULL){
        printf("File doesnt exist\n");
    }
    else{
        printf("Enter a word you want to search for: \n");  //Prompts user to enter word
        scanf(" %s", search);
    }
    while(fscanf(inp, "%c", &letter) != EOF){    //scans file
    search_current_line(&Line_str, search);
        counter++;
    printf("Found %s %d times on line ", search, counter);

    while(fgets(search, SIZE, inp)){     //searches every line
       printf("%s", search);

    }


    }printf("Search for another word? \n");
    scanf(" %c", &user);
    }


    fclose(inp);     //Closes file
    return 0;
}
