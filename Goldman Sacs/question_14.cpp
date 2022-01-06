link-https://leetcode.com/problems/minimum-size-subarray-sum/
int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int left=0;
        int answer=INT_MAX;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            while(sum>=target){
                answer=min(answer,i+1-left);
                sum-=nums[left++];
            }
        }
        return (answer !=INT_MAX)?answer:0;
    }