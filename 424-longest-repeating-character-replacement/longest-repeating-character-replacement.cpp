class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> um;
        int left = 0;
        int maxf = 0;
        int ans = 0;
        for (int right = 0; right<s.size(); right++){
            um[s[right]]++;
            maxf=max(maxf,um[s[right]]);
            if ((right-left+1)-maxf>k){
                um[s[left]]--;
                left++;
            }
            else{
                ans=max(ans,right-left+1);
            }
        }
        return ans;
    }
};