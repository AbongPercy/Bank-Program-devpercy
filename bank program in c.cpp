#include<stdio.h>

void showbalance(int balance)
{
  printf("Your balance is %d FCFA ",balance);

}
int deposit()
{
int amount=0 ;
 printf("Enter the amount to be deposited: ");
 scanf("%d",&amount);
 if(amount>0)
 {
 	return amount;
 }
 else 
 {
 	printf("The amount is not valid!!");
 }
    return 0;
}
int withdraw(int balance)
{
 int amount=0 ;
 printf("Enter the amount you want to withdraw:");
 scanf("%d",&amount);
 if (amount>balance)
 {
   printf("Insufficient Funds!!");
   return 0;	
 } else if(amount<0) {
 printf("Invalid amount\n");
 } else{
 	return amount;
 }
    ;
}

int main()
{
   int balance =0,choice = 0;
   do{
   	 
    printf("\n****************\n");
    printf("Enter your choice\n");
    printf("****************\n");
    printf("1. Check Balance \n");
    printf("2. Deposit \n");
    printf("3. Withdraw Money \n");
    printf("4. Exit \n");
    scanf("%d",&choice);
    switch(choice)
    {
     case 1: showbalance(balance);
     break;
     case 2:balance += deposit();
            showbalance(balance);
     break;
     case 3: balance -= withdraw(balance) ;
     showbalance(balance);
     break;
     case 4:printf("Thanks for visting!!\n");
     break;
     default:printf("Invalid option\n");
     break;
    }
   } while (choice!=4);
       return 0;
}
