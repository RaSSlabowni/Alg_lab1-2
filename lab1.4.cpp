#include <iostream>

using namespace std;

int main()
{
    int n = 1000;
    int* arr = new int[n + 1];
    for (int i = 0; i < n + 1; i++)
        arr[i] = i;
    for (int p = 2; p < n + 1; p++)
    {
        if (arr[p] != 0)
        {
            for (int j = p * p; j < n + 1; j += p)
                arr[j] = 0;
        }
    } // до этой строки алгоритм из предыдущел лабы (заполнение массива простыми числами)

    int N, current;
    cin >> N;
    int* indexes = new int[N];
    for (int i = 0; i < N; ++i)
    {
        cin >> current;
        indexes[i] = current + 1;
    }
    for (int i = 0; i < N; ++i)
    {
        while (arr[indexes[i]] == 0)
            indexes[i] += 1;
        cout << arr[indexes[i]] << endl;
    }
    return 1;
}