#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        float a,b,c,d,e,f;
        scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
        double m,n,p;
        m = sqrt(pow(c-a,2)+pow(d-b,2));
        n = sqrt(pow(e-a,2)+pow(f-b,2));
        p = sqrt(pow(e-c,2)+pow(f-d,2));
        if(m+n>p && m+p>n && n+p>m)
            printf("%0.3f\n",m+n+p);
        else
            printf("INVALID\n");
    }
}