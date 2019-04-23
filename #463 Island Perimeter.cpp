class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int r = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(grid[i][j] == 1){
                    if(i != 0){
                        r += !bool(grid[i-1][j]);
                    }
                    else r +=1;
                    if(j != 0){
                        r += !bool(grid[i][j-1]);
                    }
                    else r +=1;
                    if(i != grid.size()-1){
                        r += !bool(grid[i+1][j]);
                    }
                    else r +=1;
                    if(j != grid[i].size()-1){
                        r += !bool(grid[i][j+1]);
                    }
                    else r +=1;
                }
            }
        }
        return r;
    }
};
