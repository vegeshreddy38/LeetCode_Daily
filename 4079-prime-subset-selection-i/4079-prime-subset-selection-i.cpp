// class Solution {
// public:
//     bool isprime(int x){
//         if( x< 2)
//             return false;
//         for(int i=2;i*i<=x;i++){
//             if(x%i == 0){
//               return false;
//             }
//         }
//         return true;
//     }
//     vector<int> maxPrimes(int n, int s) {

//         vector<int>primes;
//         int num = 2;
//         int sum=0;
//         while(num <= n){
//             if(isprime(num)){
//                 sum+=num;
//                 if(sum > s){
//                     break;
//                 }
//                  primes.push_back(num);
//             }
//             num++;
//         }
//         return primes;
//     }
// };



class Solution {
public:
    vector<int> maxPrimes(int n, int s) {

        vector<int>primes(n+1,1);
        vector<int>res;
        int sum=0;
        for(int i=2;i*i<=n;i++){
            if(primes[i] == 1){
                for(int j=i*i;j<=n;j+=i){
                    primes[j]=0;
                }
            }
        }

        for(int i=2;i<=n;i++){
            if( primes[i] == 1 ){
                if(sum + i > s){
                    break;
                }
                sum+=i;
                res.push_back(i);
            }
        }
        return res;
    }
};