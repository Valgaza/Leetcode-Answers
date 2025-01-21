// Problem: Valid Sudoku
// I tried using HashMaps for a long long time, not realising that every time I put a key value pair assigned to a key which
// I have already encountered I end up deleting the previous entry of that same key, which means that I lose data, on speaking
// with ChatGpt it hinted me towards using a 2D boolean array which stores the key value pair and does not have the problem of
// losing the last instance of that same key.

class Q36 {
    public boolean isValidSudoku(char[][] board) {
        boolean[][] rowUsed = new boolean[9][9];
        boolean[][] colUsed = new boolean[9][9];
        boolean[][] boxUsed = new boolean[9][9];

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char c = board[i][j];
                if (c == '.') {
                    continue;
                }
                int digit = c - '1';

                int boxIndex = (i / 3) * 3 + (j / 3);

                if (rowUsed[i][digit]) return false;
                if (colUsed[j][digit]) return false;
                if (boxUsed[boxIndex][digit]) return false;

                rowUsed[i][digit] = true;
                colUsed[j][digit] = true;
                boxUsed[boxIndex][digit] = true;
            }
        }
        return true;
    }
}

