#include <iostream>
using namespace std;

int main()
{
	int days,sec,mins,mins2,mins3,hours1,hours2,hours3;
	cout<<"Enter Days:";
	cin>>days;
	cout<<"Enter hours:";
	cin>>hours1;
	cout<<"Enter minutes:";
	cin>>mins;
	
	
	hours2 = days*24;
	hours3=hours1+hours2;
	mins2=hours3*60;
	mins3=mins2+mins;
	sec=mins3*60;
	cout<<"seconds"<<sec;
	return 0;
}


