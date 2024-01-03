class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int currcount=0;
        int prevcount=0;
        int total=0;
        for (int i=0; i<bank.size(); i++){
            currcount=calc(bank[i]);
            if (currcount==0){
                continue;
            }
            total+=prevcount*currcount;
            prevcount=currcount;
        }
        return total;
    }   
    int calc(string& str){
        int count=0;
        for (char ch: str){
            if (ch == '1'){
                count++;
            }
        }
        return count;
    } 
};