//
//  main.c
//  hw5p1.c
//
//  Created by Hunter Spallas on 2/16/17.
//  Copyright © 2017 Hunter Spallas. All rights reserved.
//

#include <stdio.h>
#include <math.h>
//Author: Hunter Spallas
//Created: 02/18/2017
//Input: distance in inches
//Output: distance in yards, feet, and inches
//Relationship: Given the distance in inches, the program converts it to a distance in yards, feet, and inches

void dist_conv(int d, int *p_y, int *p_f, int *p_i){

    *p_y = d / 36;  //finds yards
    *p_f = (d - *p_y * 36) / 12; //finds feet
    *p_i = (d - ((*p_y * 36)+(*p_f * 12)));  //finds inches
}


int main(void) {
    int d;
    int y;
    int f;
    int i;

    printf("\nEnter the distance in inches:\n");
    scanf("%d", &d);

    dist_conv(d, &y, &f, &i);


    printf("%d inches equals %d yards, %d feet, and %d inches.\n", d, y, f, i);


    return 0;
}
