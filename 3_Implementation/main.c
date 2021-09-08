#include <stdio.h>
#include "header.h"

int pin;

int main()

{
  printf("Welcome to EFG Bank ATM\n");
  printf("\nEnter your pin number please: \n");
  scanf("%d",&pin);
    if(pin!=8095)
   {
       printf("Sorry incorrect pin, Please try again!");
   }
   else
    {
      ATM_Transaction();     // function call
    }
}

int ATM_Transaction()
{
  int choice;
  printf("Enter any option to be served!\n\n");
  printf("1. Balance Enquiry \n");
  printf("2. Cash Withdraw\n");
  printf("3. Deposit Cash\n");
  printf("4. Exit \n");
  scanf("%d",  &choice);

  switch (choice)

  {

    case 1: balance(balance);
    break;
    case 2: withdraw();
    break;
    case 3: deposit();
    break;
    default:
     printf("Thank you for using Axis ATM services. Please visit again!");
     return 0;
  }
}
