link-https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1
string FirstNonRepeating(string A){
		 int arr[26]={0};
     queue<int> q;
     for(int i=0;i<A.length();i++){
         arr[A[i]-'a']++;
         if(arr[A[i]-'a']==1)
         q.push(A[i]);
         
         while(!q.empty() && arr[q.front()-'a']!=1)
         q.pop();
         
         if(q.empty())A[i]='#';
         else A[i]=q.front();
     }
     return A;
 }