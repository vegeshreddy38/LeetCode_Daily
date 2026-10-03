class Solution {
public:

    
    int longestValidParentheses(string s) {

        int n=s.length();

        int res=0;

        stack<int>st;
        st.push(-1);
        for(int i=0;i<n;i++){
            char c=s[i];

            if(c == '('){
                st.push(i);
            }
            else{
                st.pop();

                if(st.empty()){
                    st.push(i);
                }
                else
                    res=max(res,i-st.top());
            }
        }

        return res;
        
    }
};