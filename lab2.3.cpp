#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

vector<int> creating_result(int n) 
{ 

    vector<bool> a(n + 1, true);

    int count = 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (a[i] == true)
        {
            for (int j = (i * i); j <= n; j += i)
            {
                a[j] = false;
                count++;
            }
        }
    }

    vector<int> v(n - count); 

    for (int i = 2; i < n; i++)
    {
        if (a[i] == true)
        {
            v.push_back(i);
        }
    }
    return(v);
}

int main()
{
    setlocale(LC_ALL, "Russian"); 
    ofstream fout("log_2;3.txt");
    int n;
    cout << "Введите число для алгоритма Эратосфена\n";
    cin >> n;
    fout << "Размер: " << n << " Простые числа: ";
    vector<int> result = creating_result(n);
    cout << "Результат: \n";

    for (int i = 0; i < result.size(); ++i)
    {
        if (result[i] != 0) 
        {
            cout << result[i] << " ";
            fout << result[i] << " ";
        }
    }
    fout << endl;
    fout.close();
}
