class Solution {
public:
    void deleteisland(vector<vector<char>>& grid, int i, int j){
        int m = grid.size() , n = grid[0].size();
        if(i < 0 || i == m || j < 0 || j == n || grid[i][j] == '0'){
            return;
        }
        grid[i][j] = '0';
        deleteisland(grid, i+1, j);
        deleteisland(grid, i-1, j);
        deleteisland(grid, i, j+1);
        deleteisland(grid, i, j-1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size(), n = m ? grid[0].size() : 0, islands = 0;
        for(int i = 0;i < m; i++){
            for(int j = 0;j < n; j++){
                if(grid[i][j]=='1'){
                    islands++;
                    deleteisland(grid, i, j);
                }
            }
        }
        return islands;
    }
};