// class Solution {
// public:
//     vector<int> smallerNumbersThanCurrent(vector<int>& nums) {

//         vector<int>res;
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             int cnt=0;
//             for(int j=0;j<n;j++){

//                 if(nums[i] > nums[j])
//                     cnt++;
//             }  
//             res.push_back(cnt);
//         }
//         return res;

        
        
//     }
// };

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {

        vector<int>res;
       
        vector<int>freq(101,0);

        for(int x : nums){
            freq[x]++;
        }

        for(int i=1;i<=100;i++){
            freq[i]+=freq[i-1];
        }
        for(int x :  nums){
            if(x == 0)
                res.push_back(0);
            else
                res.push_back(freq[x-1]);
        }
        return res;

        
        
    }
};