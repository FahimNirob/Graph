// Warshall Algorithm
#include<stdio.h>
int main(){
    int A[10][10];
    int P[10][10];
    int i,j,k;
    int m,n;

    printf("Enter number of vertices of mXm matrix :\n ");
    scanf("%d %d",&m,&n);

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("Adjacency Matrix A:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    // step 1 : assigning
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(A[i][j]==0){
                P[i][j] = 0;
            }
            else P[i][j] = 1;
        }
    }
    // step 2: Formula
    for(k=0;k<m;k++){
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                P[i][j] = P[i][j] || (P[i][k] && P[k][j]);
            }
        }
    }
    printf("Path Matrix P :\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",P[i][j]);
        }
        printf("\n");
    }
    return 0;

}
