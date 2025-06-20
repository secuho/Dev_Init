#include <stdio.h>

int main() {

	char name[1];
	
	printf("이름을 입력하세요 : ");
	scanf_s("%c", &name, 1);

	printf("\n\n%c\n\n", name[0]);

	return 0;

}