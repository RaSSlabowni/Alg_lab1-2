#include <iostream>
//#include <vector>

using namespace std;


int main()
{
	vector<int> a;
	int N;
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		int n;
		cin >> n;
		a.push_back(n);
	}
	for (int i = 1; i < 21; ++i)
	{
		int count = 0;
		for (int j = 0; j < a.size(); ++j)
			if (a[j] == i)
				++count;
		if (count != 0)
			cout << i << ':' << count << endl;
	}
}