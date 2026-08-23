// User function template for C++
class Solution {
  public:
    /* Returns count of pairs with difference k  */
    int countPairs(vector<int>& arr, int k) 
    {
        unordered_map<int,int>um;
        int count=0;
        
        for(int i=0;i<arr.size();i++)
        {
            if(um.find(arr[i] - k) != um.end())
            {
                count+=um[arr[i] - k];
                um[arr[i]]++;
                
                if(um.find(arr[i] + k) != um.end())
                    count+=um[arr[i] + k];
            }
            else if(um.find(arr[i] + k) != um.end())
            {
                count+=um[arr[i] + k];
                um[arr[i]]++;
            }
            else
                um[arr[i]]++;
        }
        return count;
    }
};