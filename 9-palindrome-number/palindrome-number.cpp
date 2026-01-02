class Solution {
public:
    bool isPalindrome(int x) {
        long long rev = 0;
        int orig = x;
        while (x>0){
            int t = x%10;
            rev = (rev*10) + t;
            x/=10;
        }
        return orig == rev;
    }
};