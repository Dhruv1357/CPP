/*
Problem - Count unset bits in a given range
Platform - GeeksForGeeks
Summary - Counting the number of set bits in a given range
*/

#include <iostream>
using namespace std;

int countUnsetBits(int n, int l, int r)
{
    int count = 0;

    for (int i = l - 1; i < r; i++)
    {
        if (!(n & (1 << i)))
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int num, left, right;

    cin >> num >> left >> right;

    cout << countUnsetBits(num, left, right);
}