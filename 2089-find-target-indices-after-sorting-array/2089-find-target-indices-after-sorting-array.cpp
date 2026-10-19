class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>res;

        int tar_cnt=0;
        int cnt=0;

        for(int i=0;i<n;i++){
            if(nums[i]<target)
               cnt++;
            if(nums[i]==target)
               tar_cnt++;
        }

        for(int i=cnt;i<tar_cnt+cnt;i++){
            res.push_back(i);
        }

        return res;

    }
};