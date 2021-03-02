  
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    setlocale(0, "");
    int random_number, i, k;
    
    srand(time(0));
    random_number = rand() % 101;
    for (i = 0; i <= 4; i++)
    {
        cin >> k;
        if (k > random_number)
            cout << "Загаданное число меньше" << endl;;
        if (k < random_number)
            cout << "Загаданное число больше" << endl;
        if (k == random_number)
        {
            cout << "Вы выиграли!" << endl;
            break;
        }
    }
    if (k != random_number)
        cout << "Вы проиграли. Было загадано:" << random_number << endl;
    cout << "Хотите начать сначала ? (1 - да)" << endl;
    int count;
    cin >> count;
    return main();
    system("pause");
    return 0;
}