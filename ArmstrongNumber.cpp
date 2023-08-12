#include <cmath>
#include <iostream>
using namespace std;
int main() {
   
   int num,number,remainder,n=0,power,result= 0;
   cout << "Enter a number:";
   cin >> num;

   number = num;

   while (number != 0) {
      number /= 10;
      n++;
   }
    number= num;

   while (number != 0) {
      remainder =number % 10;

    
      power = round(pow(remainder, n));
      result += power;
      number /= 10;
   }

   if (result == num)
      cout << num << " is an Armstrong number.";
   else
      cout << num << " is not an Armstrong number.";
   return 0;
}
