#include<iostream>
using namespace std;
int main(){
	
	int a,b,c;
	cout<<"Enter Salary: ";
	cin>>a;
	if(a<10000){
		cout<<"NO SALARAY DEDUCTED";
	}else if(a>=10000 && a<20000){
		b=a-1000;
		cout<<"Salary is "<<b;
	}else if(a>=20000){
		c=a/100*7;
		b=a-c;
		
			cout<<"Salary is "<<b;
	}
		
	}
