#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	cout << sizeof(short) << endl;
	cout << 0 << " ... " << USHRT_MAX << endl;
	cout << SHRT_MIN << " ... " << SHRT_MAX << endl;
	cout << sizeof(long) << endl;
	cout << 0 << " ... " << ULONG_MAX << endl;
	cout << LONG_MIN << " ... " << LONG_MAX << endl;
	cout << sizeof(int) << endl;
	cout << 0 << " ... " << UINT_MAX << endl;
	cout << INT_MIN << " ... " << INT_MAX << endl;
	cout << sizeof(long long) << endl;
	cout << 0 << " ... " << ULLONG_MAX << endl;
	cout << LLONG_MIN << " ... " << ULLONG_MAX << endl;

}