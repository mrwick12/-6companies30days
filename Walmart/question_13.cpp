link-https://leetcode.com/problems/find-the-kth-largest-integer-in-the-array/
static bool cmp(string &a,string &b)
    {
        if(a.size()==b.size())
        {
            return a<b;
        }
        return a.size()<b.size();
    }
    string kthLargestNumber(vector<string>& nums, int k) 
    {
        sort(nums.begin(),nums.end(),cmp);
        int n=nums.size();
        return nums[n-k];
    }