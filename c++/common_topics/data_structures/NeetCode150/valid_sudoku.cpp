#include <iostream>
#include <vector>

using namespace std;

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

bool isValidSudoku(vector<vector<char>>& board) {
int rows[9][9] = {0};
int column[9][9] = {0};
int boxes[9][9] = {0};

for(int i=0; i<9; i++)
{
    for(int j=0; j<9; j++)
    {
        if(board[i][j] == '.') continue;
        
        int num = board[i][j] - '1';
        int boxidx = (i/3)*3+(j/3);
        
        if(rows[i][num] || column[j][num] || boxes[boxidx][num])
        {
            return false;
        }
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