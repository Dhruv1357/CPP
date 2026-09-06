class Solution 
{
  public:
    vector<int> findEvenOccurrences(vector<int>& arr) 
    {

        unordered_map<int,int>um;
        vector<int>v;
        
        for(int i =0;i<arr.size();i++)
        {
            um[arr[i]]++;
        }
        for(int i = 0;i<arr.size();i++)
        {
            if((um.find(arr[i]) != um.end()) && (um[arr[i]]%2 == 0))
            {
                v.push_back(arr[i]);
                um.erase(arr[i]);
            }
        }
        if(v.size() == 0)
            v.push_back(-1);
            
        return v;
    }
};