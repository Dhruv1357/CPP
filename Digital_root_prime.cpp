/*
Problem - Is digital root of a number a prime
Platform - GeeksForGeeks
Summary - Finding if the digital root of a number a prime or not, a digital root of a number is the sum of its digit until we get a single digit sum.
*/

#include <iostream>
using namespace std;

int digitalRoot(int N)
{
    // Write Your Code here
    bool prime = 1;
    int sum, num = N;

    do
    {
        sum = 0;
        for (int i = 0; num != 0; i++)
        {
            sum += num % 10;
            num /= 10;
        }
        if (sum > 9)
            num = sum;

    } while (sum > 9);

    if (sum == 1)
        return 0;

    for (int i = 2; i * i <= sum; i++)
    {
        if (sum % i == 0)
        {
            prime = 0;
            break;
        }
    }

    if (prime)
        return 1;
    else
        return 0;
}
int main()
{
    int num;
    cin >> num;
    cout << digitalRoot(num);
}