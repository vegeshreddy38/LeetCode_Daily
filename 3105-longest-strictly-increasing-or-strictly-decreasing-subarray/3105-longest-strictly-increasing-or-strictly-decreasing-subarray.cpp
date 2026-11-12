class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();

        int inc_start=0;
        // bool inc=true;
        // bool dec=false;
        int dec_start=0;

        int res=1;

        for(int i=1;i<n;i++){
            int diff=nums[i]-nums[i-1];

            if(diff > 0){
                res=max(res,i-inc_start+1);
                dec_start=i;
            }
            else if(diff < 0){
                res=max(res,i-dec_start+1);
                inc_start=i;
            }
            else{
                inc_start=i;
                dec_start=i; 
            }
        }
        return res;
    }
};