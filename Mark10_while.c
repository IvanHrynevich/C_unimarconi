/*WHILE program*/
#include <stdio.h>

main(){
	int mark;
	int count=1;
	int countRangeOne=0;
	int countRangeTwo=0;
	int countRangeThree=0;
	int countRangeFour=0;
	
	while (count <= 10) { //while 
		printf("Input result mark %d\n", count);
		scanf("%d", &mark);
		if ((mark > 27) && (mark >=30)) countRangeOne++;
		else {
			if ((mark > 24) && (mark <= 27)) countRangeTwo++;
			else{
				if ((mark > 21) && (mark <= 24)) countRangeThree++;
				else{
					if ((mark >= 18) && (mark <= 21)) countRangeFour++;
				}
			}
		}
		count++;
	}
	printf("Marks more than 28: %d\n", countRangeOne);
	printf("Marks more than 25-27: %d\n", countRangeTwo);
	printf("Marks more than 22-24: %d\n", countRangeThree);
	printf("Marks more than 18-21: %d\n", countRangeFour);	
	
	system("PAUSE");//console don't close after that command
	return 0; /*The program completed successfully*/
}
