#include <stdlib.h>
#include <time.h>
<<<<<<< HEAD
/* more headers goes there */
=======
/* more header goes there */
>>>>>>> 3d6478f5bcad9199fd45d708b1cda972758dd17d

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
<<<<<<< HEAD
	n=rand() - RAND_MAX / 2;
	
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);

	return (o);
=======
	n = rand() - RAND-MAX / 2;
	/* if (n > 0)
	 * printf("%i is positive\n", n);
	 * else if (n < 0)
	 * printf("%i is negative\n", n);
	 * else
	 * printf("%i is zero\n", n); */
	return (0)
>>>>>>> 3d6478f5bcad9199fd45d708b1cda972758dd17d
}
