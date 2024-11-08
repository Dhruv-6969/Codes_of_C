#include <stdio.h>
int main() {
   float bs_sal, dr_all, h_rent, gross_sal;
   printf("Enter Basic Salary: ");
   scanf("%f", &bs_sal);
   dr_all = 0.4 * bs_sal;
   h_rent = 0.2 * bs_sal;

   gross_sal = bs_sal + dr_all + h_rent;

   printf("Your Dearness Allowance is %f \n", dr_all);
   printf("Your House Rent is %f \n", h_rent);
   printf("Your Gross Salary is %f \n", gross_sal);

   return 0;
}