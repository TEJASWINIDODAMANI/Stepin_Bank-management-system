#include "header.h"

int anotherTransaction, in_balance=2000;
int balance()
{
    printf("Your account balance is: %d", in_balance);
    printf("\n\nDo you want to perform another transaction?\nPress 1 to proceed and 2 to exit\n\n"); // request for another transaction
    scanf("%d",&anotherTransaction);
    if(anotherTransaction == 1)
      {
        ATM_Transaction();// call our transaction method here
      }
 }
