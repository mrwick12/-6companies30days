question link-https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1/#
int *findTwoElement(int *arr, int n) {
        sort(arr,arr+n);
        int *res=new int[2];
        for(int i=1;i<=n;i++){
            if(arr[i-1]==arr[i]){
            res[0]=arr[i-1];
            break;
        }
        }
        int count=0;
        for(int i=1;i<=n;i++){
            if(res[0]==i){
                count++;
            }
            if(arr[i-1+count]!=i){
                res[1]=i;
                break;
            }
        }
        return res;
    }