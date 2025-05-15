#include <stdio.h>

int main(void) {
int Per;
	printf("Enter Per 45 : ");
	scanf("%d",&Per);
	if(Per >= 40)
		printf("\nResult is pass");
	else
		printf("\nResult is fail");
	return 0;
}