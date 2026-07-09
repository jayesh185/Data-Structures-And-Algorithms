class Solution {
public:
//this is leetcode 3532 . Path existence queries in a graph 1 .

//here we used a simple concept that jahan par diff is greater than mx  . graph breaks there . and hence 
//it wont have any valid path with the elements from left to right of that break point
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int mx, vector<vector<int>>& q) {
        vector<int> comp( n); //to know if comp is connected or path exists or not 
        comp[0] = 0 ;
        int num = 0 ;
        for( int i = 1 ; i<n ; i++){
            if( nums[i] - nums[i-1] > mx) num++ ;
            comp[i] = num ;
        }
        vector<bool> ans; 
        for (auto &a : q) {
            int u = a[0];
            int v = a[1];

            ans.push_back(comp[u] == comp[v]);
        }

        return ans;
    }
};