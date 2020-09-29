///*Fires k with minus*/
#include <stdio.h>

main(){
	int k, odd, count;
	printf("Input the char\n");
	scanf("%d", &k);
	count=1; odd=1;
	while (count <= k) { 
		printf("The odd number %d = %d\n", count, odd);
		odd=odd+2;
		count=count+1;
	}
 	system("PAUSE");//console don't close after that command
	return 0; /*The program completed successfully*/
}
