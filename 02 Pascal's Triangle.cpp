#include <bits/stdc++.h>

// vector<vector<long long int>> printPascal(int n) 
// {
//   vector<vector<long long int>> ans(n);
//   for (int i = 0; i < n; i++) ans.push_back(vector<long long int>(i + 1, 1));

//   for (int i = 2; i < n; ++i){
//     for (int j = 1; j < i; ++j) {
//       ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
//     }
//   }
//   return ans;
// }

vector<int>generateRow(int row){
  long long ans  =1;
  vector<int>ansRow;
  ansRow.push_back(1);
  for(int col =1;col<row;col++){
    ans = ans * (row-col);
    ans = ans / col;
    ansRow.push_back(ans);
  }
  return ansRow;
}
vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<int>> res;
  for(int i =1;i<=n;i++){
    res.push_back(generateRow(i));
  }
  return res;
}
