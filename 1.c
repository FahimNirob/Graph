#include<stdio.h>
int main(){
    int A[10][10];
    int AA[10][10];
    int AAA[10][10];
    int AAAA[10][10];
    int i,j,k;
    int m,n;

    printf("Enter Number of vertices of mXm matrix : \n");
    scanf("%d %d",&m,&n);

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("\nAdjacency matrix A:\n");
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

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(AA[i][j]>0){
                printf("There are %d path of length 2 from v%d to v%d\n",AA[i][j],i+1,j+1);
            }
        }
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

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(AAA[i][j]>0){
                printf("There are %d path of length 2 from v%d to v%d\n",AAA[i][j],i+1,j+1);
            }
        }
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

    printf("\nAAA:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",AAAA[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(AAAA[i][j]>0){
                printf("There are %d path of length 2 from v%d to v%d\n",AAAA[i][j],i+1,j+1);
            }
        }
    }


    return 0;
}
