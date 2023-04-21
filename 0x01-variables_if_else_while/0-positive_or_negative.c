#include <stdlib.h>
#include <time.h>
/* more headers go there*/

/*here betty style doc*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n >0)
		return(0);
}
