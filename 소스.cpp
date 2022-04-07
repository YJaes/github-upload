#include <stdio.h>
#include <stdlib.h>


int main() {
	FILE *a, *b;
	char name1[100], name2[100];
	char c;

	printf("복사할 파일 이름을 입력하세요 : ");
	scanf("%s",name1);


	if (a = fopen(name1, "r")) {
		printf("붙여넣기 할 파일 이름을 입력하세요 : ");
		scanf("%s", name2);
		if (b = fopen(name2, "r")) {
			printf("파일이 이미 존재합니다.\n");
		}
		else{
			b = fopen(name2, "w");
			c = fgetc(a);
			while (c != EOF) {
				fputc(c, b);
				c = fgetc(a);
			}
			fclose(a);
			fclose(b);
			printf("%s로 복사되었습니다.", name2);
		}
	}
	else {
		printf("%s파일이 없습니다",name1);
	}

	system("pause");
}
