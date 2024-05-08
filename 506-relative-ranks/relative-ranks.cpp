class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> ans;
        vector<int> sorted_score = score;
        sort(sorted_score.begin(),sorted_score.end(),greater<int>());
        vector<string> rank = {"Gold Medal","Silver Medal","Bronze Medal"};
        unordered_map<int,string> ump;
        for (int i = 0; i<score.size(); i++){
            if (i<3){
                ump[sorted_score[i]]=rank[i];
            }else{
                ump[sorted_score[i]]=to_string(i+1);
            }
        }
        for (int s : score){
            ans.push_back(ump[s]);
        }
        return ans;
    }
};