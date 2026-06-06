/*
Problem - C++ Nega Bit
Platform - GeeksForGeeks
Summary - Given two numbers,for every set bit in one number negate the bit in second number
*/

#include <iostream>
using namespace std;

int negaBit(int F, int S)
{

    for (int i = 0; i < 32; i++)
    {
        if (F & (1 << i))
        {
            S = S ^ (1 << i);
        }
    }

    return S;
}

int main()
{
    int num1, num2;
    
    cin >> num1, num2;

    cout << negaBit(num1, num2);
}