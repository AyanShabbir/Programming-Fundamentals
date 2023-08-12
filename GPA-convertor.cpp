#include<iostream>
using namespace std;
int grade_to_gpa_converter(string N);
int main()
{
    string n;
    int subjects;
    int ch;
    int sum1 = 0;
    int sum2 = 0;
    int result;


    cout<<"Enter the number of subjects :"<<endl;
    cin>>subjects;
    for ( int i = 1; i <= subjects; i++)
    {
        cout<<"Enter your grade for subject :"<<i<<endl;
        cin>>n;
        cout<<"Enter the credit hour for subject "<<i<<endl;
        cin>>ch;
        sum1+=(grade_to_gpa_converter(n)* ch);
        sum2+=ch;


    }
    result =sum1/sum2;
    cout<<"Your Cgpa is "<<result<<endl;
        

    return 0;
}

    int grade_to_gpa_converter(string n)
    {
        int result;
        if (n=="A")
        {
            result = 4.0;
        }
        else if (n=="A-")
        {
            result = 3.67;
        }
        else if (n=="B+")
        {
            result = 3.33;
        }
        else if (n=="B")
        {
            result = 3.0;
        }
        else if (n=="B-")
        {
            result =2.67;
        }
        else if (n=="C+")       
        {
            result = 2.33;
        }
        else if (n=="C")
        {
            result = 2.0;
        }
        else if (n=="C-")
        {
            result = 1.67;
        }
        else if (n=="D+")
        {
            result = 1.33;
        }
        else if (n=="D")
        {
            result = 1.0;
        }
        else if (n=="F")
        {
            result = 0;
        }
        return result;

    }
