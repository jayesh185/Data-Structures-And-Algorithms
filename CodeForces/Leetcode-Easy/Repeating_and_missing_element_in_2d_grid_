class Solution {
public:
//this is the leetcode 2965. Find Missing and Repeated Values .
//simply used hashing here . 
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        set<int> s;
        int sum = 0;
        int first = INT_MIN;
        for(int j = 0; j<m ; j++){
            for(int i = 0 ; i<n ; i++){
                if(s.find(grid[i][j]) != s.end()){
                    first = grid[i][j];
                }else{
                    s.insert(grid[i][j]);
                }
                sum+= grid[i][j];
            }
        }
        int m= n*n;
        int second =  (m*(m+1))/2 - sum + first ;
        return {first,second};
        
    }
};