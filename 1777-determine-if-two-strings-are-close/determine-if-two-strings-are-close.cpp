class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> ans1(26,0);
        vector<int> ans2(26,0);
        for (int i=0; i<word1.size(); i++){
            int temp=word1[i]-'a';
            ans1[temp]++;
        }
        for (int i=0; i<word2.size(); i++){
            int temp=word2[i]-'a';
            ans2[temp]++;
        }
        for (int i = 0; i < 26; ++i) {
            bool temp1 = ans1[i] > 0;
            bool temp2 = ans2[i] > 0;

            if ((temp1 && !temp2) || (!temp1 && temp2)) {
                return false;
            }
        }
        sort(ans1.begin(),ans1.end());
        sort(ans2.begin(),ans2.end());
        for (int i=0; i<26; i++){
            if (ans1[i]!=ans2[i]){
                return false;
            }
        }
        return true;
    }
};