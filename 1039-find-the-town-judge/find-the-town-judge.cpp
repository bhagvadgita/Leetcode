class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> trusting(n+1,0);
        vector<int> trusted(n+1,0);
        for (int i = 0; i<trust.size(); i++){
            trusted[trust[i][1]]++;
            trusting[trust[i][0]]++;
        }
        for (int i =1; i<=n; i++){
            if (trusting[i]==0 && trusted[i]==n-1){
                return i;
            }
        }
        return -1;
    }
};