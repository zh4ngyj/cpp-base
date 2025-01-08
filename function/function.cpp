/*
Function declaration and function definition

return_type function_name( parameter list )
{
   body of the function
}

three primary ways to pass parameters to a function:
Pass by Value
1.A copy of the argument is passed to the function.
2.Changes made to the parameter inside the function do not affect the original argument.

Pass by Reference
1.The function receives a reference to the original argument.
2.Changes made to the parameter inside the function affect the original argument.

Pass by Pointer
1.The function receives a pointer to the original argument.
2.Changes made to the value pointed to by the pointer affect the original argument.
*/

# include <iostream>
using namespace std;

int max(int,int);

int main () {

   int a = 100;
   int b = 200;
   int ret;
 
   ret = max(a, b);
 
   cout << "Max value is : " << ret << endl;
 
   return 0;
}
 
int max(int num1, int num2) 
{

   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}