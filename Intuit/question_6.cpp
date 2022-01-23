link-https://leetcode.com/problems/find-in-mountain-array/
int findInMountainArray(int target, MountainArray &mountainArr) {
        int n= mountainArr.length();
        int low=0,high=n-1,mid;
        int index=0;
        while(low<high){
            mid= low+(high-low)/2;
            if(mountainArr.get(mid)<mountainArr.get(mid+1))
               low=mid+1;
               else
               high=mid;
        }
               index=low;
               low=0,high=index;
               while(low<=high){
                   mid=low+(high-low)/2;
                   if(mountainArr.get(mid)<target)
                       low=mid+1;
                       else if(mountainArr.get(mid)==target)
                           return mid;
                       else
                           high=mid-1;
                   }
                   low=index+1,high=n-1;
                       while(low<=high){
                   mid=low+(high-low)/2;
                   if(mountainArr.get(mid)>target)
                       low=mid+1;
                       else if(mountainArr.get(mid)==target)
                           return mid;
                       else
                           high=mid-1;
                   }
                           return -1;
               }      
