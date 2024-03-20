#include<stdio.h>
void MatrixProduct(int *x1, int *y1, int *x2, int *y2, int a1[][100], int a2[][100], int r[][100]);

int main(){
    int r1, c1, r2, c2, arr1[100][100], arr2[100][100], result[100][100];
    int *pr1=r1, *pc1=c1, *pr2=r2, *pc2=c2, *parr1=arr1, *parr2=arr2;
    printf("Enter the dimensions of the first matrix (rows columns): ");
    scanf("%d%d",r1, c1);
    for(int i=0;i<(*pr1);i++){
        for (int j=0; j<(*pc1); j++){
            printf("Enter a[%d][%d] of the matrix: ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the dimensions of the second matrix (rows columns): ");
    scanf("%d%d",r2, c2);

    for(int i=0;i<*pr2;i++){
        for (int j=0; j<*pc2; j++){
            printf("Enter a[%d][%d] of the matrix: ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    void MatrixProduct(int *r1, int *c1, int *r2, int *c2, int arr1[][100], int arr2[][100], int result[][100]);

    printf("Resulting array after matrix multiplication:\n");
    for (int i = 0; i < *pr1; i++) {
        for (int j = 0; j < *pc2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }


}

void MatrixProduct(int *x1, int *y1, int *x2, int *y2, int a1[][100], int a2[][100], int r[][100]){
    for (int i = 0; i < *x1; i++) {
        for (int j = 0; j < *y2; j++) {
            r[i][j] = 0;
            for (int k = 0; k < *y2; k++) {
                r[i][j] += a1[i][k] * a2[k][j];
            }
        }
    }
    
    return;
}