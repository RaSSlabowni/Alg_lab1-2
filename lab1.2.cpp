#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int* arr = new int [n];
	for (int i = 2, int j = 0; j < n; i += 2, ++j)
		arr[j] = i;
	return 1;
}