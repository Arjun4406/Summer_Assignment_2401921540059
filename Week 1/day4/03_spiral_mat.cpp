class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        int st_row=0,st_col=0;
        int e_row=m-1,e_col=n-1;
        vector<int> ans;
        while(st_row<=e_row && st_col<=e_col){
            //top row
            for(int i= st_col;i<=e_col;i++){
                ans.push_back(matrix[st_row][i]);
            }
            //right col
            for(int i= st_row+1;i<=e_row;i++){
                ans.push_back(matrix[i][e_col]);
            }
            //bottom row
            for(int i= e_col-1;i>=st_col;i--){
                if(st_row==e_row)break;
                ans.push_back(matrix[e_row][i]);
            }
            //left col
            for(int i= e_row-1;i>=st_row+1;i--){
                if(st_col==e_col)break;
                ans.push_back(matrix[i][st_col]);
            } 
            st_row++,e_row--,st_col++,e_col--;
        }
        return ans;
    }
};