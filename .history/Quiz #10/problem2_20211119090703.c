#include <stdio.h>

int RaiseToPower(int baseVal, int exponentVal){
   int resultVal;

   if (exponentVal == 0) {
      resultVal = 1;
   }
   else {
      resultVal = baseVal * RaiseToPower(baseVal, exponentVal - 1);
   }

   return resultVal;
}

int main(void) {
   int userBase;
   int userExponent;
   
   printf("Enter number to power, ")
   scanf("%d to %d", &userBase, &userExponent);
   printf("%d to the power of %d = %d\n", userBase, userExponent, RaiseToPower(userBase, userExponent));

   return 0;
}