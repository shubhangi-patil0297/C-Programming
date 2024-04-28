
#include <stdio.h>

int main(void)
{
  
  char name[20]; 
  int age;
  float height;
 
  printf("enter your name \n ");
  scanf("%s",&name);
  printf("enter your age \n");
  scanf("%d",&age);
  printf("enter your height \n");
  scanf("%f",&height);
  

  
  printf("\n --------output---------- \n");
  printf("Name : %s\n",name);
  printf("Age : %d\n",age);
  printf("Height : %f\n",height);
  
}
