class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size()==0) return 0;
        sort(nums.begin(), nums.end());
        int lastSmaller = INT_MIN;
        int n = nums.size();
        int c = 0;
        int longest = 1;
        for (int i = 0; i < n; i++){
            if (nums[i] - 1 == lastSmaller){
                c += 1;
                lastSmaller = nums[i];
            }
            else if (nums[i] != lastSmaller){
                c = 1;
                lastSmaller = nums[i];
            }
            longest = max(longest,c);
        }
        return longest;
    }
};
