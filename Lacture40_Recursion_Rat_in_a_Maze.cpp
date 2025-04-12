// Rat in a Maze Problem - GFG - 1
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool isSafe(int x, int y, int n, vector<vector<int>> &visited, vector<vector<int>> &m) {
        if ((x >= 0 && x < n) && (y >= 0 && y < n) &&
            visited[x][y] == 0 && m[x][y] == 1) {
            return true;
        }
        return false;
    }

    void solve(vector<vector<int>> &m, int n, vector<string> &ans,
               int x, int y, vector<vector<int>> &visited, string path) {
        // Base case
        if (x == n - 1 && y == n - 1) {
            ans.push_back(path);
            return;
        }

        visited[x][y] = 1;

        // Down
        int newx = x + 1;
        int newy = y;
        if (isSafe(newx, newy, n, visited, m)) {
            path.push_back('D');
            solve(m, n, ans, newx, newy, visited, path);
            path.pop_back();  // Backtrack
        }

        // Left
        newx = x;
        newy = y - 1;
        if (isSafe(newx, newy, n, visited, m)) {
            path.push_back('L');
            solve(m, n, ans, newx, newy, visited, path);
            path.pop_back();
        }

        // Right
        newx = x;
        newy = y + 1;
        if (isSafe(newx, newy, n, visited, m)) {
            path.push_back('R');
            solve(m, n, ans, newx, newy, visited, path);
            path.pop_back();
        }

        // Up
        newx = x - 1;
        newy = y;
        if (isSafe(newx, newy, n, visited, m)) {
            path.push_back('U');
            solve(m, n, ans, newx, newy, visited, path);
            path.pop_back();
        }

        visited[x][y] = 0; // Backtrack
    }

public:
    vector<string> findPath(vector<vector<int>> &mat) {
        vector<string> ans;
        int n = mat.size();

        if (mat[0][0] == 0) {
            return ans;  // No path if start is blocked
        }

        vector<vector<int>> visited(n, vector<int>(n, 0));

        string path = "";
        solve(mat, n, ans, 0, 0, visited, path);

        sort(ans.begin(), ans.end());
        return ans;
    }
};
int main() {
    Solution obj;
    vector<vector<int>> mat = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    vector<string> result = obj.findPath(mat);

    for (string path : result) {
        cout << path << " ";
    }

    return 0;
}
