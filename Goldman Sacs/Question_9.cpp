link-https://practice.geeksforgeeks.org/problems/number-following-a-pattern3126/1#
string printMinNumberForPattern(string str){
        string ans = "1";
       
       int n=str.length(), count=2;
       for(int i=0 ; i<n ; i++)
       {
           ans.push_back(count+48);
           count++;
       }
       
       int i=0, j=1, k=0;
       while(k<n)
       {
           if(str[k]=='I')
           {
               reverse(ans.begin()+i, ans.begin()+j);
               i=j;
           }
           j++;
           k++;
       }
       
       if(str.back()=='D')
           reverse(ans.begin()+i, ans.begin()+j);
           
       return ans;
    }