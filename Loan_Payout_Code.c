//
//  main.c
//  hw6p1.c
//
//  Created by Hunter Spallas on 3/4/17.
//  Copyright © 2017 Hunter Spallas. All rights reserved.
// Created by: Hunter Spallas
// Created on: 03/06/2017
// Input: loan amount, APR, and monthly payment amount
// Output: Time, payment owed, and the total payout by the user

#include <stdio.h>
#include <math.h>
int main(void) {

    float Time[12784];
    float Amountowed[12784];
    float Amountpayed[12784];
    float loanAmount = 0;
    float apr = 0;
    float monPayAmnt = 0;
    int j = 1;
    const float e = 2.71828182845905;
    float r;
    const int t = 1;
    float TodaysPayment;


    printf("Enter in total loan amount:\n");
    scanf("%f", &loanAmount);


    printf("Enter in the Annual Percentage Rate (APR):\n");
    scanf("%f", &apr);

    printf("Enter in the monthly payment amount:\n");
    scanf("%f", &monPayAmnt);

    Amountowed[0] = loanAmount;
    TodaysPayment = monPayAmnt;

    r = (apr) / (100 * 365.242);

    for(j=1;j<=12783.47;j++){                   //Finding Amount owed

        Amountowed[j] = Amountowed[j-1] * (pow(e,r*t)) - TodaysPayment;
        if(Amountowed[j] <= 0){
            break;
        }
    }


    for(j=1;j<=12783.47;j++){           //Finding Time spent
        Time[j] = j/365.242;
        if(Amountowed[j] <= 0){         //Loop breaks
         break;
        }
    }


    for(j=1;j<=12783.47;j++){                              //Finding Amount payed
        Amountpayed[j] = Amountpayed[j-1] + TodaysPayment;
        if(Amountowed[j] <= 0){                             //Loop breaks
            break;
        }
    }

    printf("\n\nTotal loan amount = %.2f dollars\n", loanAmount);
    printf("Annual Percentage Rate (APR) is %.2f percent\n", apr);
    printf("Monthly payment amount = %.2f dollars\n", monPayAmnt);
    printf("After %.3f years: you will owe $%.2f : The total payout is %.2f dollars\n", Time[j], Amountowed[j], Amountpayed[j]);








    return 0;
}
