class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {

        int n=nums.size();

        long long res=0;

        int i=0;
        while(i < n){
            int j=i;
            while( j<n && (nums[j]>=minK && nums[j]<=maxK)){
                j++;
            }
            long long k=j-i;
            res+=k*(k+1)/2;
            i=j+1;
        }
        return res;
        
    }
};