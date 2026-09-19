class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //check for duplicate rows
        for(int row {0};row < board.size();row++)
        {
            for(int col1{0}; col1 < board[row].size();col1++)
            {
                for(int col2{col1 + 1};col2 < board[row].size();col2++)
                {
                    if(board[row][col1] != '.' && board[row][col1] == board[row][col2]) 
                    {
                        return false;
                    }
                }
                
            }
        }
        //checking duplicate columns
        for(int col{0};col < 9;col++)
        {
            for(int row1{0};row1 < 9;row1++)
            {
                for(int row2{row1 + 1};row2 < 9;row2++)
                {
                    if(board[row1][col] != '.' && board[row1][col] ==board[row2][col])
                    {
                        return false;
                    }
                }
            }
        }

        //check 3 X 3 duplicates
        for(int startRow{0};startRow < 9;startRow += 3)
        {
            for(int startCol{0};startCol < 9;startCol += 3)
            {
                for(int row1{startRow};row1 < startRow + 3;row1++)
                {
                    for(int col1{startCol};col1 < startCol + 3;col1++)
                    {
                        for(int row2{startRow};row2 < startRow + 3;row2++)
                        {
                            for(int col2{startCol};col2 < startCol + 3;col2++)
                            {
                                if((row1 != row2 || col1 != col2) &&
                                    board[row1][col1] != '.' && 
                                    board[row1][col1] == board[row2][col2])
                                    {
                                        return false;
                                    }
                            }
                        }
                        
                    }
                }
            }
        }
        return true;
    }
};
