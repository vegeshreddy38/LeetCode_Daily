class Solution {
public:
    bool threeFibonacciSum(int n) {

        int a=0;
        int b=1;
        int c=a+b;
        
        while( n >= 2*c ){
            if(n == 2*c ){
                return true;
            }
            a=b;
            b=c;
            c=a+b;
        }
        return false;
        
    }
};