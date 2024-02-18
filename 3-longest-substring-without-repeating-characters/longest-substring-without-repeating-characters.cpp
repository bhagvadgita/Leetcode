class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> um;
        int left = 0;
        int output = 0;
        for (int right = 0; right<s.size(); right++){
            if (um.count(s[right])==0 || um[s[right]]<left){
                um[s[right]] = right;
                output = max(output,right-left+1);
            }
            else{
                left = um[s[right]]+1;
                um[s[right]]=right;
            }
        }
        return output;
    }
};