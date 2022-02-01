link-https://practice.geeksforgeeks.org/problems/number-of-unique-paths5339/1/
int NumberOfPath(int a, int b)
    {
        int dp[a][b];
        for(int i=0;i<a;i++)
        {
         for(int j=0;j<b;j++)
          {  if(i==0 || j==0)
               dp[i][j]=1;
            
             if(i>0 && j>0)
               dp[i][j]=dp[i-1][j]+dp[i][j-1];
          }
        }
       return dp[a-1][b-1];
    }