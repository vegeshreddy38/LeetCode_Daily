class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string>res;
        for(int i=0;i<m;i++){
            string s="";
            
            if(i == 0){
                for(int j=0;j<n;j++){
                    s+=".";
                }
            }
            else{
                for(int j=0;j<n;j++){
                    if(j==n-1){
                        s+=".";
                    }
                    else{
                        s+="#";
                    }
                }
            }
            res.push_back(s);
        }
        return res;
        
    }
};