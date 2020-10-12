#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subtract (int a, int b);
int multiply (int a, int b);
int divide (int a, int b);

int (*p[4]) (int a, int b);

int main (void)//use the function array, never explicity call add/multiply/subtract/divide
{
	/* IMPLEMENT ME: Insert your algorithm here */
  int u_input;
  int x = 4;
  int y = 2;

  p[0] = add;
  p[1] = subtract;
  p[2] = multiply;
  p[3] = divide;
  
  printf("'a':%d | 'b':%d \n", x, y);
  printf("Specify the operation to perform(0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4+ : exit):");
  scanf("%d", &u_input);
  while(u_input < 4){
    printf("Output: %d \n", (*p[u_input])(x,y));
    printf("Specify the operation to perform(0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4+ : exit):");
    scanf("%d", &u_input);
  }
  printf("Bye bye! \n");
  exit(0);
	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }
int subtract ( int a, int b){ printf ("Subtracting 'a' and 'b'\n"); return a - b; }
int multiply (int a, int b){ printf ("Multiplying 'a' and 'b'\n"); return a * b; }
int divide (int a, int b){ printf ("Dividing 'a' and 'b'\n"); return a / b; }
