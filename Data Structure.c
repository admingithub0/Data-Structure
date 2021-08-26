/*C program to read and print employee's record using structure*/
 
#include <stdio.h>
 
/*structure declaration*/
struct employee{
    char name[20];
    int age,num;
    float salary;
};
 
int main()
{
    /*declare structure variable*/
    struct employee emp;
     
    /*read employee details*/
    printf("\nEnter details of employee:\n");
    printf("Name ?:");          
	gets(emp.name);
    printf("Age ?:");            
	scanf("%d",&emp.age);
    printf("Phone number ?:");        
	scanf("%d",&emp.num);
	printf("Salary ?:");
	scanf("%f",&emp.salary);
     
    /*print employee details*/
    printf("\nEntered detail is:\n");
    printf("Name: %s\n",emp.name);
    printf("Age: %d\n",emp.age);
    printf("Phone Number: %d\n",emp.num);
    printf("Salary: %f\n",emp.salary);
    return 0;
}

