link-https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1/#
vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        int left=0,right=c-1,top=0,bottom=r-1;
        vector<int> ans;
        while(left<=right and top <=bottom){
            for(int i=left;i<=right;i++){
                ans.push_back(matrix[top][i]);
            }
            for(int i=top+1;i<=bottom;i++){
                ans.push_back(matrix[i][right]);
            }
            if(top!=bottom)
            for(int i=right -1;i>=left;i--){
                ans.push_back(matrix[bottom][i]);
            }
            if(left!=right)
            for(int i=bottom-1;i>top;i--){
                ans.push_back(matrix[i][left]);
            }
            left++,right--,top++,bottom--;
        }
        return ans;
    }