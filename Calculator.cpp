#include <iostream>
using namespace std;

int main () {
	//Simple calculator using basic syntax
	char op ;
	int num1, num2;
	
	cout << "Enter the first number: 	" << endl;
	cin >> num1;
	cout << "Enter the operator: (+, -, *, /, %): 	" << endl;
    cin >> op;
	cout << "Enter the second number:	 " << endl;
	cin >> num2;
	
	switch(op) {
		case '+':
			cout << num1 + num2;
			break;
		case '-':
			cout << num1 - num2;
			break;
		case '*':
			cout << num1 * num2;
			break;
		case '/':
			if (num2 != 0) {
				cout << num1 / num2;
			}
			else {
				cout << "ERROR!! Division by zero.";
				}
			break ;
		case '%':
			cout << num1 % num2;
			break;
			
		default:
			cout << "Invalid operator!!";
			break;
		}
        
        return 0;
	}