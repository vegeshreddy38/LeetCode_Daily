class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>mp(101,0);

        int one=-1;
        int two=-1;
        for(int x : nums){
            mp[x]++;

            if(one == -1 && mp[x] == 2){
                one=x;
            }
            else if(mp[x] == 2)
                two=x;
        }
        return {one,two};
    }
};