class Solution {
public:
    int minInsertions(string s) {
        
        stack<char>st;
        int res=0;
        for(int i=0;i<s.length();i++){
            char c1=s[i];
            char c2;
            if(i != s.length()-1 )
                c2=s[i+1];
            else{
                c2='*';
            }

            if( c1=='('){
                st.push(c1);
            }
            else if(c1 == ')' && c2 == ')'){
                if(!st.empty()){
                    st.pop();
                }
                else
                   res=res+1;
                i++;
            }
            else{
                if(!st.empty()){
                    st.pop();
                    res=res+1;
                }
                else{
                    res=res+2;
                }
            }
        }

        if(st.empty()){
            return res;
        }
        else{
            return res+st.size()*2;
        }
  
    }
};


