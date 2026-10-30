class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {

        int n=nums.size();

        vector<int>freq(n+1,0);

        for(int x : nums){
            freq[x]++;
        }        

        vector<vector<int>>res;

        int cnt=n;
        while(cnt){
            vector<int>temp;
            for(int i=0;i<=n;i++){
                if(freq[i]){
                    temp.push_back(i);
                    freq[i]--;
                    cnt--;
                }
            }
            res.push_back(temp);
        }

        return res;
    }
};