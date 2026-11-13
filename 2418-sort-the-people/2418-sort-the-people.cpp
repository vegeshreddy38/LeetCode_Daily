class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n=heights.size();
        vector<pair<int,int>>sorted;
        for(int i=0;i<n;i++){
            sorted.push_back({heights[i],i});
        }

        sort(sorted.begin(),sorted.end(),greater<pair<int,int>>());
        vector<string>res;
        for(auto it : sorted){
            res.push_back(names[it.second]);
        }
        return res;
    }
};