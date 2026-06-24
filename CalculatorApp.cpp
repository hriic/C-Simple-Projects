#include <iostream>
#include<string>
using namespace std;

void ViewOptions(char& op)
{
	cout << "Choose opertaion: + - * /: " << endl;
	cin >> op;
}

void ReadNumbers(float& Num1, float& Num2)
{
	cout << "Enter the first number: " << endl;
	cin >> Num1;

	cout << "Enter the second number: " << endl;
	cin >> Num2;
}

void Calculate(char& op, float& Num1,float& Num2)
{
	if (op=='+')
	{
		cout << Num1 <<"+"<< Num2<<" = "<< Num1+Num2;
	}
	else if (op=='-')
	{
		cout << Num1 <<"-"<< Num2<<" = "<< Num1 - Num2;
	}
	else if (op=='*')
	{
		cout << Num1<<"*"<< Num2<<" = "<< Num1 * Num2;
	}
	else if (op=='/')
	{
		if (Num2 == 0)
		{
			cout << "Error: Division by zero.";
		}
		else
		{
			cout << Num1 <<"/"<< Num2<< " = "<< Num1/Num2;
		}
	}
	else
	{
		cout << "Unknown operator: " << op;
	}




}









int main()
{
	float Num1, Num2;
	char op;
	ViewOptions(op);

	if (op != '+' && op != '-' && op != '*' && op != '/')
	{
		cout << "Unknown operator: " << op;
		return 0;
	}

	ReadNumbers(Num1, Num2);
	Calculate(op, Num1, Num2);


	return 0;
}
