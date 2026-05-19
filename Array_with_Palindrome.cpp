/*
Problem - Array with all Palindrome
Platform - GeeksForGeeks
Summary - Return true if all array elements are palindrome
*/

#include <iostream>
#include <vector>
using namespace std;

bool isPalinArray(vector<int> &arr)
{
    vector<int> v1;
    vector<vector<int>> v;

    for (int i = 0; i < arr.size(); i++)
    {
        v1.clear();
        do
        {
            v1.push_back(arr[i] % 10);
            arr[i] /= 10;
        } while (arr[i] != 0);
        v.push_back(v1);
    }

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size() / 2; j++)
        {
            if (v[i][j] != v[i][v[i].size() - 1 - j])
                return false;
        }
    }

    return true;
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
    cout << isPalinArray(v);
}