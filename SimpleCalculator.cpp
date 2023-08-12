#include <iostream>
using namespace std;

int main() {
    	char op;
    	float firstnum, secondnum;
    	cout << "Enter first number,operator,second number: ";
		cin >> firstnum >> op >> secondnum ;

    switch (op) {
        case '+':
            cout << firstnum << " + " << firstnum << " = " << firstnum + secondnum;
            break;
        case '-':
            cout << firstnum << " - " << secondnum << " = " << firstnum - secondnum;
            break;
        case '*':
            cout << firstnum << " * " << secondnum << " = " << firstnum * secondnum;
            break;
        case '/':
            cout << firstnum << " / " << secondnum << " = " << firstnum / secondnum;
            break;
        default:
            
            cout << "Error! The operator is not correct";
            break;
    }

    return 0;
}
