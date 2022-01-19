link-https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1
int isSubsetSum(int N,int arr[], int sum){
    int i,j;
    bool dp[N+1][sum+1];
    for(i=0;i<=N;i++){
        for(j=0;j<=sum;j++){
            if(i==0)
            dp[i][j]=0;
            if(j==0)
            dp[i][j]=1;}}
        for(i=1;i<=N;i++){
            for(j=1;j<=sum;j++){
            if(arr[i-1]<=j)
            dp[i][j]=dp[i-1][j-arr[i-1]]||dp[i-1][j];
            else dp[i][j]=dp[i-1][j];
        }
    }
    return dp[N][sum];
    }
    int equalPartition(int N, int arr[]){
        int sum=0;
        for(int i=0;i<N;i++){
            sum+=arr[i];
        }
        if(sum%2!=0)
        return false;
        else if(sum%2==0)
        return isSubsetSum(N,arr,sum/2);
        
    }