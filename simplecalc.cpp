#include <bits/stdc++.h>
using namespace std;

int main()
{
	char operation;
	float num1, num2;
    
    cout<<"Enter the Numbers"<<endl;
    cin >> num1 >> num2;
    cout<<"Enter the operator" <<endl;
    cin >> operation;


	switch (operation) {
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
		cout << num1 / num2;
		break;

	default:
		cout << "Error! operator is not correct";
	}

	return 0;
}
