//
//
//
//  First Created by Hunter Spallas on 2/12/17.
//  Copyright © 2017 Hunter Spallas. All rights reserved.
//
//Author: Hunter Spallas
//Modified: 09/21/2020
//Input: None
//Output: The resistor value in Ohms
//Relationship: Given the first two resistor values, the program calculates whether there is band error or it outputs the final resistor value in Ohms.

#include <stdio.h>
#include <math.h>

int col_to_num(char color, int choice){
    int num = 0;
    
    switch(color){
        case 'B':
        case 'b':
            
             if(choice == 1) num = 0;       //Black
        else if(choice == 2) num = 1;       //Brown
        else if(choice == 3) num = 6;       //Blue
        else num = 100;

            break;

        case 'G':
        case 'g':
            
             if(choice == 1) num = 5;       //Green
        else if(choice == 2) num = 8;       //Grey
        else if(choice == 3) num = -1;      //Gold
        else num = 100;

            break;

        case 'R':                           //Red
        case 'r':
            
            if(choice == 0)  num = 2;

            break;

        case 'W':                           //White
        case 'w':
            
            if(choice == 0)  num = 9;

            break;
            
        case 'V':                           //Violet
        case 'v':
            
            if(choice == 0)  num = 7;
            break;
            
        case 'Y':                           //Yellow
        case 'y':
            
            if(choice == 0)  num = 4;
            break;
            
        case 'O':                           //Orange
        case 'o':
            
            if(choice == 0)  num = 3;
            break;
            
        case 'S':                           //Silver
        case 's':
            
            if(choice == 0)  num = -2;
            break;



            default:  num = 100;
            break;
    }
    return num;
    
    
}


int main(void) {
    
    FILE * inp = NULL;
    FILE * out = NULL;

    int col_to_num(char color, int choice);
    char color1 = 'a', color2 = 'b', color3 = 'c';
    int val1 = 0, val2 = 0, val3 = 0;
    int resvalue = 0;
    

    inp = fopen("resistorcolor.txt", "r");
    out = fopen("resistorvalues.txt", "w");
    
    if(inp == NULL) {
        printf("File not found\n");
        }
    
    else{
        
        while(fscanf(inp,"%c %d %c %d %c %d%*c", &color1, &val1, &color2, &val2, &color3, &val3) != EOF){

            fprintf(out," %c %d %c %d %c %d \n", color1, val1, color2, val2, color3, val3);

            if(col_to_num(color1, val1) == 100){
                fprintf(out, "Wrong first color band\n");
            }

            else if(col_to_num(color2, val2) == 100){
                fprintf(out, "wrong second color band\n");
            }

            else{
                resvalue = 10 * col_to_num(color1, val1);
                resvalue = resvalue + col_to_num(color2, val2);
            }

            if(col_to_num(color3,val3) == -2){          //Checks for different cases to print Ohm value

                resvalue = resvalue / 100;
                fprintf(out, "%d Ohms\n", resvalue);}

            else if(col_to_num(color3, val3) == -1){
                resvalue = resvalue / 10;
                fprintf(out, "%d Ohms\n", resvalue);
            }
            else if(col_to_num(color3, val3) == 0){
                fprintf(out, "%d Ohms\n", resvalue);}

            else if(col_to_num(color3, val3) == 1){
                    resvalue = resvalue * 10;
                fprintf(out, "%d Ohms\n", resvalue);}

            else if(col_to_num(color3, val3 == 2)){
                    resvalue = resvalue * 100;
                    fprintf(out, "%d Ohms\n", resvalue);}

        }
        }
            fclose(inp);        //Close the files
            fclose(out);



    return 0;
        }

