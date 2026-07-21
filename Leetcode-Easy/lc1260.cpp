class Solution {
public:
//we simply flattened the grid and then shifted it by k indices and again back into gridd .
//we foound from observation that the gris  is just moving elements in circular manner
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size() ;
        int m = grid[0].size() ;
        k = k % (n*m) ;

        vector<int> temp ;
        for( int i = 0 ; i<n ; i++){
            for( int j = 0 ; j<m ; j++){
                temp.push_back(grid[i][j]) ;
            }
        }

        rotate( temp.rbegin() , temp.rbegin() +k , temp.rend()) ;

        int idx = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                grid[i][j] = temp[idx++];
            }
        }

        return grid;


    }
};