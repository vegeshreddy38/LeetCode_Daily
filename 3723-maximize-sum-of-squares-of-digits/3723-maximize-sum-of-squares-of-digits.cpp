class Solution {
public:
    string maxSumOfSquares(int num, int sum) {

        string res="";

        int a=1;
        if(sum%9 == 0){
            a=0;
        }
        if((sum/9)+a > num)
           return res;

        while(sum > 0){

            if(sum >= 9){
                res+=to_string(9);
                sum=sum-9;
            }
            else{
                res+=to_string(sum);
                sum=0;
            }
        }

        int filled=res.length();
        int k=num-filled;
        while(k > 0){
            res+='0';
            k--;
            
        }

        return res;
        
    }
};