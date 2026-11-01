class Solution {
public:
    long long minimumMaxValue(int n, int index, int value) {

        if(value == 1){
            return -1;
        }
        if(index==0){
            if(value%2 == 0)
                return (long long)value+(n-1)*2;                
            else{
                int d=-1;
                for(int i=2;i*i<=value;i++){
                    if(value%i == 0){
                        d=i;
                        break;
                    }
                }

                if(d !=-1){
                    long long r=value+d;
                    return r+(n-2)*2;
                }
                else{
                    long long  k=value*2;
                    return k+(n-2)*2;
                }
            }
        }

        int divisor=-1;

        for(int i=2;i*i<=value;i++){
            if(value%i == 0){
                divisor=i;
                break;
            }
        }

        if(divisor ==-1){
            return -1;
        }

        int x=value;
        int n1=n;
        int idx=index;

        x=x-divisor;
        idx--;

        if(x-idx*2 < 2){
            return -1;
        }

        long long res=0;

        long long y=value+divisor;

        if(index == n-1){
            res=value;
            return res;
        }
        idx=index+1;

        res=y+(n-idx-1)*2;

        return res;

    }
};