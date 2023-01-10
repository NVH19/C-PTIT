#include<stdio.h>
#include<math.h>
void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int cp(int n){
    int b =sqrt(n);
    if(b*b==n)
        return 1;
    return 0;
}
int main(){
    int a,b,c,d,e,f,x;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    x = a*b +c*d +e*f;
    int y = sqrt(x);
    if(cp(x)==0)
        printf("NO");
    else{
        if(a>b)
            swap(&a,&b);
        if(c>d) 
            swap(&c,&d);
        if(e>f)
            swap(&e,&f);
        if(b==d && d==f && f==y)
            printf("YES");
        else{
            if(d==y){
                swap(&a,&c);
                swap(&b,&d);
            }
            if(f==y){
                swap(&a,&e);
                swap(&b,&f);
            }
            if(b==y){
                a = y-a;
                if((c==a && e==a)|| (d==a && e==a) ||(c==a && f==a)||(d==a && f==a))
                    printf("YES");
                else
                    printf("NO");
            }
            else
                printf("NO");
        }
    }

}