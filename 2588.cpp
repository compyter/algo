#include <stdio.h>
#include <iostream>

using namespace std;

int main(void)
{
    int number1, number2, operand, result;
    cin >> number1 >> number2;

    result = number1 * number2;

    while (number2 > 0)
    {
        operand = number2 % 10;
        number2 /= 10;

        cout << number1 * operand << '\n';
    }

    cout << result;

    return 0;
}