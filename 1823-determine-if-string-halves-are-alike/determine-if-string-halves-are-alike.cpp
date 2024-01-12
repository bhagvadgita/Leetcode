class Solution {
public:
    bool halvesAreAlike(string s) {
        int mid=s.size()/2;
        int n=0;
        int m=0;
        for (int i=0; i<mid; i++){
            int temp=i+mid;
            if (s[i]=='a' || s[i]=='e' ||s[i]=='i'||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='I' ||s[i]=='E' ||s[i]=='O' ||s[i]=='U'){
                m++;
            }
            if (s[temp]=='a' || s[temp]=='e' ||s[temp]=='i'||s[temp]=='o' ||s[temp]=='u' ||s[temp]=='A' ||s[temp]=='I' ||s[temp]=='E' ||s[temp]=='O' ||s[temp]=='U') {
                n++;
            }
        }
        if (m==n){
            return true;
        }
        return false;
    }
};