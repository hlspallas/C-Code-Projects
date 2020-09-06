//
//  main.c
//  Card
//
//  Created by Hunter Spallas on 4/5/17.
//  Copyright © 2017 Hunter Spallas. All rights reserved.
//
#define Jack 11
#define Queen 12
#define King 13
#define D 'Diamond'
#define C 'Club'
#define S 'Spade'
#define H 'Heart'
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

typedef struct card_s{       //Defines card struct
char suit;
int face;
struct card_s *listp;
} card;

struct card *headp;        //Defines a head pointer
struct card *hand1;
struct card *hand2;

void Scan_Deck(card *pt, FILE *inp){       //Scans cards from the file

    fscanf(inp, "%d%c", &pt->face,&pt->suit);     //scans in the face and suit
    }
void Create_Deck(card *pt){      //Adds the symbols to the cards
    if(pt->suit == 'D'){

        printf("♦");
    }
    if(pt->suit == 'C'){           //Prints the suits onto the cards
        printf("♣");
        }
    if(pt->suit == 'S'){
        printf("♠");
        }
    if(pt->suit == 'H'){
        printf("♥");
    }
    if(pt->suit == 'J'){           //Identifies Joker as a 'J'
        printf("*");

    }

    printf("%d%c  ", pt->face,pt->suit);   //Prints deck

    }
void Print_Deck(card *pt){
    while(pt != NULL){        //while the list is not ended it prints the deck out
        if(pt->suit != 0){
        Create_Deck(pt);
        }
        pt = pt->listp;     //Keeps moving through each node in the file
    }
}

int Count_Deck(card *headp){   //Counts how many cards are in a deck
    card *temp1 = headp;
    int counter = 0;

    while(temp1->listp != NULL){    //while its not null, it runs through the list with a counter
        temp1 = temp1->listp;
        counter++;


    }
    return(counter);          //returns the integer counter




}

void Swap_Card(card *ptrA, card *ptrB){       //Swaps cards
    int face;
    char suit;

    if(ptrA == ptrB){                  //If the card trying to be swapped is the same, no need to swap
        return;
    }
    else{
        face = ptrA->face;             //has first pointer point to each part of the node
        suit = ptrA->suit;
        ptrA->face = ptrB->face;       //same part of node is set equal to two different pointers
        ptrA->suit = ptrB->suit;
        ptrB->face = face;
        ptrB->suit = suit;            //has second pointer point to each part of the node

    }

    return;

}



void Shuffle_Card(card *headp){

    card *ptr1 = headp->listp;  //Skips the dummy head when shuffling
    card *ptr2 = headp->listp;
    int randomNum;

    int i,j = 0;


    for(i=0;i<100;i++){               //Goes through enough times to make sure the deck is shuffled well
    randomNum = rand() % Count_Deck(headp); //Allows any amount of cards to be shuffled
        ptr2 = headp->listp;
        j=0;
        while(j < randomNum){
            ptr2 = ptr2->listp;         //Finds the spot that the random number refers to

            j++;
        }

  Swap_Card(ptr1,ptr2);           //Uses swap function to swap that random card with the very first card
        ptr1 = ptr1->listp;
        if(ptr1 == NULL){
            ptr1 = headp;        //If the pointer is at the end of the list, sets it back to the start

        }
            }

    return;


}

void Deal_Cards(card **headp,card **hand1, card **hand2){

    card *temp = *headp;
    int i = 0;
    for(i = 53;i>0;i--){                     //Allows the for loop to go through the whole deck of cards
        (*headp) = (*headp)->listp;          //Allows the head pointer to go throught the deck
        if(i == 2){                        //For every even number it enters the if statement
            temp->listp = *hand1;            //hand1 pointer points to that even number spot
            *hand1 = temp;             //Allows that spot to be transferred to the linked list of hand1
        }
           else if(i == 4){
                temp->listp = *hand1;
                *hand1 = temp;
            }
            else if(i == 6){
                temp->listp = *hand1;
                *hand1 = temp;
 }
            else if(i == 8){
                temp->listp = *hand1;
                *hand1 = temp;
}
           else if(i == 10){
                temp->listp = *hand1;
                *hand1 = temp;

            }
           else if(i == 12){
                temp->listp = *hand1;
                *hand1 = temp;
}
           else if(i == 14){
                temp->listp = *hand1;
                *hand1 = temp;
}
           else if(i ==16){
                temp->listp = *hand1;
                *hand1 = temp;

            }
           else if(i == 18){
                temp->listp = *hand1;
                *hand1 = temp;

            }
           else if(i == 20){
                temp->listp = *hand1;
                *hand1 = temp;

            }
           else if(i == 22){
                temp->listp = *hand1;
                *hand1 = temp;

            }
           else if(i == 24){
                temp->listp = *hand1;
                *hand1 = temp;

            }
           else if(i == 26){
                temp->listp = *hand1;
                *hand1 = temp;

            }
           else if(i == 28){
                temp->listp = *hand1;
                *hand1 = temp;

            }
           else if(i == 30){
                temp->listp = *hand1;
                *hand1 = temp;

            }
            else if(i == 32){
                temp->listp = *hand1;
                *hand1 = temp;

            }
            else if(i == 34){
                temp->listp = *hand1;
                *hand1 = temp;

            }
            else if(i == 36){
                temp->listp = *hand1;
                *hand1 = temp;

            }
            else if(i == 38){
                temp->listp = *hand1;
                *hand1 = temp;

            }
            else if(i == 40){
                temp->listp = *hand1;
                *hand1 = temp;

            }
        else if(i == 42){
                temp->listp = *hand1;
                *hand1 = temp;

            }
            else if(i == 44){
                temp->listp = *hand1;
                *hand1 = temp;

            }
            else if(i == 46){
                temp->listp = *hand1;
                *hand1 = temp;

            }
            else if(i == 48){
                temp->listp = *hand1;
                *hand1 = temp;

            }
            else if(i == 50){
                temp->listp = *hand1;
                *hand1 = temp;

            }
            else if(i == 52){
                temp->listp = *hand1;
                *hand1 = temp;

            }

        else{                           //If the position number is odd, it goes through this
            temp->listp = *hand2;       //Does the same as above
            *hand2 = temp;

        }

        temp = (*headp);

    }
    }


