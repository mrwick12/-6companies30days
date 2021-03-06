link-https://practice.geeksforgeeks.org/problems/length-of-largest-region-of-1s-1587115620/1/
 int count = 1;
   void dfs(int i, int j, vector<vector<int>> &grid){
       int n = grid.size();
       int m = grid[0].size();
       if(i < 0 || j < 0) return;
       if(i >= n || j >= m) return;
       if(grid[i][j] != 1) return;
       count++;
       
               grid[i][j]=0;
       
                dfs(i+1,j,grid);
                dfs(i,j+1,grid);
                dfs(i-1,j,grid);
                dfs(i,j-1,grid);
                dfs(i+1,j+1,grid);
                dfs(i+1,j-1,grid);
                dfs(i-1,j+1,grid);
                dfs(i-1,j-1,grid);
                
           

}
    int findMaxArea(vector<vector<int>>& grid) {
        int r = grid.size();
       int c = grid[0].size();
       int Max = 0;
       for(int i = 0; i < r ; ++i){
           for(int j = 0; j < c; ++j){
               count=0;
               if(grid[i][j] == 1){
                   dfs(i,j,grid);
                   Max = max(count, Max);
               }
           }
       }
       return Max;
   }