#include<stdio.h>

// 1. Write a C program that accepts an employee's ID, total worked hours in a month and
// the amount received per hour. Print the ID and salary (with two decimal places) of the
// employee for a particular month.

int main()
{
    float salary, hrs_worked_pr_month;
    int emp_id;
    int amount_pr_hr = 2000;
    printf("Employee id: ");
    scanf("%d", &emp_id);
    printf("Hours worked in a month: ");
    scanf("%f", &hrs_worked_pr_month);
    salary = amount_pr_hr * hrs_worked_pr_month;
    printf("Employee id = %d", emp_id);
    printf("\nEmployee salary = %.2fRS", salary);
}

   