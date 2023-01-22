#include<stdio.h>
#define F(x) (1/(1+x*x))
void main()
{
    float l,u,h,k,sum=0;
    int n,m,i;
    printf("enter the value of lower limit: ");
    scanf("%f",&l);
    printf("\nenter the value of upper limit: ");
    scanf("%f",&u);
    printf("\nenter the value of subinterval: ");
    scanf("%d",&n);
    h=(u-l)/n;
    printf("\nsize of the subinterval:%f",h);
    if(n%6==0)
    {
       sum=sum+((3*h)/10)*(F(l)+5*(F(l+h))+F(l+(2*h))+6*(F(l+(3*h)))+F(l+(4*h))+5*(F(l+(5*h)))+F(l+(6*h)));
       printf("\nvalue=%f",sum);
    }
    else
    {
        printf("\nWEDDLE'S RULE NOT APPLICABLE");
    }
}
