/*
Problem - Factorial Number
Platform - GeeksForGeeks
Summary - Finding if the given number is a factorial or not.
*/

#include <iostream>
using namespace std;

int isFactorial(int N)
{

    int product = 1;

    for (int i = 1; product <= N; i++)
    {
        product *= i;
        if (product == N)
            return 1;
    }
    return 0;
}

int main()
{
    int num;
    cin >> num;
    cout << isFactorial(num);
}