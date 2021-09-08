#include "header.h"

int amountToDeposit,anotherTransaction;
int deposit()
{
    printf("Please enter amount to deposit: ");
    scanf("%d", &amountToDeposit);
    int balance = amountToDeposit + balance;
    printf("Thank you for depositing the amount, your new balance is: %d", balance);
    printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\n");// request for another transaction
    scanf("%d", &anotherTransaction);
    if(anotherTransaction == 1)
     {
        ATM_Transaction(); // call our transaction method here
     }
}
