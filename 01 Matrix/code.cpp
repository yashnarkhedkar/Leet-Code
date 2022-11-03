class Solution {
public:
    bool isValid(int x, int y, int r, int c){
        return x >= 0 && y >= 0 && x < r && y < c;
    }
    vector<vector<int>> updateMatrix(vector<vector<int>> grid) {
  	    int n = grid.size(), m = grid[0].size();
	    vector<vector<bool>>visited(n, vector<bool>(m, 0));
	    queue<pair<pair<int,int>, int>>q;
	    for(int i=0; i<n; i++){
	        for(int j=0; j<m; j++){
	            if(grid[i][j] == 0){
	                q.push({{i,j},0});
	                visited[i][j] = 1;
	            }
	        }
	    }
	    vector<int>dx = {-1,0,1,0};
	    vector<int>dy = {0,1,0,-1};
	    while(!q.empty()){
	        int r = q.front().first.first;
	        int c = q.front().first.second;
	        int d = q.front().second;
	        q.pop();
	        grid[r][c] = d;
	        for(int i=0; i<4; i++){
	            int newr = r+dx[i], newc = c+dy[i];
	            if(isValid(newr,newc,n,m) && !visited[newr][newc] && grid[newr][newc] == 1){
	                q.push({{newr, newc}, d+1});
	                visited[newr][newc] = 1;
	            }
	        }
	    }
	    return grid;
    }
};
