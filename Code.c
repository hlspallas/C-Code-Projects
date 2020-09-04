//
//  main.c
//  hlspallas
//
//  Created by Hunter Spallas on 1/21/17.
//  Copyright © 2017 Hunter Spallas. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
                                        //Tiling a Room
                                        //author: Hunter Spallas
                                        //Date created: 1/21/17
                                        //input: Room length, room width, tile size, tile price, and tax
                                        //output: Total area, total price, number of tiles, total price + tax
                                        //relationship between the input and output: Finding the total cost for tiling a room given the dimensions and tax

    float roomLength;
    float roomWidth;
    float tileLength;
    float tilePrice;
    float percentSalesTax;
    float totalArea;
    float numTilesToPurchase;
    float tileArea;
    float totalTilePrice;
    float totalCost;

    printf("\nLength of the room in inches (to the nearest inch): \n");
    scanf( "%f", &roomLength);

    printf("Width of the room in inches (to the nearest inch): \n");
    scanf( "%f", &roomWidth);


    printf("Length of one side of the tile (to the nearest inch): \n");
    scanf( "%f", &tileLength);


    printf("Price per tile in dollars (to the nearest penny): \n");
    scanf("%f", &tilePrice);


    printf("Percent sales tax: \n");
    scanf("%f", &percentSalesTax);


    totalArea = roomLength * roomWidth;
    tileArea = tileLength * tileLength;
    numTilesToPurchase = totalArea / tileArea;
    percentSalesTax = percentSalesTax / 100;
    totalCost = ((tilePrice * percentSalesTax) + tilePrice) * numTilesToPurchase;
    totalTilePrice = numTilesToPurchase * tilePrice;

    printf("The total area to be tiled is %f square inches\n", totalArea);
    printf("The total number of tiles to be purchased is: %f tiles\n", numTilesToPurchase);
    printf("The cost of the purchase before tax is: %f dollars\n", totalTilePrice);
    printf("The cost of the purchase including tax is: %f dollars\n", totalCost);






    return 0;
}
