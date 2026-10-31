class Solution {
public:
    string decodeMessage(string key, string message) {

        int n=key.length();
        int m=message.length();

        vector<int>code(26,0);
        vector<int>seen(26,0);

        int idx=0;

        for(int i=0;i<n;i++){
            int a=key[i]-'a';

            if(key[i] !=' '  &&  seen[a]==0){
                code[a]=idx;
                idx++;
                seen[a]=1;  
            }
        }
        string res="";
        for(int i=0;i<m;i++){

            if(message[i] == ' '){
                res+=' ';
                continue;
            }
            else{
                int l=message[i]-'a';
                char c='a'+code[l];
                res+=c;
            }
        }

        return res;
    }
};