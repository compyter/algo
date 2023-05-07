#include <stdio.h>
#include <iostream>

using namespace std;

int main(void)
{
    int TOTAL, N, sum = 0;
    cin >> TOTAL >> N;

    for (int i = 0; i < N; i++)
    {
        int price, count;
        cin >> price >> count;

        sum += price * count;
    }

    string result = (TOTAL == sum) ? "Yes" : "No";

    cout << result;

    return 0;
}