class Solution {
public:
    string removeStars(string s) 
    {
        string ans;

        for(int i=0;i<s.size();i++)
        {
            if(s[i] != '*')ans.insert(ans.end(),s[i]);
            else ans.erase(ans.size()-1,1);
        }

        return ans;
    }
};