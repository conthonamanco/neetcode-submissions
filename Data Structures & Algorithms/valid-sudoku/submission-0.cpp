class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // check row
        for (int i = 0; i < 9; i++)
        {
            unordered_map<char, bool> check;
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] != '.')
                {
                    if (check[board[i][j]]) return false;
                    check[board[i][j]] = true;
                }
            }
        }

        // check column
        for (int j = 0; j < 9; j++)
        {
            unordered_map<char, bool> check;
            for (int i = 0; i < 9; i++)
            {
                if (board[i][j] != '.')
                {
                    if (check[board[i][j]]) return false;
                    check[board[i][j]] = true;
                }
            }
        }

        //check sub-boxes
        for (int i = 0; i < 9; i += 3)
            for (int j = 0; j < 9; j += 3)
            {
                unordered_map<char, bool> check;
                for (int k = i; k <= i + 2; k++)
                    for (int l = j; l <= j + 2; l++)
                    {
                        if (board[k][l] != '.')
                        {
                            if (check[board[k][l]]) return false;
                            check[board[k][l]] = true;
                        }
                    }
            }

        return true;
    }
};
