/*
Problem - Prime Number
Platform - GeeksForGeeks
Summary - Finding if the given number is a prime number or not
*/

#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n > 1)
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
    }
    else if (n == 1)
        return false;
    return true;
}

int main()
{
    int num;
    cin >> num;
    cout << isPrime(num);
}