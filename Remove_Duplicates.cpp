#include <iostream>
#include <unordered_set>
using namespace std;

class Solution {
  public:
    vector<int> remDuplicate(vector<int>& arr) 
    {
        // code here
        unordered_set<int>us;
        
        for(int i=0;i<arr.size();i++)
        {
            us.insert(arr[i]);
        }
        
        arr.clear();
        
        for(int x : us)
        {
            arr.push_back(x);
        }
        return arr;
    }
};