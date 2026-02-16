/*converting temperature from
 Celsius to farenheit*/
#include<stdio.h>
#include<math.h>
int main()
{
float cel,far;
printf("enter temperature in celcius: ");
scanf("%f",&cel);
//formula of conversion
far=(9/5)*(cel+32);
printf("temperature in farenheit is: %f\n",far);

    return 0;
}