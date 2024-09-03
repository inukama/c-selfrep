#include <stdio.h>

int main(void) {
	printf("/* Inuka's selfrep */\n\n");
	printf("const unsigned char data[] = {");

	for (int i = 0; i < sizeof(data); i++) {
		if (i%8 == 0) {
			printf("\n");
		}	
		printf(" 0x%02x,", data[i]);
	}

	printf("\n};\n\n");

	for (int i = 0; i < sizeof(data); i++) {
		putchar(data[i]);
	}

	return 0;
}

