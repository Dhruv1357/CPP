#include <iostream>
using namespace std;

class Solution {
  public:
    char firstRep(string s) 
    {

        unordered_map<char,int>um;
        
        for(int i=0;i<s.size();i++)
        {
            um[s[i]]++;
        }
        for(int i=0;i<s.size();i++)
        {
            if(um[s[i]] > 1)
                return s[i];
        }
        return '#';
    }
};