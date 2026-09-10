class Solution {
public:
    string removeDuplicates(string s, int k) 
    {
        stack<pair<char,int>>st;
        pair<char,int> p;
        string ans;
        p.first = s[0],p.second = 1;
        st.push(p);

        for(int i=1;i<s.size();i++)
        {
            if((st.size() > 0) && (s[i] == st.top().first))st.top().second++;
            else p.first = s[i],p.second = 1,st.push(p);

            if(st.top().second == k)st.pop();
        }

        while(st.size() > 0)
        {
            ans.insert(ans.begin(),st.top().first);
            st.top().second--;

            if(st.top().second == 0)st.pop();
        }

        return ans;
    }
};