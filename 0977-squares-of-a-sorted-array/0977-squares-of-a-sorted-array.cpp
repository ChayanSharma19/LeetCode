class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n= nums.size();

        if(n==0) return nums;

        int i=0; 
        int j=n-1;
        int k=n-1;
        vector<int> ans(n);

        while(i<j){
            if(abs(nums[i])>abs(nums[j])){
                ans[k]=nums[i]*nums[i];
                i++;
                k--;
            }
            else {
                ans[k]=nums[j]*nums[j];
                j--;
                k--;
            }

        }
        if(i==j) ans[0]=nums[i]*nums[i];

        return ans;
    }
};