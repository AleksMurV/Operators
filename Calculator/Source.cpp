#include<iostream>
using namespace std;

//#define CALC
//#define BILET

int main()
{
	setlocale(LC_ALL, "Rus");
#ifdef CALC
	int a, b;
	char arifm;
	while (true)
	{
		double a, b;
		char s;
		cout << "Введите простое арифмитическое выражение: " << endl;
		cin >> a >> s >> b;
		switch (s)
		{
		case '+':
			cout << a << " + " << b << " = " << a + b << endl;
			break;
		case '-':
			cout << a << " - " << b << " = " << a - b << endl;
			break;
		case '*':
			cout << a << " * " << b << " = " << a * b << endl;
			break;
		case '/':
			cout << a << " / " << b << " = " << a / b << endl;
			break;
		default:
			cout << "Ошибка! Введен неправильный знак арифмитических действий" << endl;
			break;
		}
	}
#endif // CALC

#ifdef BILET

	int num;
	while (true)
	{
		cout << "Введите номер автобусного билета: " << endl;
		cin >> num;
		int a1 = num / 100000;
		int a2 = (num / 10000) % 10;
		int a3 = (num / 1000) % 10;
		int a4 = (num / 100) % 10;
		int a5 = (num / 10) % 10;
		int a6 = num % 10;

		if (a1 + a2 + a3 == a4 + a5 + a6)
			cout << "Ваш билет счастливый" << endl;
		else
			cout << "Это обычный билет" << endl;
	}
#endif // BILET	
}