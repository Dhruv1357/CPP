class Solution {
  public:
    int countPairs(vector<int> &arr, int target) 
    {
        // Code here
        unordered_map<int,int>um;
        int count=0;
        
        for(int i=0;i<arr.size();i++)
        {
            if(um.find(target - arr[i]) != um.end())
            {
                count+=um[target - arr[i]];
                um[arr[i]]++;
            }
            else
                um[arr[i]]++;
        }
        return count;
    }
};