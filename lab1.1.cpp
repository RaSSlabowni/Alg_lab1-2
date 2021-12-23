#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Числа от 0 до 10" << endl;
	for (int i = 0; i < 11; ++i)
		cout << i << endl;
}