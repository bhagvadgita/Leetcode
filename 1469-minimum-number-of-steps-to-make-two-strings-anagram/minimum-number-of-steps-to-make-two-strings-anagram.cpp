class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> ans1(26,0);
        vector<int> ans2(26,0);
        int sum=0;
        for (int i=0; i<s.size(); i++){
            int ch=s[i]-'a';
            ans1[ch]+=1;
        }
        for (int i=0; i<t.size(); i++){
            int ch=t[i]-'a';
            ans2[ch]+=1;
        }
        for (int i=0; i<ans1.size(); i++){
            if (ans2[i]<ans1[i]){
                sum+=ans1[i]-ans2[i];
            }
        }
        return sum;
    }
};