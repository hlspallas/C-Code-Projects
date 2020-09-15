//
//  main.c
//  
//
//  Created by Hunter Spallas on 1/22/17.
//  Copyright © 2017 Hunter Spallas. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
                                        
                                        //author: Hunter Spallas
                                        //Date created: 1/22/17
                                        //input: object distance and constant acceleration
                                        //output: total time and object velocity
                                        //relationship between input and output: Finding velocity and time traveled using a time equation and velocity equation
    float totalTime;
    float objectFallDistance;
    float constantAccel;
    float objectVelocity;

    printf("Enter the distance that the object will fall in meters:\n");
    scanf("%f", &objectFallDistance);

    printf("Enter the constant acceleration caused by the gravitational field (meters/s^2):\n");
    scanf("%f", &constantAccel);

    totalTime = sqrt((2 * objectFallDistance) / constantAccel);

    objectVelocity = constantAccel * totalTime;

    printf("The object will travel %f meters in %f seconds\n", objectFallDistance, totalTime);

    printf("After falling for %f seconds the object will be traveling %f meters/second\n", totalTime, objectVelocity);







    return 0;
}



