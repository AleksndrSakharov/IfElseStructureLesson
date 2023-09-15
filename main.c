#include <stdio.h>
#include <math.h>

void main(){
    double a,b,c, d = 0, x1, x2;
    scanf("%lf %lf %lf", &a,&b,&c);
        // printf("Hello world");
    d = pow(b,2) - a*c*4;
    if(d>0){
        x1 = (-b+sqrt(d))/(a*2);
        x2 = (-b-sqrt(d))/(a*2);
        printf("%lf %lf", x1,x2);  
    }
    if(d==0){
        x1 = (-b+sqrt(d))/(a*2);
        printf("%lf", x1); 
    }
    
}