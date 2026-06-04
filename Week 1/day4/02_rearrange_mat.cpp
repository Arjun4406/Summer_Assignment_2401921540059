class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int  m= mat.size();
        int  n=  mat[0].size();
        if((m*n)!=(r*c)) return mat ;
        int row=0;
        int column=0;
        vector<vector<int>>new_mat(r,vector<int>(c));
        for(int i=0;i<r;i++){
            for( int j=0;j<c;j++){
                if(column==n){
                    row++;
                    column=0;

                }
                
                 new_mat[i][j]=mat[row][column]; 
                 column++;           
                
             }
        }
        return new_mat;
        
    }
};