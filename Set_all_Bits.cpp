/*
Problem - Set all the bits in a given range
Platform - GeeksForGeeks
*/

#include <iostream>
using namespace std;
int setAllRangeBits(int N, int L, int R)
{

    for (int i = L - 1; i < R; i++)
    {
        N = N | (1 << i);
    }

    return N;
}

int main()
{
    int num, left, right;

    cin >> num >> left >> right;

    cout << setAllRangeBits(num, left, right);
}