//
//  main.c
//  hw2p2.c
//
//  Created by Hunter Spallas on 1/28/17.
//  Copyright © 2017 Hunter Spallas. All rights reserved.
//

#include <stdio.h>
#include <math.h>


int main(int argc, const char * argv[]) {
                                    // Author: Hunter Spallas
                                    //Date created: 1/28/17
                                    //Input: Passenger class and luggage weight
                                    //Output: The total cost
                                    //Relationship: Each passenger class has different costs for different luggage weights and the calculations are below

    char letter;
    float lugWeight;
    float totalCost;

    printf("Enter Passenger Class (E for Economy, B for Business, V for VIP): \n");
    scanf("%c", &letter);
    printf("Enter luggage weight (in pounds): \n");
    scanf("%f", &lugWeight);

    if((letter == 'E' || letter=='e') && lugWeight < 25)
    {
        totalCost = 0;
        printf("Total cost is $%.2f dollars\n", totalCost);
    }

   else if((letter == 'E' || letter=='e') && lugWeight <=40)
   {
        totalCost = 1.5*(lugWeight - 25);
        printf("Total cost is $%.2f dollars\n", totalCost);

        }
    else if((letter=='E' || letter=='e') && lugWeight >40)
        {
        totalCost = 1.5*(40 - 25) + 2.0*(lugWeight - 40);
        printf("Total cost is $%.2f dollars\n", totalCost);
        }
    else if((letter=='B' || letter=='b') && lugWeight < 35)
    {
        totalCost = 0;
        printf("Total cost is $%.2f dollars\n", totalCost);
    }
    else if((letter=='B' || letter=='b') && lugWeight <= 50)
    {
        totalCost = 1.25*(lugWeight - 35);
        printf("Total cost is $%.2f dollars\n", totalCost);
    }
    else if((letter=='B' || letter=='b') && lugWeight > 50)
    {
        totalCost = 1.25*(50 - 35) + 1.50*(lugWeight - 50);     //Total cost equations
        printf("Total cost is $%.2f dollars\n", totalCost);
    }
    else if((letter=='V' || letter=='v') && lugWeight < 60)
      {
        totalCost = 0;
        printf("Total cost is $%.2f dollars\n", totalCost);
      }
    else if((letter=='V' || letter=='v') && lugWeight > 60)
      {
        totalCost = 30;
        printf("Total cost is $%.2f dollars\n", totalCost);
      }
    else
    {
        printf("Wrong passenger class!\n");
    }



    return 0;
}
