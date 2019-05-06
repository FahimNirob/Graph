#include<stdio.h>
int main(){
    int A[10][10];
    int AA[10][10];
    int AAA[10][10];
    int AAAA[10][10];
    int B[10][10];
    int P[10][10];
    int i,j,k;
    int sum;
    int n,temp = 0;
    printf("Items of 4X4 Adjacent matrix : \n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d",&A[i][j]);
        }
    }

    printf("Adjacent Matrix A: \n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    printf("\n\n A.A :\n");
    //AA
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            sum = 0;
            for(k=0;k<4;k++){
            sum = sum + A[i][k] * A[k][j];
            }
        AA[i][j] = sum;
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",AA[i][j]);
        }
        printf("\n");
    }
    //AAA
    printf("\n\n A.A.A : \n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            sum = 0;
            for(k=0;k<4;k++){
            sum = sum + AA[i][k] * A[k][j];
            }
        AAA[i][j] = sum;
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",AAA[i][j]);
        }
        printf("\n");
    }

    //AAAA
    printf("\n\n A.A.A.A : \n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            sum = 0;
            for(k=0;k<4;k++){
            sum = sum + AA[i][k] * AA[k][j];
            }
        AAAA[i][j] = sum;
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",AAAA[i][j]);
        }
        printf("\n");
    }
    // B = A + A.A + A.A.A + A.A.A.A
    printf("B : \n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            B[i][j] = A[i][j] + AA[i][j] + AAA[i][j] + AAAA[i][j];
        }
    }

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    // Path matrix P form B

    printf("\nPath matrix : \n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(B[i][j] >0){
                P[i][j] = 1;
            }
        }
    }

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",P[i][j]);
        }
        printf("\n");
    }
    // connected or not
  /* for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        if(P[i][j] == 0){
            temp ;
            printf("Not connected :");
            break;
            return 0;
        }
        else printf("Connected\n");
        return 0;
    }
   }
   */






    return 0 ;
}
