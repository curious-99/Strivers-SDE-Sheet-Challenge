#include <bits/stdc++.h>
void setZeros(vector<vector<int>> &mat)
{
	int n = mat.size(),m=mat[0].size();
	vector<vector<int>>vis = mat;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(vis[i][j]==0){
				for(int a =0;a<n;a++) mat[a][j] = 0;
				for(int b =0;b<m;b++) mat[i][b] = 0;
			}
		}
	}        
}
