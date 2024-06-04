class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> ump;
        int len = 0;
        for (auto ch: s){
            if (ump.find(ch)!=ump.end()){
                ump.erase(ch);
                len+=2;
            }
            else{
                ump[ch]++;
            }
        }
        if (!ump.empty()) len++;
        return len;
    }
};