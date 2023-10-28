int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
   int dp[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
                  if (mat[i][j] == -1) {
                    dp[i][j] = 0;
                  } else if (i == 0 && j == 0) {
                    dp[i][j] = 1;
                  } else {
                    int left = 0, up = 0;
                    if (j > 0)
                      left = dp[i][j - 1];
                    if (i > 0)
                      up = dp[i - 1][j];
                    dp[i][j] = (left + up)%(int)(1e9+7);
                  }
        }
	}
	return dp[n-1][m-1];
}
