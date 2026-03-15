
#include <stdio.h>
#include <math.h>

/*
 * Potrfolio submission
 * Name: Ben Warnock
 * ID: 201852300
 */

 int main( void ) {

    // define and initialise variables for the problem data 
   float salary = 36250;
   float NI = 0.08;
   float tax = 0.15;
   float NI_deduction, tax_deduction, salary_after_NI, final_salary;
    // calculate the deductions and final take-home salary
   
    NI_deduction = salary * NI;
   
   salary_after_NI = salary - NI_deduction;
   
   if (salary_after_NI > 12500) {
         tax_deduction = (salary_after_NI - 12500)* tax;
      }
      else {
         tax_deduction = 0;
      }

   final_salary = salary_after_NI - tax_deduction;

    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2f\n",salary);
    printf("NI contribution £%.2f\n",NI_deduction);
    printf("Tax contribution £%.2f\n",tax_deduction);
    printf("Take home salary £%.2f\n",final_salary);

    return 0;
 }