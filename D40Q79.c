/* Q79: Perform diagonal traversal of a matrix.


Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>
int main() {
    int rows, cols, i, j;

    printf("Enter the number of rows and columns in the matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal of the matrix is:\n");

    // Perform diagonal traversal
    for (int d = 0; d < rows + cols - 1; d++) {
        if (d % 2 == 0) {
            // Print elements from top to bottom
            for (i = 0; i <= d && i < rows; i++) {
                j = d - i;
                if (j < cols) {
                    printf("%d ", matrix[i][j]);
                }
            }
        } else {
            // Print elements from bottom to top
            for (j = 0; j <= d && j < cols; j++) {
                i = d - j;
                if (i < rows) {
                    printf("%d ", matrix[i][j]);
                }
            }
        }
    }

    printf("\n");
    return 0;
    
}