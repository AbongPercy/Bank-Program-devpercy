#include<iostream>

 void checkbalance(double balance)
 {
   std::cout<<"Your balance is: "<< balance <<"FCFA \n";
 }
 double deposit()
 {
     double amount=0;
     std::cout<<"Enter the amount to deposit\n";
     std::cin>>amount;
      if (amount>0)
      {
      return amount;
      }else{
      std::cout<<"Amount entered is not valid\n";
      }
      return 0;
 }
 double withdraw(double balance)
 {  double amount =0;
 std::cout<<"Enter the amount to be withdrawn: ";
 std::cin>>amount;
 if (amount>balance)
 {
     std::cout<<"Insufficient funds\n";
     return 0;
 }
 else if(amount<0){
    std::cout<<"That is not a valid amount\n";
    return 0;
 } else{
return amount;
 }

 }
int main()
{
	double balance = 0;
	int choice = 0;

    do{
    std::cout<<"******************\n";
	std::cout<<"Enter your choice:\n";
	std::cout<<"******************\n";
	std::cout<<"1. Show Balance\n";
	std::cout<<"2. Deposit Money\n";
	std::cout<<"3. Withdraw Money\n";
	std::cout<<"4. Exit\n ";
	std::cin>>choice;

	std::cin.clear();
	fflush(stdin);
	switch(choice)
	{
		case 1: checkbalance(balance);
		       break;
		case 2: balance += deposit() ;
		       checkbalance(balance);
			   break;
		case 3: balance -= withdraw(balance);
		       checkbalance(balance);
		       break;
		case 4: std::cout<<"Thanks for visiting\n";
			  break;
		default:
			std::cout << "Invalid option \n";
	}

	}while(choice!=4);

	return 0;

}

