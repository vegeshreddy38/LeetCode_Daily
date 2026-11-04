class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int prod=1;
        int zero_idx=-1;
        int zeros=0;
        bool present_0=false;

        int n=nums.size();

        for(int i=0;i<n;i++){
            int x=nums[i];
            if(x == 0){
                zeros++;
                zero_idx=i;
                present_0=true;
            }
            else{
                prod*=x;
            }
        }
        if(zeros > 1){
            return vector<int>(n,0);
        }
        vector<int>res;
        for(int i=0;i<n;i++){
            if(i == zero_idx){
                res.push_back(prod);
            }
            else{
                if(present_0){
                    res.push_back(0);
                }
                else{
                    res.push_back(prod/nums[i]);
                }
            }
        }
        return res;
    }
};