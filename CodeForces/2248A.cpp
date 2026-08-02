#include <bits/stdc++.h>
using namespace std;
//this is the codeforces 2248A. 
int main(){
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;  
        int p0 = s.find('0');
        s.erase(p0, 1);
        int p1 = s.find('1');
        s.erase(p1, 1);
        cout << s << endl;
    }
    
    return 0;
}