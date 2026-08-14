#include <iostream>
using namespace std;

class Solution {
  public:

    bool subArrayExists(vector<int>& arr) 
    {

        unordered_map<int,int>um;
        um[arr[0]]++;
        if(arr[0] == 0)
            return true;
            
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i] == 0)
                return true;
                
            arr[i] = arr[i-1] + arr[i];
            um[arr[i]]++;
            
            if(arr[i] == 0)
                return true;
            if(um[arr[i]] > 1)
                return true;
        }
        return false;
    }
};