/*
Problem - Bit Difference
Platform - GeeksForGeeks
Summary - Given two numbers a and b, find the minimum number of bits to be flipped to convert a to b.
*/

#include <iostream>
using namespace std;

int countBitsFlip(int a, int b)
{
    int count = 0, max, notMax;

    if (a > b)
    {
        max = a;
        notMax = b;
    }
    else
    {
        max = b;
        notMax = a;
    }

    for (int i = 0; i < 32; i++)
    {
        if (max & (1 << i))
        {
            if (!(notMax & (1 << i)))
                count++;
        }
        else
        {
            if (notMax & (1 << i))
                count++;
        }
    }

    return count;
}

int main()
{
    int num1,num2;

    cin >> num1 >> num2;

    cout << countBitsFlip(num1,num2);
}