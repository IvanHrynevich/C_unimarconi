///*Second IF/ELSE program*/
#include <stdio.h>

main(){
	int mark_cent;
	float mark_dec;
	printf("Enter the mark from 1 to 100\n");
	scanf("%d", &mark_cent);
	if (mark_cent >= 60) {
		mark_dec = mark_cent * 10.0 / 100.0;
		printf("Accepted!\n");
		printf("Mark (1-10) is %f\n", mark_dec);
		if (mark_cent >= 90) printf("Mark A\n");
		else {
			if (mark_cent >= 80) printf("Mark B\n");
			else {
				if (mark_cent >= 70) printf("Mark C\n");
				else printf("Mark D\n");
			}
		}
	}
	else printf("Failure!\n");
	system("PAUSE");//console don't close after that command
	return 0; /*The program completed successfully*/
}
