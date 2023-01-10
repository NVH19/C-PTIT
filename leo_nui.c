#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n][2];
    int s1=0, s2=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<2;j++)
            scanf("%d",&a[i][j]);
    }
    int min1=1e9,min2=1e9;
    for(int i=0; i<n; i++){
        s1 += a[i][0];
        s2 += a[i][1];
        if(a[i][0]<min1)
            min1 = a[i][0];
        if(a[i][1]<min2)
            min2 = a[i][1];
    }
    // printf("%d %d\n%d %d\n",s1,s2,min1,min2);
    if(s1>s2)
        printf("%d",s1+min2);
    else    
        printf("%d",s2+min1);
}