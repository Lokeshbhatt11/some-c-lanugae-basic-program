#include <stdio.h>

int main() 
{
  int a, b,c,d , e,f;
  int add,sub,multiply,divide ;

  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b, );
  printf("Enter your choice 1 for add 2 for sub 3 multiply and 4 for divide: ");
  scanf("%d %d %d %d", &c, &d, &e, &f);
   
  if (c==1){
  add=a+b
    printf("%d",add);
  }

  else if (d==2)
  {
     sub=a-b
    printf("%d",sub);
  }
   
   else if (e==3)
  {
     multiply=a*b
    printf("%d",multiply);
  }
   
   else if (f==4)
  {
     divide=a/b
    printf("%d",divide);
  }
   
  return 0;
}