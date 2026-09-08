class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int arr[32]{0};
        for (int i=0; i<nums.size(); i++) { // O(n)
            for (int j=0; j<32; j++) {
                arr[j] += (nums[i] >> j) & 1;
            }
        }
        int ans = 0;
        for (int i=0; i<32; i++) {
            if (arr[i] > (nums.size())/2) {
                ans = ans | (1 << i);
            }
        }
        return ans;
    }
};