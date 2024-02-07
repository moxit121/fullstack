/*C program to read and print employee's record using structure*/
 
#include <stdio.h>
#include<string.h>
 
/*structure declaration*/
struct employee{
    char name[30];
    char address[50];
    int num;
    int age;
    
};
 
int main()
{
    /*declare structure variable*/
    struct employee emp;
     
    /*read employee details*/
    printf("\nEnter details :\n");
    printf("Name : ");          gets(emp.name);
    printf("NUM : ");            scanf("%d",&emp.num);
    printf("AGE : ");            scanf("%d",&emp.age);
    printf("ADDRESS : ");        scanf("%s",&emp.address);
     
    /*print employee details*/
    printf("\nEntered detail :");
    printf("Name: %s"   ,emp.name);
    printf("\nNUM: %d"     ,emp.num);
    printf("\nAGE: %d"     ,emp.age);
    fflush(stdin);
    printf("\nAddress: %s\n",emp.address);
    return 0;
}