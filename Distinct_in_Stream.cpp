#include<iostream>
using namespace std;

class Solution {
  public:
    vector<int> getDistinct(vector<int> &arr) {
        // code here
        unordered_map<int,int>um;
        vector<int>v;
        
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i] > 0)
            {
                um[arr[i]]++;
            }
            else if(arr[i] < 0 && um[arr[i]*(-1)] > 1)
            {
                um[arr[i]*(-1)]--;
            }
            else if(arr[i] < 0 && um[arr[i]*(-1)] <= 1)
            {
                um.erase(arr[i] * (-1));
            }
            
            v.push_back(um.size());
        }
        
        return v;
    }
};