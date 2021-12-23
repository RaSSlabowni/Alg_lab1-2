#include <iostream>
#include <vector>

using namespace std;

void fill_vect(vector<int>& v)
{
	for (int i = 0; i < v.size(); ++i)
	{
		int n;
		cin >> n;
		v[i] = n;
	}
}


void find_max(vector<int>& v)
{
	int max = 0;
	for (int i = 0; i < v.size(); ++i)
		if (max < v[i])
			max = v[i];
	cout << max << endl;
}



int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	fill_vect(a);
	find_max(a);
}