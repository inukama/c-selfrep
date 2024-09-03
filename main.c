/* Inuka's selfrep */

const unsigned char data[] = {
 0x23, 0x69, 0x6e, 0x63, 0x6c, 0x75, 0x64, 0x65,
 0x20, 0x3c, 0x73, 0x74, 0x64, 0x69, 0x6f, 0x2e,
 0x68, 0x3e, 0x0a, 0x0a, 0x69, 0x6e, 0x74, 0x20,
 0x6d, 0x61, 0x69, 0x6e, 0x28, 0x76, 0x6f, 0x69,
 0x64, 0x29, 0x20, 0x7b, 0x0a, 0x09, 0x70, 0x72,
 0x69, 0x6e, 0x74, 0x66, 0x28, 0x22, 0x2f, 0x2a,
 0x20, 0x49, 0x6e, 0x75, 0x6b, 0x61, 0x27, 0x73,
 0x20, 0x73, 0x65, 0x6c, 0x66, 0x72, 0x65, 0x70,
 0x20, 0x2a, 0x2f, 0x5c, 0x6e, 0x5c, 0x6e, 0x22,
 0x29, 0x3b, 0x0a, 0x09, 0x70, 0x72, 0x69, 0x6e,
 0x74, 0x66, 0x28, 0x22, 0x63, 0x6f, 0x6e, 0x73,
 0x74, 0x20, 0x75, 0x6e, 0x73, 0x69, 0x67, 0x6e,
 0x65, 0x64, 0x20, 0x63, 0x68, 0x61, 0x72, 0x20,
 0x64, 0x61, 0x74, 0x61, 0x5b, 0x5d, 0x20, 0x3d,
 0x20, 0x7b, 0x22, 0x29, 0x3b, 0x0a, 0x0a, 0x09,
 0x66, 0x6f, 0x72, 0x20, 0x28, 0x69, 0x6e, 0x74,
 0x20, 0x69, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x20,
 0x69, 0x20, 0x3c, 0x20, 0x73, 0x69, 0x7a, 0x65,
 0x6f, 0x66, 0x28, 0x64, 0x61, 0x74, 0x61, 0x29,
 0x3b, 0x20, 0x69, 0x2b, 0x2b, 0x29, 0x20, 0x7b,
 0x0a, 0x09, 0x09, 0x69, 0x66, 0x20, 0x28, 0x69,
 0x25, 0x38, 0x20, 0x3d, 0x3d, 0x20, 0x30, 0x29,
 0x20, 0x7b, 0x0a, 0x09, 0x09, 0x09, 0x70, 0x72,
 0x69, 0x6e, 0x74, 0x66, 0x28, 0x22, 0x5c, 0x6e,
 0x22, 0x29, 0x3b, 0x0a, 0x09, 0x09, 0x7d, 0x09,
 0x0a, 0x09, 0x09, 0x70, 0x72, 0x69, 0x6e, 0x74,
 0x66, 0x28, 0x22, 0x20, 0x30, 0x78, 0x25, 0x30,
 0x32, 0x78, 0x2c, 0x22, 0x2c, 0x20, 0x64, 0x61,
 0x74, 0x61, 0x5b, 0x69, 0x5d, 0x29, 0x3b, 0x0a,
 0x09, 0x7d, 0x0a, 0x0a, 0x09, 0x70, 0x72, 0x69,
 0x6e, 0x74, 0x66, 0x28, 0x22, 0x5c, 0x6e, 0x7d,
 0x3b, 0x5c, 0x6e, 0x5c, 0x6e, 0x22, 0x29, 0x3b,
 0x0a, 0x0a, 0x09, 0x66, 0x6f, 0x72, 0x20, 0x28,
 0x69, 0x6e, 0x74, 0x20, 0x69, 0x20, 0x3d, 0x20,
 0x30, 0x3b, 0x20, 0x69, 0x20, 0x3c, 0x20, 0x73,
 0x69, 0x7a, 0x65, 0x6f, 0x66, 0x28, 0x64, 0x61,
 0x74, 0x61, 0x29, 0x3b, 0x20, 0x69, 0x2b, 0x2b,
 0x29, 0x20, 0x7b, 0x0a, 0x09, 0x09, 0x70, 0x75,
 0x74, 0x63, 0x68, 0x61, 0x72, 0x28, 0x64, 0x61,
 0x74, 0x61, 0x5b, 0x69, 0x5d, 0x29, 0x3b, 0x0a,
 0x09, 0x7d, 0x0a, 0x0a, 0x09, 0x72, 0x65, 0x74,
 0x75, 0x72, 0x6e, 0x20, 0x30, 0x3b, 0x0a, 0x7d,
 0x0a, 0x0a,
};

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

