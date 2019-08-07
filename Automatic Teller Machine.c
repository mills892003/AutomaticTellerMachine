//  Created by Milan Patel on 3/6/18.
//  Copyright © 2018 Milan Patel. All rights reserved.
//
//  This program is for an automatic teller machine that dispenses money in 10s, 20s, and 50s

#include <stdio.h>
#include <math.h>

int main(void)
{
    //  Welcome Statement
    printf("Automatic Teller Machine\n");
    
    //  Declare Variables
    int withdrawal = 0, cashTen = 0, cashTwenty = 0, cashFifty = 0;
    int *wp;
    
    // Priming withdrawal variable
    printf("Enter cash withdrawal amount (increments of $10): $");
    scanf("%d" , &withdrawal);
    
    if(withdrawal % 10 != 0)
    {
        // Detail loop
        do
        {
        printf("\nInvalid withdrawal amount");
        printf("\nEnter cash withdrawal amount (increments of $10): $");
        scanf("%d" , &withdrawal);
        }
        while (withdrawal % 10 != 0);
    
    }
    
    wp = &withdrawal;
    
    // Process lowest amount of bills for withdrawal
        cashFifty = withdrawal / 50;
        cashTwenty = (withdrawal - (cashFifty*50)) / 20;
        cashTen = (withdrawal - (cashFifty*50)-(cashTwenty*20)) / 10;
    
    

    //  Closing Statement
    printf("\nTotal withdrawal amount is $%d" , withdrawal);
    printf("\n%d $50 bills for $%d" , cashFifty , cashFifty * 50);
    printf("\n%d $20 bills for $%d" , cashTwenty , cashTwenty * 20);
    printf("\n%d $10 bills for $%d" , cashTen , cashTen * 10);
    return(0);
}
