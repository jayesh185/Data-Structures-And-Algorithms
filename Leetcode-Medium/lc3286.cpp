class Solution {
public:
//this is the leetcode 3286 . Find a safe walk through a grid 
//solved using simple bfs and a priority queue to keep track of the best health at each cell
    bool findSafeWalk(vector<vector<int>>& grid, int health) {

        int n = grid.size() ;
        int m = grid[0].size() ;

        priority_queue<vector<int>> pq ;

        int starthealth = health - grid[0][0] ;
        if( starthealth <= 0) return false ;
        pq.push({starthealth , 0 , 0}) ;

        vector<vector<int>> best( n , vector<int>(m , -1)) ;
        best[0][0] = starthealth ;

        vector<int> dirx = {-1,1,0,0} ;
        vector<int> diry = {0,0,-1,1} ;

        while( !pq.empty()){

            auto a = pq.top() ;
            pq.pop() ;

            int currhealth = a[0] ;
            int i = a[1] ;
            int j = a[2] ;

            if( currhealth < best[i][j])
                continue ;

            for( int k = 0 ; k < 4 ; k++){
                int nx = i + dirx[k] ;
                int ny = j + diry[k] ;
                if( nx < 0 || ny < 0 || nx >= n || ny >= m) continue ;
                int newhealth = currhealth - grid[nx][ny] ;
                if( newhealth <= 0) continue ;
                if( newhealth > best[nx][ny]){
                    best[nx][ny] = newhealth ;
                    pq.push({newhealth ,nx ,ny}) ;
                }

            }

        }

        return best[n-1][m-1] > 0 ;

    }
};