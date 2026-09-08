class Solution {
public:
    string removeOuterParentheses(string s) 
    {
        stack<char> st;
        string ans;

        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '(')st.push(s[i]);
            
            if((st.size() > 1) && (s[i] == '('))ans.insert(ans.end(),'(');
            else if((st.size() > 1) && (s[i] == ')'))ans.insert(ans.end(),')'),st.pop();
            else if((st.size() == 1) && (s[i] == ')'))st.pop();
        }

        return ans;
    }
};