#include <iostream>
using namespace std;
int main()
{
    const int N = 37;
    int A[N];
    int red[]{ 1, 3, 5, 7, 9, 12, 14, 16, 18, 19, 21, 23, 25, 27, 30, 32, 34, 36 };
    int black[]{ 2, 4, 6, 8, 10, 11, 13, 15, 17, 20, 22, 24, 26, 28, 29, 31, 33, 35 };
    int i, n, b, t, s;
    b = 0;
    t = 0;
    s = 0;
    for (i = 0; i < N; i++)
    {
        A[i] = 0;
    }
    while (1)
    {
        cin >> n;
        for (i = 0; i < 18; i++)
        {
            if (n == red[i])
                s++;
            if (n == black[i])
                t++;

        }
        A[n]++;
        if (n < 0)
            break;
        for (int i = 0; i < N; i++)
        {
            if (A[i] > b)
                b = A[i];
        }
        for (int i = 0; i < N; i++)
        {
            if (A[i] == b) cout << i << " ";
        }
        cout << endl;
        for (int i = 0; i < N; i++)
        {
            if (A[i] == 0) cout << i << " ";
        }
        cout << endl << s << " " << t << endl;
    }




    system("pause");
    return 0;
}