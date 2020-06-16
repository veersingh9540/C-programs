//if the marks obtained by students in five different subjects are input through the keyboard, fidn out the aggregate marks and percentage marks
//obtained by the student.Assume that the maximum marks that can be obtained by a student in each subject is 100 .
#include<stdio.h>

int main()
{
  int sub_1 , sub_2 ,sub_3,sub_4,sub_5;
    int sub_total=0, percentage=0;
 
  printf("HELLO students \n");
  
   printf("Enter the marks of subject 1 \n");
   scanf("%d",&sub_1);
    
    printf("Enter the marks of subject 2 \n");
  scanf("%d",&sub_2);
  
   printf("Enter the marks of subject 3 \n");
  scanf("%d",&sub_3);
  
   printf("Enter the marks of subject 4 \n");
  scanf("%d",&sub_4);
  
   printf("Enter the marks of subject 5 \n");
  scanf("%d",&sub_5);
  
  sub_total = sub_1 + sub_2 + sub_3 + sub_4 + sub_5 ;
  percentage = (sub_total/500)*100;
 
  printf("aggregate marks is  \n");
  printf("%d",&sub_total);
  
  printf("Percentage is  \n");
  printf("%d",&percentage);
 
    return 0; 
}
