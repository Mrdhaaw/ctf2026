#include <stdio.h>
#include <stdlib.h>

void win() {
	puts("Sa7a Chribtk");
	system("/bin/sh");
}
void lose() {
	puts("Fetik el Ftour.");
	exit(69);	
}
void vuln() {
	size_t i;
	size_t* i_ptr = &i;
	char str[32];
	(void)i_ptr;

	puts("M3adch Bekri: ");
	for (i = 0;i<696969;i++) {
		printf("chn3ml? ");

		fread(str,1,sizeof(str)-1,stdin);

		printf(str);
		puts("");
		if (i==530) {
			lose();			
		}
	}
	
}

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stdin , NULL, _IONBF, 0);
	puts("embouteillage w m3adch bekri 3l moghrib: ");
	vuln();
	win();
	return 0;
}
