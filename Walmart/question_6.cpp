link-https://practice.geeksforgeeks.org/problems/power-of-numbers-1587115620/1/?company[]=Walmart&company[]=Walmart&page=1&query=company[]Walmartpage1company[]Walmart
long long power(int N,int R){
        if(R==0){
       return 1;
   }
   long long k=power(N,R/2)%1000000007;
   long long k2=(k*k)%1000000007;
   if(R&1){
       return ((N*k2)% 1000000007);
   }  
   return k2 % 1000000007;
   }
