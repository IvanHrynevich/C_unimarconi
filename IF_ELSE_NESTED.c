///*Nested IF/ELSE program*/
#include <stdio.h>

main(){
	int mark;
	int year;
	printf("Enter the mark from 1 to 100\n");
	scanf("%d", &mark);
	printf("Enter the year of ending univercity\n");
	scanf("%d", &year);
		if ((mark >= 60) && (year >= 1997)) {
		printf("Accepted!\n");
		if (mark >= 90) printf("Mark A\n");
		else {
			if (mark >= 80) printf("Mark B\n");
			else {
				if (mark >= 70) printf("Mark C\n");
				else printf("Mark D\n");
			}
		}
	}
	else {
		if ((mark < 60) && (year >= 1997)) printf("Failure!\n");
		else {
			if ((mark >= 36) && (year < 1997)) printf("Accepted!\n");
			else {
				if ((mark < 36) && (year < 1997)) printf("Failure!\n");
			}
		}
	}
	system("PAUSE");//console don't close after that command
	return 0; /*The program completed successfully*/
}
