/*
Problem - Printing the Leader elements
Platform - GeeksForGeeks
Summary - Leader elements are those which are greater than or equal to all the elements on its right side in an array
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;
    vector<int> v;

    for(int i=0;i<10;i++)
    {
        cin >> arr[i];
    }
    int max = arr[(arr.size()) - 1];
    int leader = 1;
    
    v.insert(v.begin(), max);

    for (int i = arr.size() - 2; i >= 0; i--)
    {
        if (arr[i] >= max)
        {
            v.insert(v.begin(), arr[i]);
            max = arr[i];
        }
    }

    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
}