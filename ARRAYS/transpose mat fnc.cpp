#include <stdio.h>
void transposeMatrix(int rows, int cols, int matrix[][10]) {
    int transposeMatrix[cols][rows];

    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            transposeMatrix[i][j] = matrix[j][i];
        }
    }
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d\t", transposeMatrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    int matrix[10][10];

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    
	}
	transposeMatrix( rows,  cols, matrix);
	}


