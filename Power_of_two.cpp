/*
Problem - Power of 2
Platform - GeeksForGeeks
Summary - Is the given number a power of two
*/

#include <iostream>
using namespace std;

bool isPowerofTwo(int n)
{
    int count = 0;

    if (n == 0)
        return false;
    for (int i = 0; i < 32; i++)
    {
        if (n & (1 << i))
            count++;
        if (count == 2)
            return false;
    }

    return true;
}
int main()
{
    int num;
    
    cin >> num;

    cout << isPowerofTwo(num);
}