class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int i,j;
        int m = obstacleGrid.size();
        int n= obstacleGrid[0].size();
        long long int arr[m+1][n+1];
        for(i=0;i<=m;i++)
        {
            for(j=0;j<=n;j++)
            {
                if(i==0 || j==0)
                    arr[i][j]=0;
                else if(i==1 && j==1)
                {
                    if(obstacleGrid[i-1][j-1]==0)
                    arr[i][j]=1;
                    else
                        arr[i][j]=0;
                }
                else
                {
                    if(obstacleGrid[i-1][j-1]==1)
                        arr[i][j]=0;
                    else
                        arr[i][j]=arr[i-1][j]+arr[i][j-1];
                }
            }
        }
        return(arr[m][n]);
    }
};