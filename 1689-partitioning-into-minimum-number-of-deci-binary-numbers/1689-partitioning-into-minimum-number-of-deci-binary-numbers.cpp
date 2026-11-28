class Solution {
public:
    int minPartitions(string n) {
        int res=0;
        for(char c : n){
            int num=c-'0';
            res=max(res,num);
        }
        return res;
        
    }
};