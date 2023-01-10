#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(){ 
    int t;
    scanf("%d",&t);
    for(int k=0; k<t; k++){
        int m,n;
        scanf("%d%d",&m,&n);
        int a[m][n];
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++)
                scanf("%d",&a[i][j]);
        }
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                for(int c=i;c<m; c++){
                    for(int d=j;d<n;d++){
                        if(a[i][j]>a[c][d]){
                            int tmp = a[i][j];
                            a[i][j] = a[c][d];
                            a[c][d] = tmp;
                        }
                    }
                }
            }
        }
        printf("Test %d:\n",k+1);
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    }
}