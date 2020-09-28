/* Program that sums two integers */
#include <stdio.h>
main(){
	int integer1, integer2, sum;
	printf("Enter the first integer \n");
	scanf("%d", &integer1);
	printf("Insert the second integer \n");
	scanf("%d", &integer2);
	sum = integer1 + integer2;
	printf("Their sum is %d\n", sum);
	system("PAUSE");//console don't close after that command
	return 0;
}
