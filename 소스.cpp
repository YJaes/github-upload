#include <stdio.h>
#include <stdlib.h>


int main() {
	FILE *a, *b;
	char name1[100], name2[100];
	char c;

	printf("������ ���� �̸��� �Է��ϼ��� : ");
	scanf("%s",name1);


	if (a = fopen(name1, "r")) {
		printf("�ٿ��ֱ� �� ���� �̸��� �Է��ϼ��� : ");
		scanf("%s", name2);
		if (b = fopen(name2, "r")) {
			printf("������ �̹� �����մϴ�.\n");
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
			printf("%s�� ����Ǿ����ϴ�.", name2);
		}
	}
	else {
		printf("%s������ �����ϴ�",name1);
	}

	system("pause");
}
