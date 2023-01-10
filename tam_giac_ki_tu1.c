#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        int cnt= i*(i+1)/2,idx=(i*(i-1)/2)+1;
        for(int j=1; j<=i; j++){
            if(i%2==0){
                printf("%c ",cnt + 'a'-1);
                cnt--;
            }
            else{
                printf("%c ",idx +'a'-1);
                idx++;
            }
        }
        printf("\n");
    }
}