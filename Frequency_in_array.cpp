class Solution {
  public:

    vector<int> frequencyCount(vector<int>& arr) 
    {
        // code here
        vector<int> v (arr.size(),0);
        
        for(int i =0;i<arr.size();i++)
        {
            v[arr[i] - 1]++;
        }
        return v;
    }
};