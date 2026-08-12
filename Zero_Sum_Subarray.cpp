class Solution {
  public:
    // Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(vector<int>& arr) 
    {
        // Your code here
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