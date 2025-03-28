class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size()>s2.size())return false;
        if (s1.size()==s2.size()){
            sort(s1.begin(),s1.end());
            sort(s2.begin(),s2.end());
            return s1==s2;
        }
        vector<int> ch1(26,0);
        vector<int> ch2(26,0);
        for (char ch: s1) ch1[ch-'a']++;
        int left = 0;
        int right = s1.size()-1;
        for (int i = left; i<=right; i++){
            ch2[s2[i]-'a']++;
        }
        while (right < s2.size()-1){
            if (ch1 == ch2) return true;
            ch2[s2[left]-'a']--;
            left++;
            right++;
            ch2[s2[right]-'a']++;
        }
        return ch1==ch2;
    }
};