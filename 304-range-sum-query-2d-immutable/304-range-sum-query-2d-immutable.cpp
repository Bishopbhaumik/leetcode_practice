class NumMatrix {
public:
    vector<vector<int>> arr;
    NumMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        arr = matrix;
        
        //finding prefix sum (in row)
        for(int i=0; i<m; i++){
            for(int j=1; j<n; j++){
                arr[i][j] += arr[i][j-1];
            }
        }
        
        //finding prefix sum (in column)
        for(int i=1; i<m; i++){
            for(int j=0; j<n; j++){
                arr[i][j] += arr[i-1][j];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
       //use formula to find sum = total area - extra area
        int total = arr[row2][col2];
        int extra = (row1!=0 ? arr[row1-1][col2]: 0) + (col1!=0 ? arr[row2][col1-1]: 0) - ((row1!=0 && col1!=0) ?arr[row1-1][col1-1]: 0);
        
        return total - extra;
    }
};
/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */