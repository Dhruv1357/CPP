/*
Problem - Factorial
Platform - GeeksForGeeks
Summary - Finding the factorial of the given number n
*/

#include <iostream>
using namespace std;

int factorial(int n)
{

    int factorial = 1;

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    return factorial;
}

int main()
{
    int num;
    
    cin >> num;
    cout << factorial(num);
}