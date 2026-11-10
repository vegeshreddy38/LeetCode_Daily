class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {

        int n=nums.size();

        int res=0;

        unordered_set<int>st;

        for(int x : nums){
            st.insert(x);
        }
        for(int i=0;i<n;i++){
            if(st.find(nums[i]-diff)!=st.end()  &&    st.find(nums[i]+diff)!=st.end()) {
                res++;
            }
        }
        return res;
        
    }
};