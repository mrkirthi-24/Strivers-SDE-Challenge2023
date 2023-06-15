//T(O)= O(N*M) S(O)= O(1) 
//Brute Force Method

bool searchMatrix(vector<vector<int>>& mat, int target) {
    int n = mat.size();
    int m = mat[0].size();
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(target == mat[i][j]) return true;
        }
    }       
    return false;
}

////T(O)= O(log(N*M)) S(O)= O(1) 

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    // treat the matrix as an array, just taking care of indices
    if(matrix.empty() || matrix[0].empty())
    {
        return false;
    }
    int m = matrix.size(), n = matrix[0].size();
    int left = 0, right = m*n - 1;
    while(left <= right)
    {
        int mid = left + (right - left)/2;
        int e = matrix[mid/n][mid%n];
        if(target < e)
        {
            right = mid - 1;
        }
        else if(target > e)
        {
            left = mid + 1;
        }
        else
        {
            return true;
        }
    }
    return false;
}