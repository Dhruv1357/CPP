class Solution {
public:
    int evalRPN(vector<string>& tokens) 
    {
        stack<int> st;
        int n1,n2;

        for(string s : tokens)
        {
            if(s == "+")n2=st.top(),st.pop(),n1=st.top(),st.pop(),st.push(n1+n2);
            else if(s == "-")n2=st.top(),st.pop(),n1=st.top(),st.pop(),st.push(n1-n2);
            else if(s == "*")n2=st.top(),st.pop(),n1=st.top(),st.pop(),st.push(n1*n2);
            else if(s == "/")n2=st.top(),st.pop(),n1=st.top(),st.pop(),st.push(n1/n2);
            else
            {
                int a=0;

                if(s[0] != '-')
                {
                    for(int i=0;i<s.size();i++)
                    {
                        a = a * 10 + (s[i] - '0');
                    }
                }
                else
                {
                    for(int i=1;i<s.size();i++)
                    {
                        a = a * 10 + (s[i] - '0');
                    }
                    a*=-1;
                }
                st.push(a);
            }
        }

        return st.top();
    }
};