link-https://practice.geeksforgeeks.org/problems/is-sudoku-valid4820/1/#
int isValid(vector<vector<int>> mat){
        vector<unordered_set<int>> row(9,unordered_set<int>());
        vector<unordered_set<int>> col(9,unordered_set<int>());
        vector<unordered_set<int>> box(9,unordered_set<int>());
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(mat[i][j]==0)
                continue;
                if(row[i].count(mat[i][j]))
                return false;
                if(col[j].count(mat[i][j]))
                return false;
                int box_ind=(i/3)*3+(j/3);
                if(box[box_ind].count(mat[i][j]))
                return false;
                row[i].insert(mat[i][j]);
                col[j].insert(mat[i][j]);
                box[box_ind].insert(mat[i][j]);
            }
        }
        return true;
    }