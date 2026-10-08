class Solution {
public:
    int findPermutationDifference(string s, string t) {

        vector<int>mp(26,0);

        for(int i=0;i<s.length();i++){
            mp[s[i]-'a']=i;
        }

        int res=0;
        for(int i=0;i<t.length();i++){
            int k=t[i]-'a';
            res+=abs(mp[k]-i);
        }
        return res;
        
    }
};