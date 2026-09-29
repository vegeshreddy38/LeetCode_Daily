class Solution {
public:
    int maxEqualAdjacentPairs(vector<int>& nums) {
        int n=nums.size();
        int adj=0;
        int res=0;
        map<pair<int,int>,int>mp;

        for(int i=0;i<n-1;i++){
            if(nums[i] == nums[i+1]){
                adj++;
            }
            else{
                int a=min(nums[i],nums[i+1]);
                int b=max(nums[i],nums[i+1]);

                mp[{a,b}]++;
            }
        }

        for(auto it : mp){
            res=max(res,it.second);   
        }

        return res+adj;
    }
};