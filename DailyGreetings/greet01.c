#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[])
{
	time_t now;
	struct tm *clock;
	int hour;

	time(&now);
	clock = localtime(&now);
	hour = clock->tm_hour;

	printf("Good ");
	if( hour < 12 && hour > 5)
		printf("morning, B.");
	else if( hour < 17)
		printf("afternoon, B.");
	else if( hour > 16 )
		printf("evening, B.");
	else
		printf("it's so late...");

	if( argc>1 )
		printf(", %s", argv[1]);

	putchar('\n');

	return(0);
}

