/*
Problem - Sum 1 to n divisors
Platform - GeeksForGeeks
Summary - Sum of all the divisors of numbers from 1 to n
*/

#include <iostream>
using namespace std;

long long sumOfDivisors(long long n)
{
    // Code here
    long long sum = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i <= n / 2)
            sum += (n / i) * i;
        else
            sum += i;
    }

    return sum;
}

int main()
{
    long long num;
    cin >> num;
    cout << sumOfDivisors(num);
}