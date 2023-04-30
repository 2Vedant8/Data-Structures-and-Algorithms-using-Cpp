#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

unordered_map<int, bool> rowcheck;
unordered_map<int, bool> upperleftdiagonalcheck;
unordered_map<int, bool> bottomleftdiagonalcheck;

void printsolution(vector<vector<char>> &board, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl
         << endl;
}

bool isSafe(int row, int col, vector<vector<char>> &board, int n)
{
    if (rowcheck[row] == true)
        return false;

    if (upperleftdiagonalcheck[n - 1 + col - row] == true)
        return false;

    if (bottomleftdiagonalcheck[col + row] == true)
        return false;

    return true;

    // check karna chahte h kya mai current cellpr queen rakh sakta hu??
    // int i = row;
    // int j = col;

    // // check row
    // while (j >= 0)
    // {
    //     if (board[i][j] == 'Q')
    //     {
    //         return false;
    //     }
    //     j--;
    // }

    // // check upper left diagonal
    // i = row;
    // j = col;
    // while (i >= 0 && j >= 0)
    // {
    //     if (board[i][j] == 'Q')
    //     {
    //         return false;
    //     }
    //     i--;
    //     j--;
    // }

    // // check  bottomleft diagonal
    // i = row;
    // j = col;
    // while (i < n && j >= 0)
    // {
    //     if (board[i][j] == 'Q')
    //     {
    //         return false;
    //     }
    //     i++;
    //     j--;
    // }
    // // kahi par bhi queen nahi mili iska matlabv safe position matlab return true
    // return true;
}

void solve(vector<vector<char>> &board, int col, int n)
{
    // base case
    if (col >= n)
    {
        printsolution(board, n);
        return;
    }

    // ek case solve karnaa haii
    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, board, n))
        {
            // rakh do
            board[row][col] = 'Q';
            rowcheck[row] = true;
            upperleftdiagonalcheck[n - 1 + col - row] = true;
            bottomleftdiagonalcheck[row + col] = true;

            // recursion
            solve(board, col + 1, n);
            // backtracking
            board[row][col] = '-';
            rowcheck[row] = false;
            upperleftdiagonalcheck[n - 1 + col - row] = false;
            bottomleftdiagonalcheck[row + col] = false;
        }
    }
}

int main()
{
    int n = 6;
    vector<vector<char>> board(n, vector<char>(n, '-'));
    int col = 0;
    solve(board, col, n);

    return 0;
}
