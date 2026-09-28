class Solution {
public:
    int maxDepth(string s) {
        int res=0;

        int n=s.length();
        int open=0;

        for( int i=0;i<n;i++){
            if(s[i]=='('){
                open++;
                res=max(res,open);
            }
            else if(s[i]==')'){
                open--;
            }
        }
        return res;
        
    }
};