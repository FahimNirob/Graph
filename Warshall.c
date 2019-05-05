#include<stdio.h>
warshall();
int main(){
    int A[10][10];
    int P[10][10];
    int i,j,k;


    printf("Items of 4x4 Adjacency matrix : \n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("Adjacency matrix : \n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    // step 1
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(A[i][j] == 0){
                P[i][j] = 0;
            }
            else P[i][j] = 1;
        }
    }

    //step 2
    for(k=0;k<4;k++){
        for(i=0;i<4;i++){
            for(j=0;j<4;j++){
             P[i][j] = P[i][j] || (P[i][k] && P[k][j]);
            }
        }
    }

    printf("Path Matrix :\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",P[i][j]);
        }
        printf("\n");
    }



    return 0;

}
