class Solution
{   
    public:
    void calc(vector<vector<int>> &newMat,vector<vector<int>> mat,int drow,int dcol,int n){
        int x = 0,y = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i != drow && j != dcol){
                    newMat[x][y++] = mat[i][j];
                }
                if(y == n-1){
                    x++;y = 0;
                }
            }
        }
    }
    int determinantOfMatrix(vector<vector<int> > mat, int n)
    {
        if(n == 1){
            return mat[0][0];
        }
        int ans = 0,sign = 1;
        vector<vector<int>> newMat(n-1,vector<int>(n-1,0));
        for(int i=0;i<n;i++){
                calc(newMat,mat,0,i,n);
                ans += (sign*mat[0][i]*determinantOfMatrix(newMat,n-1));
                sign = -sign;
        }
        return ans;
    }
};