void Delete_Pair(card *headp){

    card *current = headp;                 //Skips the dummy head
    card *temp2 = headp;
    card **tail;
    if(current == NULL){                   //Cant delete pair if the pointer is NULL
        return;
    }
    else{
                temp2 = current->listp;               //sets temp2 to point to the list
                if(current->listp->listp == NULL){     //if the next node is NULL
                    current->listp = NULL;             //The one previous becomes NULL
                    *tail = current;                   //Makes the tail point to the last node
                    }
                else{

                    current->listp = current->listp->listp;   //Otherwise it keeps searching the list
                }
                free(temp2);                           //frees pointer temp2

            }


                current = current->listp;            //keeps searching the list


        }










void Find_Pair(card *headp){                  //Finds pairs in a deck

    card *temp1 = headp;
    card *temp2 = headp;


    for(temp1 = headp->listp;temp1->listp != NULL;temp1 = temp1->listp){   //Goes through like an array
        for(temp2 = headp->listp;temp2->listp != NULL;temp2 = temp2->listp){

            if(temp1->listp->face == temp2->listp->face && temp1->listp->suit != temp2->listp->suit){
                //if a pair is found it prints the pairs that are going to be removed

printf("Pairs removed: %d%c  %d%c\n", temp1->listp->face, temp1->listp->suit, temp2->listp->face, temp2->listp->suit);
                Delete_Pair(temp1);   //Deletes pair officially

            }


        }


    }




}

void Add_Card(card **hand1, card **hand2,int num){  //Adds a chosen card to a deck


    card *temp1 = *hand1;
    int i = 0;
    card *headp1 = (card*)malloc(sizeof(card));
    card *Extra = headp1->listp;                    //initializes an outside temporary pointer


    for(i=1;i<num-1;i++){                        //Finds the node before the card chosen
        temp1 = temp1->listp;                      //Allows temp1 to find it
    }
        Extra = temp1->listp;                      //Outside pointer is set to the card chosen
temp1->listp = temp1->listp->listp;            //temp1 keeps moving throught the list
        Extra->listp = Extra;                      //Next node is set to the outside pointer

    }









