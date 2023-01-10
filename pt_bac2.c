#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if(a==0 && b==0 && c!=0)
        printf("NO");
    else if(a==0 && b!=0)
        printf("%.2f",-c/b);
    else{
        double d=b*b-4*a*c;
        double x1 = (-b+sqrt(d)) / (2*a), x2 =(-b-sqrt(d)) / (2*a);
        double x12 = -b/2*a;
        if(d<0)
            printf("NO");
        else if(d==0)
            printf("%.2f",x12);
        else
            printf("%.2f %.2f",x1,x2);
    }
}