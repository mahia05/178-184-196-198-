#include<stdio.h>
#include<math.h>
int main()
{
    double d,theta,m,lamda1,lamda2;
    printf("Give the values of d(um),m,theta(degree) : \n");
    scanf("%lf %lf %lf",&d,&m,&theta);
    double w=sin(theta*M_PI/180);
    lamda1=d*w/m;
    lamda2=lamda1*1000;
    printf("a. The numeric value of wavelength %.3lf nm\n",lamda2);
    printf("\n");


    if(lamda2>=380.000&&lamda2<=450.000)
    {
        printf("b.The colour of the light is violet.\n");
    }

    else if(lamda2>=450.000&&lamda2<=485.000)
    {
        printf("b.The colour of the light is blue.\n");
    }

    else if(lamda2>=485.00&&lamda2<=500.000)
    {
        printf("b.The colour of the light is cyan.\n");
    }

    else if(lamda2>=500.000&&lamda2<=565.000)
    {
        printf("b.The colour of the light is green.\n");
    }

    else if(lamda2>=565.000&&lamda2<=590.000)
    {
        printf("b.The colour of the light is yellow.\n");
    }

    else if(lamda2>=590.000&&lamda2<=625.000)
    {
        printf("b.The colour of the light is orange.\n");
    }

    else if(lamda2>=625.000&&lamda2<=750.000)
    {
        printf("b.The colour of the light is red.\n");
    }
    else
    {
        printf("b.Not in visible range\n");
    }
    return 0;
}
