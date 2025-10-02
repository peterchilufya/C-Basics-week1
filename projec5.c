#include <stdio.h>
int main (){
double nu1, num2, result;
char op;
printf(" Enter first number: ");
scanf(" %If", &num1);
printf(" Enter second number: ");
scanf(" %If", &num2);
printf(" choose operation (+,-,*,/) : ");
scanf(" %c", &op);
switch (op){
case '+':
result = nu1 + num2;
print(" \nresult = %.2lf\n",
result);
break:
case '-':
result = num1 - num2;
printf(" \nresult = %.2lf\n",
result);
break:
case '*':
result = num1 * num2;
printf(" \nresult = %.2lf\n",
result);
break:
case '/':
if( num2 != 0) 
result = num1 / num2;
printf(" \nresult = %.2lf\n",
result);
}
else{
printf(" \n error: Division by Zero is not allowed. \n");
}
break:
default:
printf(" \n error : Invalid operation.\n")
}
return 0 ;
