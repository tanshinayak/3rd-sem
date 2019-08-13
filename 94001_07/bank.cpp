#include<iostream>
#include<conio.h>
using namespace std;
class Bank
{
	string name;
	long accn;
	double bal;
	double dep;
	double withd;
	public:
		Bank()
		{
			name="no name";
			accn=0000;
		}
		void setdetails();
		void getdetails();
		void deposit();
		void withdrawl();
		
};
void Bank::setdetails()
{
	cout<<"Enter the name of the account holder: "; 
	cin.ignore();
	cin>>name;
	cout<<"ENter the account no. :";
	cin>>accn;
	cout<<"Enter the balance :";
	cin>>bal;
}
void Bank::getdetails()
{
	cout<<"Account holder name is : "<<name<<endl;
	cout<<"Account number is : "<<accn<<endl;
	cout<<"Balance in the account is : "<<bal<<endl;
}
void Bank::deposit()
{
	cout<<"Enter the ammount here to be deposit : ";
	cin>>dep;
	bal+=dep;
	cout<<"Your ammount added successfully ..."<<endl;
}
void Bank::withdrawl()
{
	cout<<"Enter your withdrawl ammount here : ";
	cin>>withd;
	bal-=withd;
	cout<<"Current balance in your account is : "<<bal;
}
int main()
{
	Bank ob;
	int choice;
	char more;
	do
	{
		cout<<"1. setdetails()"<<endl;
		cout<<"2. getdetails()"<<endl;
		cout<<"3. deposit()"<<endl;
		cout<<"4. withdrawl()"<<endl;
		cout<<endl<<endl<<endl;
		cout<<"Enter your choice from the above given menu..."<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:{ob.setdetails();
				break;
			}
			case 2:{ob.getdetails();
				break;
			}
			case 3:{ob.deposit();
				break;
			}
			case 4:{ob.withdrawl();
				break;
			}
			default:cout<<"You have entered the wrong choice...."<<endl;
		}
		cout<<"Do you want to perform more ?"<<endl;
		cin>>more;
	}while(more=='y'||more=='Y');	



 getch();
 return 0;
}

