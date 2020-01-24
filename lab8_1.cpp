#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

double pay(double x,double y){
		if(x>y){
			return y;
		}
		else
		{
			return x;
		}
	}


int main(){	
	double initial_loan,rate_per_year,can_pay_per_year;
	int round=1;
	
	cout<<" Enter initial loan: ";
	cin>>initial_loan;
	cout<<" Enter interest rate per year (%): ";
	cin>>rate_per_year;
	cout<<"Enter amount you can pay per year: ";
	cin>>can_pay_per_year;

    double PrevBalance=initial_loan,newBalance,payment,total;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	// my functuion

	
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	
	do{
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << round; 
	cout << setw(13) << left << PrevBalance;
	cout << setw(13) << left << PrevBalance*(rate_per_year/100);
	cout << setw(13) << left << PrevBalance+(PrevBalance*(rate_per_year/100));
	cout << setw(13) << left << pay(can_pay_per_year,PrevBalance+(PrevBalance*(rate_per_year/100)));
	newBalance=(PrevBalance+(PrevBalance*(rate_per_year/100)))-(pay(can_pay_per_year,PrevBalance+(PrevBalance*(rate_per_year/100))));
	PrevBalance=newBalance;
	cout << setw(13) << left << newBalance ;
	cout << "\n";
	round=round+1;	
	}while(newBalance>0);
	return 0;
}
