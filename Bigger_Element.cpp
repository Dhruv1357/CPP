/*
Problem - Element before which no element is bigger
Platform - GeeksForGeeks
Summary - Count the number of elements which have no bigger element than it before it
*/

#include <iostream>
#include <vector>
using namespace std;

int countElements(vector<int> &arr)
{
    int max = 0, count = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            count++;
        }
    }
    return count;
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
    cout << countElements(v);
}