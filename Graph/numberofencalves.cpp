class Solution {
public:
    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,-1,1};
    void dfs(vector<vector<int>>&grid,int i,int j){
        grid[i][j]=0;  // Marking grid as visited

        // Traversing in all 4 directions and calling dfs at only those where condition satisfy
        for(int d=0;d<4;d++){
            int nx=i+dx[d];
            int ny=j+dy[d];
            if(nx>=0 && ny>=0 && nx<grid.size() && ny<grid[0].size() && grid[nx][ny]==1){
                dfs(grid,nx,ny);
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        //CALL DFS FROM BORDERS(if 1 is found) SO THAT ALL CONNECTED COMPONENT CAN BE MARKED AS VISITED
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 || j==0 || i==n-1 || j==m-1){
                    if(grid[i][j]==1) dfs(grid,i,j);
                }
            }
        }
        // AFTER MARKING ALL CONNECTED COMP FROM BORDERS TO 0, JUST COUNT NO. OF 1'S IN GRID
        int enclaves=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1) enclaves++;
            }
        }
        return enclaves;
    }
};