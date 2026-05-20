/*
Problem - Count Odd and Even
Platform - GeeksForGeeks
Summary - Count the number of even and odd numbers in the given array
*/

#include <iostream>
#include <vector>
using namespace std;

pair<int, int> countOddEven(vector<int> &arr)
{
    // your code here
    pair<int, int> p;
    int countEven = 0, countOdd;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 2 == 0)
            countEven++;
    }
    countOdd = arr.size() - countEven;

    p.first = countOdd;
    p.second = countEven;

    return p;
}
int main()
{
    vector<int> v;

    int size;
    cin >> size;
    int inp;

    for (int i = 0; i < size; i++)
    {
        cin >> inp;
        v.push_back(inp);
    }
    pair<int,int> res =  countOddEven(v);
}