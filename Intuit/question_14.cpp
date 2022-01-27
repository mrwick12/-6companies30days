link-https://leetcode.com/problems/as-far-from-land-as-possible/
int maxDistance(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1)
                    continue;
                grid[i][j]=201;//201 is maximum distance possible for a cell .
                if(i>0)
                    grid[i][j]=min(grid[i][j],grid[i-1][j]+1);
                if(j>0)
                    grid[i][j]=min(grid[i][j],grid[i][j-1]+1);
            }
        }
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                if(grid[i][j]==1)
                    continue;
                if(i<n-1)
                    grid[i][j]=min(grid[i][j],grid[i+1][j]+1);
                if(j<m-1)
                    grid[i][j]=min(grid[i][j],grid[i][j+1]+1);
                ans=max(ans,grid[i][j]);
            }
        }
        return ans == 201 ?-1: ans-1;
        
    }