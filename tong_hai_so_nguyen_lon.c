#include<stdio.h>
#include<string.h>
#include<ctype.h>
int max(int a, int b){
    if(a>b)
        return a;
    return b;
}
void reverse(int a[], int n){
    int l=0, r = n-1;
    while(l<r){
        int tmp = a[l];
        a[l] = a[r];
        a[r] = tmp;
        l++;
        r--;
    }
}
int main(){
    int t;
    scanf("%d",&t);
    getchar();
    while(t--){
        char s1[505],s2[505];
        scanf("%s%s",s1,s2);
        int l1 = strlen(s1),l2 = strlen(s2);
        int d = max(l1,l2);
        int a[d],b[d],c[100];
        for(int i=0; i<l1; i++)
            a[i] = s1[i] - '0';
        for(int i=0; i<l2; i++)
            b[i] = s2[i] - '0';
        reverse(a,l1);
        reverse(b,l2);
        if(l1<l2){
            for(int i=l1; i<l2; i++)
                a[i] = 0;
        }
        else
            for(int i=l2; i<l1; i++)
                b[i] = 0;
        // for(int i=0; i<d; i++)
        //     printf("%d",a[i]);
        // printf("\n");
        // for(int i=0; i<d; i++)
        //     printf("%d",b[i]);
        // printf("\n");
        int res, nho=0,kq,idx=0;
        for(int i=0; i<d; i++){
            res = a[i]+b[i]+nho;
            c[i] = res % 10;
            nho = res / 10;
            idx++;
        }
        if(nho!=0){
            printf("1");
        }
        reverse(c,d);
        for(int i=0; i<d; i++)
            printf("%d",c[i]);
        printf("\n");
    }
}