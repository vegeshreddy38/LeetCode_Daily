class Solution {
public:
    int sortPermutation(vector<int>& nums) {

        int n=nums.size();
        int res=-1;
        for(int i=0;i<n;i++){
            if(i!=nums[i])
                res=res & (nums[i] & i);
        }
        if(res==-1)
           return 0;
        return res;
        
    }
};