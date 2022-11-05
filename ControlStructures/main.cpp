#include<iostream>
using namespace std;

//#define TEMPERATURE
//#define TARGET
//#define CALC_1
//define - определить
//definition - определение


void main()
{
	setlocale(LC_ALL, "Rus");
#if defined TEMPERATURE	
	int temperature;
	cout << "Введите температуру воздуха: "; cin >> temperature;
	if (temperature > 0)
	{
		cout << " На улице тепло" << endl;
	}
	else
	{
		cout << "На улице холодно" << endl;
	}
#endif //TEMPERATURE

#ifdef TARGET
	int n;
	cout << "Введите число: "; cin >> n;
	if (n < 0 && n < 10)
	{
		cout << "Цель поражена" << endl;
	}
	else
	{
		cout << "Вы промахнулись" << endl;
	}
#endif // TARGET

#if define CALC_1  // Начало блока
	// если определено CALC_1, то нижеследующий код, до дерективы #endif, будет виден кампилятору
	double a, b; // Числа вводимые с клавиатуры
	char s;      // Sign - знак операции
	cout << "Введите простое арифмитическое выражение: ";
	cin >> a >> s >> b;
	// cout << a << s << b << endl;
	if (s == '+')
	{
		cout << a << " + " << b << " = " << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << " - " << b << " = " << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << " * " << b << " = " << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << " / " << b << " = " << a / b << endl;
	}
	else
	{
		cout << "Error: No operation!" << endl;
	}
#endif // Конец блока


}