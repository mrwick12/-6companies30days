//Question link-https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/#
int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
       long long product=1,ans=0,j=0;
       if(k<=1) 
       return 0;
       for(int i=0;i<n;i++){
           product*=a[i];
       
       while(product>=k){
           product/=a[j]; 
           j++;
       }
       ans+=i-j+1;
    }
    return ans;
    }