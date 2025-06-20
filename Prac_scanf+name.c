#include <stdio.h>

int main() {

	int name[10];
	
	printf("이름을 입력하세요 : ");
	scanf_s("%s", &name, 10);

	printf("\n\n%s\n\n", name);

	return 0;

}