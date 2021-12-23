#include <iostream>
#include <vector>
using namespace std;

int main()
{

    setlocale(LC_ALL, "Russian");
    vector<int> a;
    vector<bool> b;
    vector<int> с;

    int kol_el;
    int n;
    int kol_el_c;

    cout << "Введите начальное кол-во элементов для целочисленного вектора: " << endl;
    cin >> kol_el;
    cout << "Введите сколько раз увеличить число элементов: " << endl;
    cin >> n;
    cout << "Введите кол-во элементов (пример): " << endl;
    cin >> kol_el_c;

    cout << "capacity() - сколько может вместить вектор, прежде чем увеличится размер этого вектора" << endl;
    cout << "size() - количество элементов" << endl;

    for (int j = 0; j < kol_el_c; j++)
    {
        с.push_back(j);
    }
    cout << "Пример: Для целочисленного вектора из " << kol_el_c << " элементов, функция вместимости = " << с.capacity() << ", а размер = " << с.size() << endl;

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < kol_el; j++)
        {
            a.push_back(j);
        }
        cout << "Для целочисленного вектора функция вместимости = " << a.capacity() << ", а размер = " << a.size() << endl;
        kol_el *= 2;
    }

    cout << endl;
    cout << "Введите начальное кол-во элементов для булевого вектора: " << endl;
    cin >> kol_el;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < kol_el; j++)
        {
            b.push_back(true);
        }
        cout << "Для булевого вектора функция вместимости = " << b.capacity() << ", а размер = " << b.size() << endl;
        kol_el *= 2;
    }

}