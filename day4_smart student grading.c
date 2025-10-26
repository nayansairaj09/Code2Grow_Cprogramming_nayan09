#include<stdio.h>
int main()
{
    float sub1,sub2,sub3,sub4,sub5,total_marks,total_percentage;
    char grade;
    int attendance;
    printf("enter marks for 5 subjects:\n");
    scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
    printf("enter attendance percentage:\n");
    scanf("%d",&attendance);
    total_marks=sub1+sub2+sub3+sub4+sub5;
    total_percentage=(total_marks/500)*100;
    printf("total_percentage:%.2f%%\n",total_percentage);

    if(attendance<75)
    {
        printf("fail for low attendence");
    }
    if(total_percentage>=90)
    {
        printf("grade: %c\n",grade='A+');
        printf("remarks=excellent");

    }
    else if(total_percentage>=80 && total_percentage<90)
    {
        printf("grade: %c\n",grade='A');
        printf("remarks=very good");
    }
    else if(total_percentage>=70 && total_percentage<80)
    {
        printf("%c",grade='B');
        printf("remarks=good");
    }
    else if(total_percentage>=60 && total_percentage<70)
    {
        printf("%c\n",grade='C');
        printf("remarks=average");
    }
    else if(total_percentage>=50 && total_percentage<60)  
    {
        printf("%c\n",grade='D');
        printf("remarks=pass");
    }
    else if(total_percentage>=45 && total_percentage<50)
    {
        printf("%c\n",grade='D');
        printf("remarks=pass ");
    }
    else
    {
        printf("%c\n",grade='F');
        printf("remarks=fail");
    }
    return 0;

}  

