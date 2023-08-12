#include<iostream>
using namespace std ; 
int main(){
	int x, y, z ;
	string  a,b,c,d,e;
	 
	cout<<"Enter the value of x,y,z"<<endl ;
	cin>> x>>y>>z;
	
	a = (!(x>10)==true)?"True":"False";
	cout<<a<<endl;
	
	b = ((x<=5||y<15)==true)?"True":"False";
	cout<<b<<endl;
	
	c = ((x!=5) && (y!=z)==true)?"True":"False";
	cout<<c<<endl;
	
	d = (x>=z ||(x+y>=z)==true)?"True":"False";
	cout<<d<<endl;
	
	e = ((x<=y-2)&&(y>=z)||(z-2!=20)==true)?"True":"False";
	cout<<e<<endl;
	
	
	 
	
}
