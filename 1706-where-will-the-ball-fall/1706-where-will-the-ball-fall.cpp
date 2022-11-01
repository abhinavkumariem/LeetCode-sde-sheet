class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        vector<int> ans;
        
        int n=grid.size(),m=grid[0].size();
        vector<int> temp(m,0);
        grid.push_back(temp);
        for(int i=0;i<=n;i++){
            grid[i].push_back(0);
            grid[i].insert(grid[i].begin(),0);
        }
        for(int k=1;k<=m;k++){
            int i=0,j=k;
            int flag=-1;
            while(i<=n & j<=m+1){
                
                if(grid[i][j]==1 & grid[i][j+1]==1){
                    i++;
                    flag=j;
                    j++;
                }
               else if(grid[i][j]==-1 & grid[i][j-1]==-1){
                    i++;
                   flag=j;
                    j--;
                }
                else if(i==n) {
                    ans.push_back(j-1);
                    break;}
               else {
                   ans.push_back(-1);
                   break;}
                
                
            }
        }
        return ans;
    }
};