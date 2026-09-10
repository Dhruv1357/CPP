class Solution {
public:
    int minOperations(vector<string>& logs) 
    {
        stack<int>st;

        for(int i=0;i<logs.size();i++)
        {
            if((logs[i] == "../") && (st.size() > 0))st.pop();
            else if((logs[i] == "./") || ((logs[i] == "../") && (st.size() == 0)));
            else st.push(1);
        }

        return st.size();
    }
};