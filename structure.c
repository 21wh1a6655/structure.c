#include <stdio.h>
typedef struct{
    char name[30];
    int id;
    double salary;
} Employee;
int main()
{
    int n=2;
    Employee employees[n];
    printf("Enter %d Employee Details \n \n",n);
    for(int i=0; i<n; i++){
        printf("Employee %d:- \n",i+1);
        //Name
        printf("Name: ");
        scanf("%[^\n]s",employees[i].name);
        //ID
        printf("Id: ");
        scanf("%d",&employees[i].id);
        //Salary
        printf("Salary: ");
        scanf("%lf",&employees[i].salary);
        //to consume extra '\n' input
        char ch = getchar();
        printf("\n");
    }
    printf("-------------- All Employees Details ---------------\n");
    for(int i=0; i<n; i++){
        printf("Name \t: ");
        printf("%s \n",employees[i].name);
 
        printf("Id \t: ");
        printf("%d \n",employees[i].id);
 
        printf("Salary \t: ");
        printf("%.2lf \n",employees[i].salary);
        printf("\n");
    }
    return 0;
}
