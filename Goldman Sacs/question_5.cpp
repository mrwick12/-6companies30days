linnk-https://practice.geeksforgeeks.org/problems/ugly-numbers2254/1/#
	ull getNthUglyNo(int n) {
	    long long dp[n+1];
	    dp[1]=1;
	    long long p2=1;
	    long long p3=1;
	    long long p5=1;
	    for(int i=2;i<=n;i++){
	        long long f1=2*dp[p2];
	        long long f2=3*dp[p3];
	        long long f3=5*dp[p5];
	        long long min_value=min(f1,min(f2,f3));
	        dp[i]=min_value;
	        if(min_value==f1)
	        p2++;
	        if(min_value==f2)
	        p3++;
	        if(min_value==f3)
	        p5++;
	        
	    }
	    return dp[n];
	}