int main(void) {

    srand((int)time(NULL));
    card *headp = NULL, *temp = NULL, *tail = NULL;           //initializes everything
    card *hand1 = NULL, *hand2 = NULL;
    char name[100];
    int i = 0;
    int chosenNum;
    int randomnum;
    char user = 'y';
    FILE* inp = NULL;
    inp = fopen("cards.txt", "r");                    //Opens file to read



    hand1 = (card*)malloc(sizeof(card));            //allocates memory for hand1 for the linked list
    hand1->suit = 0;                                //Sets the dummy head

    hand1->listp = NULL;

    hand2 = (card*)malloc(sizeof(card));            //allocates memory for hand2 for the linked list
    hand2->suit = 0;                                //Sets the dummy head

    hand2->listp = NULL;





    headp = (card*)malloc(sizeof(card));            //allocates memory for headp for the linked list
    headp->suit = 0;                                //Sets the dummy head

    headp->listp = NULL;


    if(inp == NULL){
        printf("File doesn't exist\n");              //Checks to see if the file exists
    }
    temp = (card*)malloc(sizeof(card));
    while(!feof(inp)){

        fscanf(inp, "%d%c", &temp->face,&temp->suit);       //Scans the input into the linked list

        if(headp -> listp == NULL){
            headp -> listp = temp;
        }
        else{
            tail->listp = temp;
        }
        tail = temp;
        tail->listp = NULL;
        temp = (card*)malloc(sizeof(card));              //Allocates memory for the temporary pointer
    }

    while(user != 'n' || user != 'N'){                  //Allows the user to start a new game at the end
    printf("Enter your name:\n");                      //Prompts the user for name
    scanf("%s", name);

    printf("-------------\n\n");
    printf("%s, let's play Joker\n\n", name);
    printf("-------------\n\n\n");
    Shuffle_Card(headp);                               //Shuffles cards and deals them to start the game
    Deal_Cards(&headp, &hand1, &hand2);
    printf("%s's hand has %d cards\n\n", name, Count_Deck(hand1));//Prints the number of cards in deck
    Print_Deck(hand1);
    printf("\n\n");
    printf("Dealer's hand: Throw away pairs\n\n");
    Find_Pair(hand2);                                  //Has the dealer throw away their pairs
    printf("\n");

    printf("Computer now has %d cards", Count_Deck(hand2));

    printf("\n\n");
    printf("%s's hand: Throw away pairs\n\n", name);
    Find_Pair(hand1);                                  //Has the user throw away their pairs
    printf("\n\n");
    printf("%s, this is your hand:\n", name);
    Print_Deck(hand1);
    printf("\n\n");

    if(Count_Deck(hand1) > Count_Deck(hand2)){             //Checks to see who has more cards to start
        printf("You have more cards, you start\n\n");
    while(Count_Deck(hand1) != 1 && Count_Deck(hand2) != 1){    //Plays game until someone has 1 card left
        printf("Computer now has %d cards\n\n", Count_Deck(hand2));
        for(i=1;i<Count_Deck(hand2)+1;i++){                       //Prints options for computer's deck
            printf("%d ",i);

        }
        if(Count_Deck(hand1) != 1 && Count_Deck(hand2) != 1){      //checks again for winner
printf("\nWhich one do you want to choose(1-%d)?:\n\n", Count_Deck(hand2)); //Prompts user to choose card
            scanf("%d", &chosenNum);
            while(chosenNum > Count_Deck(hand2)){         //Makes sure that the user enters a valid number
                printf("I ONLY have %d cards\n\n",Count_Deck(hand2));
                printf("\nWhich one do you want to choose(1-%d)?:\n\n", Count_Deck(hand2));
                scanf("%d", &chosenNum);
            }
        Add_Card(&hand1, &hand2, chosenNum);  //Adds the chosen card to the opposite deck
        printf("\n");
        Find_Pair(hand1);
        Shuffle_Card(hand1);                //Shuffles the deck after the users turn
        printf("%s this is your (shuffled) hand:\n\n",name);

        Print_Deck(hand1);                   //Reminds the user what is in their deck

        printf("\n");
 randomnum = rand() % Count_Deck(hand1);       //Sets up a random number in range of the size of the deck
            if(Count_Deck(hand1) != 1 && Count_Deck(hand2) != 1){
        printf("Computer chooses card %d from you\n\n", randomnum); //Computer chooses card
            Add_Card(&hand1, &hand2, randomnum);
        printf("\n");
            Find_Pair(hand2);                                 //Checks for pairs

        printf("Computer now has %d cards\n\n", Count_Deck(hand2));
        printf("%s this is your hand\n\n", name);
        Print_Deck(hand1);
        printf("\n");

            }

        }
    }}
    else{
        printf("Computer has more cards, they start\n\n");    //If the computer starts out with more cards
        randomnum = rand() % Count_Deck(hand1);                //generates random number
        while(Count_Deck(hand1) != 1 && Count_Deck(hand2) != 1){ //while game is not over
        printf("Computer chooses card %d from you\n\n", randomnum);
        Add_Card(&hand1, &hand2, randomnum);
        printf("\n");
        Find_Pair(hand2);
        printf("Computer now has %d cards\n\n", Count_Deck(hand2));
        printf("%s this is your hand\n", name);
        Print_Deck(hand1);
        printf("\n");
        printf("Computer now has %d cards\n\n", Count_Deck(hand2));
        for(i=1;i<Count_Deck(hand2)+1;i++){
            printf("%d ",i);

        }
            if(Count_Deck(hand1) != 1 && Count_Deck(hand2) != 1){
        printf("\nWhich one do you want to choose(1-%d)?:\n\n", Count_Deck(hand2));
        scanf("%d", &chosenNum);
            while(chosenNum > Count_Deck(hand2)){
                printf("I ONLY have %d cards",Count_Deck(hand2));
                printf("\nWhich one do you want to choose(1-%d)?:\n\n", Count_Deck(hand2));
                scanf("%d", &chosenNum);
            }
        Add_Card(&hand1, &hand2, chosenNum);
        printf("\n");
        Find_Pair(hand1);
        Shuffle_Card(hand1);
        printf("%s this is your (shuffled) hand:\n\n",name);

        Print_Deck(hand1);

        printf("\n\n");
        randomnum = rand() % Count_Deck(hand1);


            }
    }
    }
    if(Count_Deck(hand1) == 1 || Count_Deck(hand2) == 1){  //Once a hand has only 1 card
        if(Count_Deck(hand1) == 1){               //Checks if user has the Joker
            printf("\nYou are Joker! You lose!\n\n");
        }
         else if(Count_Deck(hand2) == 1){               //Checks if computer has the Joker
            printf("\nComputer is Joker! You win!\n\n");
            }
    }


    printf("Do you want to continue?\n");          //Asks the user if they want to play again
    scanf(" %c", &user);
    }




    return 0;
}
