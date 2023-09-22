#include <stdio.h>

int main(){
	int arr[10];
	int i;
	printf("Inset 10 numbers : \n");
	for (i = 0; i < 10; i++) {
		printf("So thu %d :", i + 1);
		scanf("%d", &arr[i]);
	
}
printf("\n");
printf("All of the reserve numbers:\n");
for(i = 9; i>= 0; i--) {
	printf("%d\n", arr[i]);
}
return 0;
}
