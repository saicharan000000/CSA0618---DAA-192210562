#include <stdio.h>

long long binomialCoefficient(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    } else {
        return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
    }
}

void printPascalTriangle(int numRows) {
    for (int i = 0; i < numRows; i++) {
        
        for (int j = 0; j < numRows - i - 1; j++) {
            printf("   ");
        }

        for (int j = 0; j <= i; j++) {
            printf("%6lld", binomialCoefficient(i, j));
        }

        printf("\n");
    }
}

int main() {
    int numRows;

    
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &numRows);

   
    printPascalTriangle(numRows);

    return 0;
}
