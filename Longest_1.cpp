/*
Problem - Longest consecutive 1s
Platform - GeeksForGeeks
Summary - Find the length of the longest consecutive 1s in the binary representation of a number
*/

#include <iostream>
using namespace std;

int maxConsecutiveOnes(int n)
{
    // code here
    int max = 0, length = 0;

    for (int i = 0; i < 32; i++)
    {
        if (n & (1 << i))
            length++;
        else
        {
            if (length > max)
                max = length;

            length = 0;
        }
    }

    return max;
}

int main()
{
    int num;
    
    cin >> num;

    cout << maxConsecutiveOnes(num);
}