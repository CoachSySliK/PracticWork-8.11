#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    cout << "Enter two numbers:\n";
    cin >> x >> y;
    z = ((x + y) + abs(x - y)) / 2; 
    //я не уверен, что функция модуль числа не использует операторы сравнения или циклы, я не знаю как это проверить.
    cout << z << " is the biggest\n";
    return 0;
}
