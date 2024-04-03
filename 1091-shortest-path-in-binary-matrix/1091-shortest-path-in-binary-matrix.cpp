class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();

    if (grid[0][0] == 1 or grid[n - 1][m - 1] == 1)
    {
        return -1;
    }

    vector<vector<int>> visited(n, vector<int>(m, 0));
    int rr[] = {-1, -1, 0, 1, 1, 1, 0, -1};
    int cc[] = {0, 1, 1, 1, 0, -1, -1, -1};
    queue<pair<pair<int, int>, int>> pq;
    pq.push({{0, 0}, 1});
    visited[0][0] = 1;

    while (!pq.empty())
    {
        int dis = pq.front().second;
        int row = pq.front().first.first;
        int col = pq.front().first.second;
        pq.pop();

        if (row == n - 1 and col == m - 1)
        {
            return dis;
        }

        for (int i = 0; i < 8; i++)
        {
            int r = row + rr[i];
            int c = col + cc[i];

            if (r >= 0 and r < n and c < m and c >= 0 and grid[r][c] == 0 and !visited[r][c])
            {
                pq.push({{r, c}, dis + 1});
                visited[r][c] = 1;
            }
        }
    }

    return -1;
}
};