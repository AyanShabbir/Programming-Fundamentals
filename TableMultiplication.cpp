#include<iostream>
using namespace std;
int main()

{
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    int a=1;
  
    for(int i=0;i<20;i++)
    {
        for(int j=0;j<10;j++){
            cout<<number*a<<"\t";
            a++;
        }
        cout<<endl;
    }
  
    return 0;
}
