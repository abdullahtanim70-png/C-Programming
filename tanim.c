#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Employee
{
    int id;
    char name[50];
    char designation[50];
    float basicSalary;
    float allowance;
    float deduction;
};
struct Employee emp[100];
int n = 0;
FILE*fp;
void addEmployee();
void displayEmployees();
void searchEmployee();
void updateEmployee();
void calculateSalary();
void displaySalaryDetails();
void displayFile();
int main()
{
    int choice;
    while(1)
    {
        printf("\n====================================");
        printf("\n Employee Payroll Management System");
        printf("\n====================================");
        printf("\n1. Add Employee");
        printf("\n2. Display All Employees");
        printf("\n3. Search Employee by ID");
        printf("\n4. Update Employee Information");
        printf("\n5. Calculate Employee Salary");
        printf("\n6. Display Salary Details");
        printf("\n7. Display Employee File");
        printf("\n8. Exit");
        printf("\n\nEnter Your Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                addEmployee();
                break;
            case 2:
                displayEmployees();
                break;
            case 3:
                searchEmployee();
                break;
            case 4:
                updateEmployee();
                break;
            case 5:
                calculateSalary();
                break;
            case 6:
                displaySalaryDetails();
                break;
            case 7:
                displayFile();
                break;
            case 8:
                printf("Thank You!\n");
                return 0;
            default:
                printf("\nInvalid Choice!\n");
        }
    }
}
void addEmployee()
{
    printf("\nEnter Employee ID: ");
    scanf("%d",&emp[n].id);
    printf("Enter Employee Name: ");
    scanf(" %[^\n]",emp[n].name);
    printf("Enter Designation: ");
    scanf(" %[^\n]",emp[n].designation);
    printf("Enter Basic Salary: ");
    scanf("%f",&emp[n].basicSalary);
    printf("Enter Allowance: ");
    scanf("%f",&emp[n].allowance);
    printf("Enter Deduction: ");
    scanf("%f",&emp[n].deduction);
    fp = fopen("employee_data.txt","a");
if(fp==NULL)
{
    printf("File Error!\n");
    return;
}
fprintf(fp,"%d %s %s %.2f %.2f %.2f\n",
        emp[n].id,
        emp[n].name,
        emp[n].designation,
        emp[n].basicSalary,
        emp[n].allowance,
        emp[n].deduction);
fclose(fp);
    n++;
    printf("\nEmployee Added Successfully.\n");
}
void displayEmployees()
{
    int i;
    if(n==0)
    {
        printf("\nNo Employee Found!\n");
        return;
    }
    printf("\n===== Employee List =====\n");
    for(i=0;i<n;i++)
    {
        printf("\nEmployee %d\n",i+1);
        printf("Employee ID   : %d\n",emp[i].id);
        printf("Name          : %s\n",emp[i].name);
        printf("Designation   : %s\n",emp[i].designation);
        printf("Basic Salary  : %.2f\n",emp[i].basicSalary);
        printf("Allowance     : %.2f\n",emp[i].allowance);
        printf("Deduction     : %.2f\n",emp[i].deduction);
    }
}
void searchEmployee()
{
    int id,i,found=0;
    printf("\nEnter Employee ID: ");
    scanf("%d",&id);
    for(i=0;i<n;i++)
    {
        if(emp[i].id==id)
        {
            printf("\nEmployee Found\n");
            printf("Employee ID   : %d\n",emp[i].id);
            printf("Name          : %s\n",emp[i].name);
            printf("Designation   : %s\n",emp[i].designation);
            printf("Basic Salary  : %.2f\n",emp[i].basicSalary);
            printf("Allowance     : %.2f\n",emp[i].allowance);
            printf("Deduction     : %.2f\n",emp[i].deduction);
            found=1;
            break;
        }
    }
    if(found==0)
        printf("\nEmployee Not Found!\n");
}
void updateEmployee()
{
    int id,i,found=0;
    printf("\nEnter Employee ID to Update: ");
    scanf("%d",&id);
    for(i=0;i<n;i++)
    {
        if(emp[i].id==id)
        {
            printf("Enter New Name: ");
            scanf(" %[^\n]",emp[i].name);
            printf("Enter New Designation: ");
            scanf(" %[^\n]",emp[i].designation);
            printf("Enter New Basic Salary: ");
            scanf("%f",&emp[i].basicSalary);
            printf("Enter New Allowance: ");
            scanf("%f",&emp[i].allowance);
            printf("Enter New Deduction: ");
            scanf("%f",&emp[i].deduction);
            printf("\nEmployee Updated Successfully.\n");
            found=1;
            break;
        }
    }
    if(found==0)
        printf("\nEmployee Not Found!\n");
}
void calculateSalary()
{
    int id,i,found=0;
    float salary;
    printf("\nEnter Employee ID: ");
    scanf("%d",&id);
    for(i=0;i<n;i++)
    {
        if(emp[i].id==id)
        {
            salary = emp[i].basicSalary + emp[i].allowance - emp[i].deduction;
            printf("\nEmployee Name : %s",emp[i].name);
            printf("\nNet Salary    : %.2f\n",salary);
            found=1;
            break;
        }
    }
    if(found==0)
        printf("\nEmployee Not Found!\n");
}
void displaySalaryDetails()
{
    int i;
    float salary;
    if(n==0)
    {
        printf("\nNo Employee Found!\n");
        return;
    }
    printf("\n===== Salary Details =====\n");
    for(i=0;i<n;i++)
    {
        salary = emp[i].basicSalary + emp[i].allowance - emp[i].deduction;
        printf("\nEmployee ID   : %d\n",emp[i].id);
        printf("Name          : %s\n",emp[i].name);
        printf("Designation   : %s\n",emp[i].designation);
        printf("Basic Salary  : %.2f\n",emp[i].basicSalary);
        printf("Allowance     : %.2f\n",emp[i].allowance);
        printf("Deduction     : %.2f\n",emp[i].deduction);
        printf("Net Salary    : %.2f\n",salary);
    }
}
    void displayFile()
{
    int id;
    char name[50],designation[50];
    float basic,allowance,deduction;
    fp=fopen("employee_data.txt","r");
    if(fp==NULL)
    {
        printf("No File Found!\n");
        return;
    }
    printf("\n===== Employee Data From File =====\n");
    while(fscanf(fp,"%d %s %s %f %f %f",
          &id,
          name,
          designation,
          &basic,
          &allowance,
          &deduction)!=EOF)
    {
        printf("\nID : %d",id);
        printf("\nName : %s",name);
        printf("\nDesignation : %s",designation);
        printf("\nBasic Salary : %.2f",basic);
        printf("\nAllowance : %.2f",allowance);
        printf("\nDeduction : %.2f",deduction);
}
printf("\n--------------------------");
fclose(fp);
}