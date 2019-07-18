#include<stdio.h>
#define MAX 10000
int minimum(int a,int b){
    if(a<b) return a;
    else return b;
}
int main(){
    int W[10][10];
    int Q0[10][10];
    int Q1[10][10];
    int i,j,k;
    int m,n;

    printf("Enter number of vertices of mXm weighted matrix:\n");
    scanf("%d %d",&m,&n);

    printf("Weights of matrix : \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&W[i][j]);
        }
    }
    printf("Weighted Matrix W : \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",W[i][j]);
        }
        printf("\n");
    }

    // step 1 : initializing
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(W[i][j]==0){
                Q0[i][j] = MAX;
            }
            else Q0[i][j] = W[i][j];
        }
    }
    printf("\n Q0 :\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",Q0[i][j]);
        }
        printf("\n");
    }

    //step : finding minimum

    for(k=0;k<m;k++){
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                Q0[i][j] = minimum(Q0[i][j], Q0[i][k] + Q0[k][j]);
            }
        }
    }
    printf("Shortest path matrix Q%d : \n",k);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",Q0[i][j]);
        }
        printf("\n");
    }
    return 0;

}
