#include<stdio.h>
#include<string.h>
int main(){
    int n, a[105], b[105], x, y;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d%d", &x, &y);
        a[i]=x; b[i]=y;
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                int tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
                int tmp2=b[j];
                b[j]=b[j+1];
                b[j+1]=tmp2;
            }
        }
    }
    int s=a[0]+b[0];
    for(int i=1; i<n; i++){
        if(a[i]>s){
            s=a[i]+b[i];
        }
        else{
            s+=b[i];
        }
    }
    printf("%d", s);
}