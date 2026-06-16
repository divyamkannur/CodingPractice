#include <iostream>
#include <vector>

using namespace std;


// Sample Sudoku board (9x9)
// '.' represents empty cells
vector<vector<char>> board = {
    {'5','3','.','.','7','.','.','.','.'},
    {'6','.','.','1','9','5','.','.','.'},
    {'.','9','8','.','.','.','.','6','.'},
    {'8','.','.','.','6','.','.','.','3'},
    {'4','.','.','8','.','3','.','.','1'},
    {'7','.','.','.','2','.','.','.','6'},
    {'.','6','.','.','.','.','2','8','.'},
    {'.','.','.','4','1','9','.','.','5'},
    {'.','.','.','.','8','.','.','7','9'}
};


/*
 * Function: isValidSudoku
 * ----------------------------------
 * Validates whether a given 9x9 Sudoku board is valid
 *
 * Rules:
 * - No duplicate digits in any row
 * - No duplicate digits in any column
 * - No duplicate digits in any 3x3 sub-box
 *
 * Note:
 * - Empty cells ('.') are ignored
 * - Board need not be completely filled
 */

bool isValidSudoku(vector<vector<char>>& board) {
// Tracking arrays: 
int rows[9][9] = {0};
int column[9][9] = {0};
int boxes[9][9] = {0};

// Traverse each cell of the 9x9 grid
for(int i=0; i<9; i++)
{
    for(int j=0; j<9; j++)
    {
        // Skip empty cells
        if(board[i][j] == '.') continue;
        

        // Convert char digit ('1'..'9') to index (0..8)
        // Example: '5' → 4
        int num = board[i][j] - '1';
        
        // Compute box index (0..8)
        // Boxes are numbered row-wise:
        // 0 1 2
        // 3 4 5
        // 6 7 8
        int boxidx = (i/3)*3+(j/3);
        

        // Check if digit already seen in:
        // - same row
        // - same column
        // - same 3x3 box
        if(rows[i][num] || column[j][num] || boxes[boxidx][num])
        {
            return false; // Duplicate found, board is invalid
        }

        // Mark digit as seen in current row, column, and box
        rows[i][num] = 1;
        column[j][num] = 1;
        boxes[boxidx][num]=1;
    }
}
return true;
}


int main()
{
    cout << isValidSudoku(board) << endl;
}