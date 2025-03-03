class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        int i = 0,j=0;
        vector<vector<int>> nums3;
        while (i<nums1.size() && j<nums2.size()){
            if (nums1[i][0]<nums2[j][0]){
                nums3.push_back(nums1[i]);
                i++;
            }
            else if (nums1[i][0]>nums2[j][0]){
                nums3.push_back(nums2[j]);
                j++;
            }
            else{
                vector<int> temp;
                temp.push_back(nums1[i][0]);
                temp.push_back(nums1[i][1]+nums2[j][1]);
                nums3.push_back(temp);
                i++;
                j++;
            }
        }
        while (i<nums1.size()){
            nums3.push_back(nums1[i]);
            i++;
        }
        while (j<nums2.size()){
            nums3.push_back(nums2[j]);
            j++;
        }
        return nums3;
    }
};