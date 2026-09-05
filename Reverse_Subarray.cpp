#include <iostream>
using namespace std;
class Solution 
{
  public:
    vector<int> reverseSubArray(vector<int> &arr, int l, int r) 
    {

        int temp,x = 1;
        
        for(int i=l;i<=(r+l)/2;i++)
        {
            temp = arr[i-1];
            arr[i-1] = arr[r-x];
            arr[r-x] = temp;
            x++;
        }

        return arr;
    }
};