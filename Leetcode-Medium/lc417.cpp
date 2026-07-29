class Solution {
public:
//this is the leetcode 417 Pacific Atlantic Water Flow .
//simply done by starting bfs from pacific and atlantic ocean .and maintaning seperated visited for each ocean .
//at  last for each ij where both are visited we put them in result 
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& h) {
        int n = h.size() ;
        int m = h[0].size() ;
        vector<vector<bool>> p( n, vector<bool>(m,false));
        vector<vector<bool>> a( n, vector<bool>(m,false)) ;

        //running bfs for pacific
        queue<pair<int ,int>> q ;
        
        for(int i = 0 ; i<m ; i++){
            p[0][i] = true;
            q.push({0,i});
        }

        for(int i = 0 ; i<n ; i++){
            if(!p[i][0]){
                p[i][0] = true;
                q.push({i,0});
            }
        }

        vector<int> dirx = {0,0,1,-1};
        vector<int> diry = {1,-1,0,0};

        while( !q.empty()){
            auto a = q.front() ; q.pop() ;
            int x = a.first ;
            int y = a.second ;

            for(int i = 0 ; i<4 ; i++){
                int nx = x + dirx[i] ;
                int ny = y + diry[i] ;
                if(nx >= 0 && nx < n && ny >= 0 && ny < m && !p[nx][ny] && h[nx][ny] >= h[x][y]){
                    p[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }

        q = queue<pair<int, int>>();
        for(int i = 0 ; i<m ; i++){
            a[n-1][i] = true;
            q.push({n-1,i});
        }

        for(int i = 0 ; i<n ; i++){
            if(!a[i][m-1]){
                a[i][m-1] = true;
                q.push({i,m-1});
            }
        }

        while( !q.empty()){
            auto b = q.front() ; q.pop() ;
            int x = b.first ;
            int y = b.second ;
    
            for(int i = 0 ; i<4 ; i++){
                int nx = x + dirx[i] ;
                int ny = y + diry[i] ;
                if(nx >= 0 && nx < n && ny >= 0 && ny < m && !a[nx][ny] && h[nx][ny] >= h[x][y]){
                    a[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }

        //now comparing both
        vector<vector<int>> res ;
        for( int i = 0 ; i<n ; i++){
            for( int j = 0 ; j<m ; j++){
                if( p[i][j] && a[i][j]) res.push_back({i,j}) ;
            }
        }

        return res; 


    }
};