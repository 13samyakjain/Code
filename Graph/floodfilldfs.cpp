class Solution {
public:
    void dfs(int row, int column, int sr, int sc, int newcode, int source, vector<vector<int>>& image){
        if(sr<0 || sc<0 || sr>= row || sc>= column){
            return;
        }else if(image[sr][sc]!=source) return;
        
        image[sr][sc] = newcode;
        
        dfs(row,column,sr+1,sc,newcode,source,image);
        dfs(row,column,sr-1,sc,newcode,source,image);
        dfs(row,column,sr,sc+1,newcode,source,image);
        dfs(row,column,sr,sc-1,newcode,source,image);
        
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(newColor==image[sr][sc]) return image;
        
        int rows = image.size();
        int column = image[0].size();
        int source = image[sr][sc];
        
        dfs(rows,column,sr,sc,newColor,source,image);
        
        return image;
    }
};