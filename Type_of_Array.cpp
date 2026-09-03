#include <iostream>
using namespace std;

class Solution 
{
  public:
    int typeOfArr(vector<int>& arr) 
    {
        int aCount = 0,dCount = 0;
        
        for(int i = 1;i<arr.size();i++)
        {
            if(arr[i] > arr[i-1])
                aCount++;
            else if(arr[i] < arr[i-1])
                dCount++;
        }
        if(aCount == (arr.size() - 1))
            return 1;
        else if(dCount == (arr.size() - 1))
            return 2;
        else if(aCount < dCount)
            return 3;
        else if(aCount > dCount)
            return 4;
    }
};