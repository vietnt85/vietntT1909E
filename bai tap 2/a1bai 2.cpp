#include <stdio.h>
int main()
{
      int s = 0;
	  int v = 0;
	  
	  while (v<=10)
	  {
	       s = s+v;
		   v = v+1;	
	  }
	  
	  printf ("s = %d\n", s);
	  
	  return 0;
}
