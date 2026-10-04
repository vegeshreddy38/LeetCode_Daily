class Solution {
public:
    int minRotations(string s) {

        int res=0;

        int pointer=0;
        
        for(int i=0;i<10;i++){
            int num=s[i]-'0';

            int steps=abs(num-pointer);
            res+=min( steps,10-steps);
            pointer=num;
        }
        return res;
        
    }
};