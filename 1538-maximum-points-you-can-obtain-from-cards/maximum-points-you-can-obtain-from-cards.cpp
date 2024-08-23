class Solution {
public:
    int maxScore(vector<int>& cp, int k) {
        int i = 0;
        int j = cp.size()-k-1;
        int curr = 0;
        for (int l = j+1; l<cp.size(); l++){
            curr+= cp[l];
        }
        int ans = 0;
        while (j<cp.size()-1){
            ans = max(ans,curr);
            curr+= cp[i];
            i++;
            j++;
            curr-= cp[j];
        }
        ans = max(ans,curr);
        return ans;
    }
};