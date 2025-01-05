#include<iostream>
using namespace std;

class BankAccount{
	private:
		char name[20];
		int id;
		int acno;
		int balance;
	public:
		void openbalance();
        void deposit();
		void withdraw();
		void display();
};
void BankAccount :: openbalance(){
	cout<<"Name :- \t"<<endl;
	cin>>name;
	cout<<"ID :- \t"<<endl;
	cin>>id;
	cout<<"A/C No :- \t"<<endl;
	cin>>acno;
	cout<<"Enter Opening balance : "<<endl;
	cin>>balance;
}

void BankAccount :: deposit(){
	int deposit = 0;
	cout<<"Enter Deposit Amount : ";
	cin>>deposit;
	balance = deposit + balance;
	cout<<"\n Deposit Balance =  "<<balance;
}

void BankAccount :: withdraw(){
	int withdraw;
	cout<<"\n Balance Amount = \t\t"<<balance<<endl;
	cout<<"Enter withdraw amount :- \t";
	cin>>withdraw;
	
	if(balance>withdraw){
		balance = balance - withdraw;
		cout<<"\n After Withdraw Balance = \t"<<balance;
	}
	else{
		cout<<"\n Not Enough Balance";
	}
}
void BankAccount :: display(){
	cout<<endl<<endl<<endl;
	cout<<"\n\n DETAILS "<<endl;
	cout<<"Name : "<<name<<endl;
	cout<<"A/C No : "<<acno<<endl;
	cout<<"Balance : "<<balance<<endl;
}

int main(){
	BankAccount bank;
	int choice;
	do 
	{
	  cout<<"\n\n\n\t Bank Account System ";
	  cout<<"\n\n\n Choice List \n\n";
	  cout<<"1. To assign initial value \n";
	  cout<<"2. To deposit \n";
	cout<<"3. To Check Balance \n";
	cout<<"4. To withdraw \n";
	cout<<"5. Exit\n";
	cout<<"Enter Choice : ";
	cin>>choice;
    
	switch(choice)
	  {
		case 1:	  bank.deposit();
		break;
		
		case 2:   bank.withdraw();
		break;
		
		case 3:   bank.openbalance();
		break;
		
		case 4:   bank.display();
		break;
		
		case 5:   goto end;
		
		default:  cout<<"\n Invalid option......";
	}
}    while(1);
end:
	
	return 0;
}
