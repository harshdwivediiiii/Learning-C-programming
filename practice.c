#include<stdio.h>
int main(){
int marks;
printf("Enter a marks(out of 100):  ");
scanf("%d", &marks);
  if(marks <30)
  {
    printf("Grade: B\n");
  }
  else if(marks >=30 && marks <70)
  {
    printf("Grade: B\n");
  }
  else if(marks >=70 && marks <=100)
  {
    printf("Grade: A\n");
  }
  else
  {
    printf("Invalid marks entered.\n");
  }
return 0;
}