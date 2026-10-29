class Solution {
public:
    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {

        int max1=*max_element(nums1.begin(),nums1.end());
        int max2=*max_element(nums2.begin(),nums2.end());

        vector<int>freq1(max1+1,0);
        vector<int>freq2(max2+1,0);

        for(int x : nums1){
            freq1[x]++;
        }
        for(int x : nums2){
            freq2[x]++;
        }

        long long res=0;

        for(int y=1;y<=max2;y++){
            if(freq2[y] == 0)
               continue;
            
            int divisor=y*k;

            for(long long x=divisor;x<=max1;x+=divisor){
                res+=1LL*freq1[x]*freq2[y];
            }
        }
        return res;



        
        
    }
};