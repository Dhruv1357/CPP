/*
Problem - Check Bit
Platform - GeeksForGeeks
Summary - Given two numbers check if the kth bit of the given number is set or not
*/

#include <iostream>
using namespace std;
bool checkKthBit(int n, int k)
{

    if (n & (1 << k))
        return true;
    return false;
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << checkKthBit(n, k);
}