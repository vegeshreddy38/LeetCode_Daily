class Solution {
public:
    int minMoves2(vector<int>& nums) {

        int n=nums.size();

        sort(nums.begin(),nums.end());

        int middle1=nums[n/2];

        int res=0;
        for(int x : nums){
            res+=abs(middle1-x);
        }
        return res;
        
    }
};