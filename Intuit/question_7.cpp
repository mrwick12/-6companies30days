link-https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/
bool solve(int n,vector<int> &weights, int days){
        int req=1;
        long long sum=0;
        for(int i=0;i<weights.size();i++){
            if(sum+ weights[i]>n){
                sum=weights[i];
                req++;
            }
            else{
                sum+=weights[i];
            }
        }
        return req<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        long long sum=0;
        long long max=weights[0];
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
            if(weights[i]>max)
                max=weights[i];
        }
        int high=sum;
        int low=max;
        while(high-low>1){
            long long mid=low+(high-low)/2;
            if(solve(mid,weights,days))
                high=mid;
            else
                low=mid+1;
        }
        if(solve(low,weights,days))
            return low;
        return high;
    }