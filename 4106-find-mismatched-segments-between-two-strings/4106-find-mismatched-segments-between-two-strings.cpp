class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {

        int n=s1.length();

        vector<vector<string>>res;

        int i=0;
        int j=0;

        while(i<n && j<n){
            if(s1[j]!=s2[j]){
                if(j+1 < n){
                    if(s1[j+1] == s2[j+1]){
                        res.push_back({s1.substr(i,j-i+1),s2.substr(i,j-i+1)});
                        i=j+2;
                        j=j+2;
                    }
                    else{
                        j++;
                    }
                }
                else{
                    res.push_back({s1.substr(i,j-i+1),s2.substr(i,j-i+1)});
                    j++;
                }
            }
            else{
                i++;
                j++;
            }
        }
        return res;
    }
};