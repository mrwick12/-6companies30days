link-https://leetcode.com/problems/rotting-oranges/submissions/
int orangesRotting(vector<vector<int>>& grid) {
         if(grid.empty()) return 0; //this is base case.. if we don't have any orange to rotten then it will take 0 days
        int m=grid.size(),n=grid[0].size(),tot=0,cnt=0,days=0;
        queue<pair<int,int>> rotten;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]!=0)//this is helpful when we have to check that all the oranges are rotten or not in future 
                    tot++;
                if(grid[i][j]==2)//this is done to push all the rotten oranges to the queue
                    rotten.push({i,j});
                    
            }
        }
        int dx[4] = {0, 0, 1, -1};//this are the only directions in which our bfs will go.. so i used arrays for x and y coordinate
        int dy[4] = {1, -1, 0, 0};
        while(!rotten.empty()){
            int k = rotten.size();// at one day we can rot this many oranges
            cnt += k; 
            while(k--){
                int x = rotten.front().first, y = rotten.front().second;
                rotten.pop();
                for(int i = 0; i < 4; ++i){// by using this loop we may go in four possible directions..
                    int nx = x + dx[i], ny = y + dy[i];
                    //now we have check the conditions for bounds and if there is blank space or already rotten orange then we will simply ignore
                    if(nx < 0 || ny < 0 || nx >= m || ny >= n || grid[nx][ny] != 1) continue;
                    grid[nx][ny] = 2;//after that we will mark the orange as rotten and push it into our queue data structure
                    rotten.push({nx, ny});
                }
            }
            if(!rotten.empty()) days++;//this is used to check how many days are required to rotten all the oranges
        }
        
        return tot == cnt ? days : -1;//if the total elements leaving blank space is equal to the elements pushed inside the queue then we can say our all oranges are rottened and we will simply return days otherwise we will return -1..
    }