link-https://leetcode.com/problems/number-of-boomerangs/
int numberOfBoomerangs(vector<vector<int>>& points) {
        int n=points.size();
        int count=0;
        for(int i=0;i<n;i++){
            unordered_map<int,int>ump;
            for(int j=0;j<n;j++){
                if(j==i)
                continue;
                int temp=pow(points[j][0]-points[i][0],2)+pow(points[j][1]-points[i][1],2);
                if(ump[temp]>0){
                    count+=ump[temp]<<1;
                }
                ump[temp]++;
            }
        }
        return count;
    }