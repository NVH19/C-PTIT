#include<stdio.h>
void swap(int *a, int *b){
    int tmp=*a;
    *a = *b;
    *b = tmp;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    int dem=1;
    for(int i=0; i<n-1;i++){
        int cnt=0;
        for(int j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
                cnt=1;
            }
        }
        if(cnt==0)
            break;
        printf("Buoc %d: ",dem);
        for(int i=0; i<n; i++)
            printf("%d ",a[i]);
        printf("\n");
        dem++;
    }
}