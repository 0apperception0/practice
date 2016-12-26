#include<stdio.h>
int main(){
  double number1=0.0;
  double number2=0.0;
  char operation=0;
  printf("\nEnter the calculation\n");
  scanf("%lf%c%lf",&number1,&operation,&number2);
  if(operation=='+'){
    printf("=%lf\n",number1+number2);
  }else if(operation=='-'){
    printf("=%lf\n",number1-number2);
  }else if(operation=='*'){
    printf("=%lf\n",number1*number2);
  }else if(operation=='/'){
      if(number2==0){
        printf("\n\n\aDivision by zero error!\n");
      }else{
        printf("=%lf\n",number1/number2);
      }
  }else if(operation=='%'){
       if((long)number2==0){
         printf("\n\n\aDivision by zero error!\n");
       }else{
         printf("+%ld\n",(long)number1%(long)number2);
       }
  }
  else{
    printf("\n\n\aDivision by zero error!\n");
  }
  return 0;
}