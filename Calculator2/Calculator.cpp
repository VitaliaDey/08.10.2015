#include <iostream>

using namespace std;

int main()
{
	double a, b;
	char choise;
	cout << "Enter a:" << endl;
	cin >> a;
	cout << "Enter b:" << endl;
	cin >> b;
	cout << "Choose an operation for a and b" << endl;
	cout << "if you want sum press +" << endl;
	cout << "if you want residual press -" << endl;
	cout << "if you want multiplication press *" << endl;
	cout << "if you want divison press / or :" << endl;
	cin >> choise;
	double  res;
	switch (choise)
	{
	case '+':
		res = a + b;
		cout << "a + b = " << res << endl;
		break;
	case '-':
		res = a - b;
		cout << "a - b = " << res << endl;
		break;
	case '*':
		res = a * b;
		cout << "a * b = " << res << endl;
		break;
	case '/':
	case ':':
		while (true)
		{
			if (b != 0)
				break;
			cout << "Error!" << endl;
			cin >> b;
		}
		res = a / b;
		cout << "a / b =" << res << endl;
		break;

	default:
		cout << "There is no such symbol" << endl;
		cout << " Choose from +, -, *, / or :" << endl;
	}
	system("pause");
	return 0;
}