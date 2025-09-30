#include<stdio.h>
int main(){
float celsius, fahrenheit;
printf("Enter temperature in celsius: ");
scanf("%f",&celsius);
fahrenheit=(celsius*9.0/5.0)+32.0;
printf("In fahrenheit: %.1f/n/n",
fahrenheit);
printf("Enter temperature in fahrenheit: ");
scanf("%f", &fahrenheit);
celsius=(fahrenheit-32.0)*5.0/9.0;
printf("In celsius:%.1f/n", celsius);
return 0;
}
