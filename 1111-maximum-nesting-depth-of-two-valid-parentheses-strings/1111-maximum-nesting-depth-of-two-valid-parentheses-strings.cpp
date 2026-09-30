class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {

        int n=seq.length();

        vector<int>res;

        int open=0;

        for(char c : seq){

            if( c ==  '(' ){
                if(open == 0  ||  open%2 == 0){
                    res.push_back(0);
                }
                else{
                    res.push_back(1);
                }
                open++;
            }
            else{

                if(open%2 == 1){
                    res.push_back(0);
                }
                else{
                    res.push_back(1);
                }
                open--;

            }
        }

        return res;


        
    }
};