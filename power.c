#include "myMath.h"
#include <stdio.h>
#define EXP 2.71828;

double Power(double x, int y){
double ans = 1;
int temp = y;
if(y == 0){
return ans;
}
if(y == 1){
return x;
}
if(y < 0){
y=y*-1;
}
for(int i = 0; i<y;i++){
ans=ans*x;
}

if(temp<0){
ans = 1/ans;
}
return ans;
}

double Exponent(int x){
    double e = EXP;
    double answer = Power(e,x);
return answer;
}
