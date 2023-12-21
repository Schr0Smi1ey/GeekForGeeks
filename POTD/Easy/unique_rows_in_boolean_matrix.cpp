class Solution
{
    public:
    // #define MAX 1000
    vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
    {
        set<vector<int>> st; // unique means we need to use set
        vector<vector<int>> ans;
        for(int i=0;i<row;i++)
        {
            vector<int> temp(col); // will make a temporary array with with row element
            for(int j=0;j<col;j++)
            {
                temp[j]=M[i][j];
            }
            if(st.insert(temp).second) // will check if temp can be inserted or not(maintaining uniqueness)
            {
                ans.push_back(temp); // if it can be...then will push the ans to ans 
            }
        }
        return ans;
    }
};