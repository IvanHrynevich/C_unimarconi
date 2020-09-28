/*First IF program*/
#include <stdio.h>

main(){
	int num1, num2;
	printf("Enter the first number\n");
	scanf("%d", &num1);
	printf("Enter the second number\n");
	scanf("%d", &num2);
	if (num1 == num2) printf("%d equal %d\n", num1, num2);
	if (num1 != num2) printf("%d not equal %d\n", num1, num2);
	if (num1 < num2) printf("%d less than %d\n", num1, num2);
	if (num1 > num2) printf("%d greater than %d\n", num1, num2);
	if (num1 <= num2) printf("%d less than or equal to %d\n", num1, num2);
	if (num1 >= num2) printf("%d greater than or equal to %d\n", num1, num2);
	system("PAUSE");//console don't close after that command
	return 0; /*The program completed successfully*/
}
