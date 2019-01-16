#include <iostream>
#include <vector>
using namespace std;

void createMultiplicationTable(int rows, int cols) {
    vector< vector<int> > grid(rows, vector<int>(cols, 0));

    int i = 1;
    int j = 2;

    for (int row = 0; row < grid.size(); row++) {
        for (int col = 0; col < grid[0].size(); col++) {
            if (row == 0) {
                grid[row][col] = i;
            }
            else if (col == 0) {
                grid[row][col] = j;
                j++;
            }
            else {
                grid[row][col] = grid[0][col] * grid[row][0];
            }
            cout << grid[row][col] << "\t" << flush;
            i++;
        }

        cout << endl;
    }
}

int main() {
    createMultiplicationTable(200, 200);

    return 0;
}