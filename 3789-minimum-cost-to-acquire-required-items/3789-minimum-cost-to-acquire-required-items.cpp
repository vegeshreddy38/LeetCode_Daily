class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {

        

        //greedy 
        long long res1;
        long long res2;
        if(need1 < need2){
            res1=1LL*need2*costBoth;

            res2=1LL*(need2-need1)*cost2;
            res2+=1LL*need1*costBoth;
        }
        else{
            res1=1LL*need1*costBoth;

            res2=1LL*(need1-need2)*cost1;
            res2+=1LL*need2*costBoth;
        }


        //normal 
        long long res3=1LL*need1*cost1+1LL*need2*cost2;

        return min(min(res1,res2),res3);
 
    }
};