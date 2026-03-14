#include <stdio.h>

void vuln() {
	char brika[16] = {0};
	char chorba[256] = {0};

	printf("Brika : %p\n",brika);
	printf("Chorba: %p\n",chorba);

	printf("Koul el brika: ");
	fread(brika,32,1,stdin);

	printf("W Arj3 lil Chorba: ");
	fread(chorba,256,1,stdin);
	printf("aya Sa7a\n");
}

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stdin, NULL, _IONBF, 0);
	vuln();
	return 0;
}
