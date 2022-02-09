
int dRow[] = { -1, 0, 1, 0 };
int dCol[] = { 0, 1, 0, -1 };
 
// Function to check if a cell
// is be visited or not
// needs to be vector
bool isValid(vector<vector<int>>& vis, int row, int col, int ROW, int COL)
{
    // If cell lies out of bounds
    if (row < 0 || col < 0
        || row >= ROW || col >= COL)
        return false;
 
    // If cell is already visited
    if (vis[row][col])
        return false;
 
    // Otherwise
    return true;
}



while(!q.empty()){
            f = q.front(); 
            q.pop();

            int x = f.first;
            int y = f.second;

            fo(i,0,4){
                int adjx = x+ dRow[i];
                int adjy = y+ dCol[i];
                if(isValid(adjx, adjy, n, n, vis)){
                    next_q.push({adjx,adjy});
                    vis[adjx][adjy] = true;
                }
            }
        }
