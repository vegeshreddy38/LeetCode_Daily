class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {

        int m = logs.size();
        int l=queries.size();
;

        auto lambda=[](vector<int>vec1,vector<int>vec2){
            return vec1[1]<vec2[1];
        };
        sort(logs.begin(),logs.end(),lambda);

        vector<pair<int,int>>q;
        for(int i=0;i<l;i++){
            q.push_back({queries[i],i});
        }
        sort(q.begin(),q.end());

        vector<int>res(l);
        unordered_map<int,int>mp;

        int i=0;
        int j=0;

        for(auto [time,idx] : q){
            int start=time-x;
            int end=time;

            while(j<m && logs[j][1]<=end){
                mp[logs[j][0]]++;
                j++;
            }

            while(i<m && logs[i][1] < start){
                mp[logs[i][0]]--;
                if(mp[logs[i][0]] == 0)
                    mp.erase(logs[i][0]);
                i++;
            }

            res[idx]=n-mp.size();
        }
        return res;        
    }
};