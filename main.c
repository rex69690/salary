#include <stdio.h>
struct office
{
char name [30];
int id;
float salary;
}s[3];
int main()
{
  int i;
  for (i=0;i<3;i++)
  {printf("ENTER DETAILS OF EMPLOYEE: ");
   gets(s[i].name);
   scanf("%d %f",&s[i].id,&s[i].salary);
   getchar();
  }
  for(i=0;i<3;i++){
    printf("Details of employee: %s\n %d\n %f\n",s[i].name,s[i].id,s[i].salary);
  }
  return 0; //return value
}