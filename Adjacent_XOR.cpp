/*
Problem - Adjacent XOR
Platform - GeeksForGeeks
Summary - Replacing a number with the XOR of it with the adjacent number
*/

class Solution {
  public:
    void replaceElements(vector<int>& arr) 
    {
        int t1 = arr[0];
        
        for(int i=0;i<arr.size();i++)
        {
            int t2 = arr[i];

            if(i == 0)
                arr[0] = arr[0] ^ arr[1];

            else if(i<arr.size() - 1)
                arr[i] = t1 ^ arr[i+1];

            else
                arr[arr.size() - 1] = t1 ^ arr[arr.size() - 1];
                
            t1 = t2;
        }
    }
};