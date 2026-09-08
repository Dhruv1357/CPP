class Solution {
public:
    string makeGood(string s) 
    {
        stack<char>st;
        st.push(s[0]);

        for(int i=1;i<s.size();i++)
        {
            if((st.size() > 0) && ((s[i] == (st.top()+32)) || (s[i] == (st.top()-32))))st.pop();
            else st.push(s[i]);
        }
        s.clear();
        while(st.size() > 0)
        {
            s.insert(s.begin(),st.top());
            st.pop();
        }

        return s;
    }
};