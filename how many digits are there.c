#include <stdio.h>
#include <math.h>
int main(void) {
	int x,n, i = 1;
	printf("Enter a Number\n");
	scanf("%d", &n);
	while (i) {
		x = pow(10, i);
		if ((n%x) == n) {
			printf("%d\n", i);
			break;
		}
		i++;
	}
	system("pause");
	return 0;
}
