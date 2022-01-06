link-https://leetcode.com/problems/longest-mountain-in-array/
int longestMountain(vector<int>& arr) {
        int n=arr.size();
        int max_length=0;
        for(int i=1;i<n-1;i++){
            if((arr[i]>arr[i-1])and (arr[i]>arr[i+1])){//peak of mountain
                int start=i;
                int end=i;
                while(start>0 and arr[start]>arr[start-1]){
                    start--;
                }
                while(end<n-1 and arr[end]>arr[end+1]){
                    end++;
                }
                max_length=max(max_length,end-start+1);
                i=end;
            }
        }
        return max_length;
    }