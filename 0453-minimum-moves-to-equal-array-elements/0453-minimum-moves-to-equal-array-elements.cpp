class Solution {
public:
    int minMoves(vector<int>& nums) {
        int x=*min_element(nums.begin(),nums.end());

        int res=0;

        for(int y : nums){
            res+=y-x;
        }
        return res;
    }
};