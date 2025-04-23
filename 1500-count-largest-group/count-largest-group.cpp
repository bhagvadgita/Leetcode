class Solution {
public:
    int countLargestGroup(int n) {
        vector<int> sizes(36,0);
        for (int i = 1; i<=n; i++){
            int temp = i;
            int sum = 0;
            while (temp>0){
                sum+= (temp%10);
                temp/=10;
            }
            sizes[sum-1]++;
        }
        int maxi = *max_element(sizes.begin(),sizes.end());
        int ans = 0;
        for (int i = 0; i<sizes.size(); i++) if (maxi == sizes[i]) ans++;
        return ans;
    }
};