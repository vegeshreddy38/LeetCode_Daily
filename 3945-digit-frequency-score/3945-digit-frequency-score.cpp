// class Solution {
// public:
//     int digitFrequencyScore(int n) {

//         unordered_map<int,int>mp;

//         while(n){
//             int d=n%10;
//             mp[d]++;
//             n=n/10;
//         }

//         int sum=0;
//         for(auto it : mp){
//             sum+=it.first*it.second;
//         }
//         return sum;
        
//     }
// };


class Solution {
public:
    int digitFrequencyScore(int n) {

        int sum=0;
        while(n){
            int d=n%10;
            sum+=d;
            n=n/10;
        }
        return sum;
        
    }
};