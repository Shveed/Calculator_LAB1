#include "stdafx.h"
#include "calculator.h"
#include "iostream"
using namespace std;

int main()
{
	double a, b, c;
	char op;
	cout << "Enter variables" << endl;
	cin >> a >> b;
	cout << "Enter operation" << endl;
	cin >> op;
	switch (op) {
	case '+':
		c = add(a, b);
		break;

	case '-':
		c = substract(a, b);
		break;

	case '/':
		c = divide(a, b);
		break;

	case '*':
		c = multiply(a, b);
		break;

	default:
		cout << "Error";
	}
	printresult(c);
	
}
