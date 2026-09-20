class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int len = INT_MAX;
        int i=0;
        int j=0;

        while(j<n){
            sum+=nums[j];

            while(sum>=target){
                if(sum>=target) len= min (len , (j-i+1));
                sum-=nums[i];
                i++;
            }
            j++;
        }
        if(len>n) return 0;
        return len ;

    }
};