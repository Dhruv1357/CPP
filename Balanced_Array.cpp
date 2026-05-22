/*
Problem - Balanced Array
Platform - GeeksForGeeks
Summary - Find the minimum value that needs to be added to any one element so that the array becomes balanced.
          An array is considered balanced when the sum of elements in the left half is equal to the sum of elements in the right half.
*/

#include <iostream>
#include <vector>
using namespace std;

int minValueToBalance(vector<int> &arr)
{
    // code here
    int add;
    long leftSum = 0, rightSum = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (i < arr.size() / 2)
            leftSum += arr[i];
        else if (i >= arr.size() / 2)
            rightSum += arr[i];
    }

    if (leftSum > rightSum)
        add = leftSum - rightSum;
    else
        add = rightSum - leftSum;

    return add;
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

    cout << minValueToBalance(v);
}