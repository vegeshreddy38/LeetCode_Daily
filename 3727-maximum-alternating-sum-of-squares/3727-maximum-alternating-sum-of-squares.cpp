class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {

        int n=nums.size();

        for(int i=0;i<n;i++){
            nums[i]=nums[i]*nums[i];
        }

        sort(nums.begin(),nums.end());

        long long neg=0;
        long long pos=0;

        int l=(n/2);

        for(int i=0;i<n;i++){
            if(i < l){
                neg+=nums[i];
            }
            else{
                pos+=nums[i];
            }
        }
        return pos-neg;
    }
};