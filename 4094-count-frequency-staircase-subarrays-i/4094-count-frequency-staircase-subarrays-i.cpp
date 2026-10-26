// class Solution {
// public:
//     int countStaircase(vector<int>& nums) {
//         int n=nums.size();
//         int res=0;
//         for(int i=0;i<n;i++){
//             unordered_map<int,pair<int,int>>mp;
//             unordered_map<int,int>freq;
//             unordered_map<int,int>seen;
//             int idx=0;
//             for(int j=i;j<n;j++){
//                 int x=nums[j];
//                 freq[x]++;
//                 if(seen[x] == 0){
//                      idx++;
//                     seen[x]=1;
//                     mp[idx]=make_pair(x,freq[x]);
//                 }
//                 else{
//                     for(int k=1;k<=idx;k++){
//                         if(mp[k].first == x){
//                             mp[k].second=freq[x];
//                             break;
//                         }
//                     }
//                 }
//                 bool stair=true;
//                 for(int k=1;k<=idx;k++){
//                     if(mp[k].second != k){
//                         stair=false;
//                         break;
//                     }
//                 }
//                 if(stair)
//                    res++;   
//             }            
//         }
//         return res;
        
//     }
// };

// class Solution {
// public:
//     int countStaircase(vector<int>& nums) {
//         int n=nums.size();
//         int res=0;
//         for(int i=0;i<n;i++){
//             unordered_map<int,pair<int,int>>mp;
//             unordered_map<int,int>freq;
//             int idx=0;
//             for(int j=i;j<n;j++){
//                 int x=nums[j];
//                 freq[x]++;
//                 if(freq[x] == 1){
//                      idx++;
//                     mp[idx]=make_pair(x,freq[x]);
//                 }
//                 else{
//                     for(int k=1;k<=idx;k++){
//                         if(mp[k].first == x){
//                             mp[k].second=freq[x];
//                             break;
//                         }
//                     }
//                 }
//                 bool stair=true;
//                 for(int k=1;k<=idx;k++){
//                     if(mp[k].second != k){
//                         stair=false;
//                         break;
//                     }
//                 }
//                 if(stair)
//                    res++;   
//             }            
//         }
//         return res;    
//     }
// };



class Solution {
public:
    int countStaircase(vector<int>& nums) {

        int n=nums.size();
        int res=0;

        for(int i=0;i<n;i++){
            unordered_map<int,int>freq;
            unordered_map<int,int>order;

            int satisfied=0;
            int distinct=0;

            for(int j=i;j<n;j++){
                int x=nums[j];

                int old_freq=freq[x];
                if(old_freq > 0  &&  old_freq == order[x]){
                    satisfied--;
                }

                if(old_freq == 0){
                    distinct++;
                    order[x]=distinct;
                }

                freq[x]++;

                if(freq[x] == order[x]){
                    satisfied++;
                }

                if(satisfied == distinct)
                   res++;

            }
        }
        return res;
        
    }
};
