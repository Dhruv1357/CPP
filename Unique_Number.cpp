/*
Problem - Unique Number 1
Platform - GeeksForGeeks
Summary - Given an array in which every element occurs exactly twice except for one element which occurs only once,find that element
*/

#include <iostream>
using namespace std;

int findUnique(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        arr[0] = arr[0] ^ arr[i];
    }
    return arr[0];
}