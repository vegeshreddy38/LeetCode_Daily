class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {

        int n=order.size();
        unordered_set<int>st(friends.begin(),friends.end());

        vector<int>res;
        for(int x : order){
            if(st.find(x) != st.end()){
                res.push_back(x);
            }
        }
        return res;
        
    }
};