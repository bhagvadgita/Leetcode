class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int count=0;
        string newcolors="";
        vector<int> newNeededTime;
        newcolors+=colors[0];
        newNeededTime.push_back(neededTime[0]);
        for (int i=1; i<colors.size(); i++){
            if (colors[i]!=newcolors.back()){
                newcolors+=colors[i];
                newNeededTime.push_back(neededTime[i]);
            }
            else if (newNeededTime.back()>neededTime[i]){
                count+=neededTime[i];
            }
            else {
                count+=newNeededTime.back();
                newNeededTime.back()=neededTime[i];
            }
        }
        return count;
    }
};