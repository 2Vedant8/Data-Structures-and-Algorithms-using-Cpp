#include <bits/stdc++.h>
using namespace std;

int dx[] = {1, 0, 0, -1};
int dy[] = {0, -1, 1, 0};
char direction[] = {'D', 'L', 'R', 'U'};

bool isSafe(int x, int y, int row, int col, vector<vector<int>> &arr, vector<vector<bool>> &visited)
{
    if (x >= 0 && x < row && y >= 0 && y < col && arr[x][y] == 1 && visited[x][y] == false)
    {
        return true;
    }
    return false;
}

void solvemaze(vector<vector<int>> &arr, int row, int col, int i, int j, vector<vector<bool>> &visited, vector<string> &path, string output)
{
    // base case
    if (i == row - 1 && j == col - 1)
    {
        // answer found
        path.push_back(output);
        return;
    }

    for (int k = 0; k < 4; k++)
    {
        int newx = i + dx[k];
        int newy = j + dy[k];
        char dir = direction[k];
        if (isSafe(newx, newy, row, col, arr, visited))
        {
            visited[newx][newy] = true;
            solvemaze(arr, row, col, newx, newy, visited, path, output + dir);
            // backtrack
            visited[newx][newy] = false;
        }
    }

    // // down -> i+1,j
    // if (isSafe(i + 1, j, row, col, arr, visited))
    // {
    //     visited[i + 1][j] = true;
    //     solvemaze(arr, row, col, i + 1, j, visited, path, output + 'D');
    //     // backtrack
    //     visited[i + 1][j] = false;
    // }

    // // left -> i,j-1
    // if (isSafe(i, j - 1, row, col, arr, visited))
    // {
    //     visited[i][j - 1] = true;
    //     solvemaze(arr, row, col, i, j - 1, visited, path, output + 'L');
    //     // backtrack
    //     visited[i][j - 1] = false;
    // }

    // // right ->i,j+1
    // if (isSafe(i, j + 1, row, col, arr, visited))
    // {
    //     visited[i][j + 1] = true;
    //     solvemaze(arr, row, col, i, j + 1, visited, path, output + 'R');
    //     // backtrack
    //     visited[i][j + 1] = false;
    // }

    // // up ->i-1,j
    // if (isSafe(i - 1, j, row, col, arr, visited))
    // {
    //     visited[i - 1][j] = true;
    //     solvemaze(arr, row, col, i - 1, j, visited, path, output + 'U');
    //     // backtrack
    //     visited[i - 1][j] = false;
    // }
}

int main()
{
    int count = 0;
    int row, col;
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> col;

    vector<vector<int>> maze(row, vector<int>(col, 0));
    cout << "Enter the maze (0 - blocked, 1 - open):" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> maze[i][j];
        }
    }

    vector<vector<bool>> visited(row, vector<bool>(col, false));
    visited[0][0] = true;

    vector<string> path;
    string output = "";

    solvemaze(maze, row, col, 0, 0, visited, path, output);

    // Print the paths
    if (path.empty())
    {
        cout << "No path exists!" << endl;
    }
    else
    {
        // Print the paths
        for (const string &p : path)
        {
            cout << p << endl;
            count++;
        }
        cout << count << endl;
    }

    return 0;
}