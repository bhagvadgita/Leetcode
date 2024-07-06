class Solution {
public:
    int passThePillow(int n, int time) {
        int rem = time%(n-1);
        
        int full = time/(n-1);
        if (full%2==0) return 1+rem;
        else return n-rem;
    }
};