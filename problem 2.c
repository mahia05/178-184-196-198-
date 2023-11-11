#include<stdio.h>
#include<math.h>
int main()
{
   double d,theta1=65.0,m1=3,m2=2,lamda1=530,lamda2= 700,theta2,sintheta2,degree;
   double w=sin(theta1*M_PI/180);
   d=(m1*lamda1)/w;
   sintheta2=( m2*lamda2)/d;
   theta2=asin(sintheta2);
   degree=(180/M_PI)*theta2;
   printf("The angle for  red  light in degree: %.3lf\n",degree);
   return 0;
}





