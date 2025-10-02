#include <stdio.h>
int  main ()  {
double  num1, num2, result;
char  op;
printf(" Enter first number: ");
scanf(" %1f", &num1);
printf(" Enter second number:");
scanf(" %1f", &num2);
printf( " choose operation(+,-,*,/):");
scanf(" %c",  &op);
switch (op)  {
case '+':
result = num1 + num2;
printf(" \nResult = %.21f\n",
Result);
break;
case '-';
result = num1 - num2;
printf(" \nResult = %.21f\n ",
break;
case '*';
result = num1 * num2;
printf(" \nResult = %.21f\n ",
break;
case '/';
if(num2 != 0){
result = num1 / num2;
printf(" \nResult = %.21f\n",
result); }else{
printf(" \nError:Division by zero is not allowed.\n" ); }
break;
default:
printf(" \nError:Invalid operation.\n");
}
return 0;
}
