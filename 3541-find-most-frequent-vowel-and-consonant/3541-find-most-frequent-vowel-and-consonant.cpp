class Solution {
public:
    int maxFreqSum(string s) {

        vector<int>mp(26,0);

        for(char c : s){
            mp[c-'a']++;
        }

        int vowel=0;
        int conso=0;
        for(int i=0;i<26;i++){
            char c='a'+i;
            if(c=='a'  || c=='e'  ||  c=='i' || c=='o' || c=='u')
                vowel=max(vowel,mp[i]); 
            else
                conso=max(conso,mp[i]);
       }

       return vowel+conso;
    }
};