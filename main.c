#include "myMath.h"
#include <stdio.h>

int main(){
double x;
printf("please insert a real number:\n");
scanf("%lf",&x);
double first_1 = Exponent((int)x);
double first_2  = Power(x,3);
double first_ans = add(first_1,first_2);
first_ans = sub(first_ans, 2);
double second_1 = mul(x,3);
double second_2 = Power(x,2);
double second_ans = mul(second_2,2);
second_ans = add(second_1,second_ans);
double third_1 = Power(x,3);
third_1 = mul(third_1,4);
double third_2 = div(third_1,5);
double third_ans = mul(x,2);
third_ans = sub(third_2,third_ans);



printf("The value of f(x)= e^x+x^3-2 at the point %0.4lf is: %0.4lf\n",x,(float)first_ans);
printf("The value of f(x)= 3x+2x^2 at the point %0.4lf is: %0.4lf\n",x,(float)second_ans);
printf("The value of f(x)= (4x^3)/5-2x at the point %0.4lf is: %0.4lf\n",x,(float)third_ans);

return 0;
}

    





