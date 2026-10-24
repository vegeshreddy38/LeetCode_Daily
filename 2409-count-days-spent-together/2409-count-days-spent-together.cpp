class Solution {
public:
    int cnt_days(string date){
        int month[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        int day=stoi(date.substr(3,2));
        int mon=stoi(date.substr(0,2));

        int total_days=0;
        for(int i=0;i<mon-1;i++){
            total_days+=month[i];
        }
        return total_days+day;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {

        int A_start=cnt_days(arriveAlice);
        int A_end=cnt_days(leaveAlice);

        int B_start=cnt_days(arriveBob);
        int B_end=cnt_days(leaveBob);

        int start=max(A_start,B_start);
        int end=min(A_end,B_end);

        if(start > end)
           return 0;
        return end-start+1;
    }        
    
};