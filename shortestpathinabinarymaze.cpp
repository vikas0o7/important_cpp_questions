#include<bits/stdc++.h>
using namespace std;
# define f first
# define s second

const int CXY[4][2] = { {1,0}, {0,1}, {-1,0}, {0,-1} };

int main()
 {
	//code
	int T;
	cin >> T;
	while(T--) {
	    int m, n;
	    cin >> m >> n;
	    int arr[m][n];
	    for(int i = 0; i < m; i++) {
	        for(int j = 0; j < n; j++)
	            cin >> arr[i][j];
	    }
	    int x, y;
	    cin >> x >> y;
	    bool visited[m][n];
	    memset(visited, 0, sizeof(visited));
	    queue<pair<pair<int,int>,int>> Q;
	    if(!arr[0][0] || !arr[x][y]) {
	        cout << -1 << endl;
	        continue;
	    }
	    if(x == 0 && y == 0) {
	        cout << 0 << endl;
	        continue;
	    }
	    Q.push({{0,0},0});
	    visited[0][0] = true;
	    
	    bool done = false;
	    int dist = -1;
	    while(!Q.empty() && !done) {
	        auto p = Q.front();
	        Q.pop();
	        for(int k = 0; k < 4; k++) {
	            int newi = p.f.f + CXY[k][0];
	            int newj = p.f.s + CXY[k][1];
	            if(newi>=0 && newi<m && newj>=0 && newj<n && !visited[newi][newj] && arr[newi][newj]==1) {
	                visited[newi][newj] = true;
	                Q.push({{newi,newj}, p.s + 1});
	                if(newi == x && newj == y) {
	                    dist = p.s + 1;
	                    done = true;
	                    break;
	                }
	            }
	        }
	    }
	    
        cout << dist << endl;
	}
	return 0;
}