/*
Problem - Bit Manipulation
Platform - GeeksForGeeks
Summary - Doing some bit operations on bit
*/

#include <iostream>
using namespace std;

void bitManipulation(int num, int i)
{

    bool get = num & (1 << (i - 1));
    int set = num | (1 << (i - 1)), clear = num & ~(1 << (i - 1));

    cout << get << " " << set << " " << clear;
}

int main()
{
    int n, i;
    cin >> n >> i;
    bitManipulation(n, i);
}