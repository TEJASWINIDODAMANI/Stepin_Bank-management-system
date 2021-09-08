#include "header.h"

int amountToWidthdraw , anotherTransaction, in_balance=2000, new_balance;
int withdraw()
  
{
 
    printf("Please enter the amount to withdraw: ");
    scanf("%d", &amountToWidthdraw);
    if(amountToWidthdraw <= in_balance) //bal = 2000
    {
     printf("Please collect your cash\n");
     new_balance =in_balance-amountToWidthdraw;//
     printf("Your available balance is %d\n",new_balance);
     printf("\n\nDo you want to perform another transaction?\n Press 1 to proceed and 2 to exit\n\n");
     scanf("%d", &anotherTransaction);
       if(anotherTransaction == 1)
        {
             ATM_Transaction();  // call our ATM_Transaction method here
        }
    }
  
     else
    {
       printf("Sorry insufficient balance in your account");
       printf("\n\nDo you want to perform another transaction?\n Press 1 to proceed and 2 to exit\n\n");
       scanf("%d", &anotherTransaction);
       if(anotherTransaction == 1)
        {
             ATM_Transaction();  // call our ATM_Transaction method here
        }
    }
    }
