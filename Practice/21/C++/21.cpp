#include <iostream>
using namespace std;
double BMI(double weight, double height)
{
    double x = weight / (height * height);
    return x;
}
void printBMI(double x)
{
    if (x < 18.5)
        cout << "Underweight";
    if (x >= 18.5 && x < 25.0)
        cout << "Normal weight";
    if (x >= 25.0 && x < 30.0)
        cout << "Overweight";
    if (x >= 30.0)
        cout << "Obesity";
}
int main()
{
    double height, weight, x;
    x = 0;
    cin >> weight;
    cin >> height;
    BMI(weight, height);
    printBMI(x);

}