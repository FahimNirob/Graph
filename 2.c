#include<stdio.h>
int main(){
    int A[10][10];
    int AA[10][10];
    int AAA[10][10];
    int AAAA[10][10];
    int B[10][10];
    int P[10][10];
    int i,j,k;
    int m,n;

    printf("Enter number of vertices of mXm matrix : \n");
    scanf("%d %d",&m,&n);

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("Adjacency matrix A: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    // AA
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            int sum = 0;
            for(k=0;k<m;k++){
                sum = sum + A[i][k]*A[k][j];
            }
            AA[i][j] = sum;
        }
    }
    printf("\nAA:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",AA[i][j]);
        }
        printf("\n");
    }

    //AAA
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            int sum = 0;
            for(k=0;k<m;k++){
                sum = sum + AA[i][k]*A[k][j];
            }
            AAA[i][j] = sum;
        }
    }
    printf("\nAAA:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",AAA[i][j]);
        }
        printf("\n");
    }

    //AAAA
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            int sum = 0;
            for(k=0;k<m;k++){
                sum = sum + AA[i][k]*AA[k][j];
            }
            AAAA[i][j] = sum;
        }
    }
    printf("\nAAAA:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",AAAA[i][j]);
        }
        printf("\n");
    }

    //B = A + AA + AAA + AAAA
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            B[i][j] = A[i][j] + AA[i][j] + AAA[i][j] + AAAA[i][j];
        }
    }
    printf("Matrix B : \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

    // Path Matrix P
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(B[i][j]>0){
                P[i][j] = 1;
            }
            else P[i][j] = B[i][j];
        }
    }
    printf("Path Matrix P :\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",P[i][j]);
        }
        printf("\n");
    }

    // Checking if strongly connected or not
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(P[i][j]==0){
                printf("Not strongly connected !\n");
                return 0;
            }
        }
    }
    printf("Strongly connected !\n");
    return 0;

}
