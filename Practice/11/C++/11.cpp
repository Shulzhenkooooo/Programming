#include<locale>
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, i, c;
    cout << "Введите число\n";
    cin >> a;
    cout << "Введите степень, в которую хотите возвести число\n";
    cin >> b;
    c = a;
    if (b > 0)
    {
        for (i = 1; i < b; i++)
        {
            c = c * a;
        }
    }
    if (b < 0)
    {
        c = 1;
        for (i = 0; i > b; i--)
        {
            c = c * (1 / a);
        }
    }
    if (b == 0)
    {
        c = 1;
    }
    cout << c;
    return 0;
}