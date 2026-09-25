class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int sz = nums.size();  // Correct way to get the size of the vector
        k = k % sz;  // Ensure k is within bounds

        reverse(nums.begin(),nums.end());
        reverse(nums.begin(), nums.begin()+(k));
        reverse(nums.begin()+(k),nums.end());
    }
};
