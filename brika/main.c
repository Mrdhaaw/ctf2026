//build: gcc -o main -fno-stack-protector main.c
#include <stdio.h> 
#include <stdbool.h> 

enum {
	malso9a=0x6d,
	adham=0x61,
	thon=0x74,
	kabar=0x6b,
	ijbn=0x69,
};
void win() {
	printf("flag\n");
}
void make_brika() {
	char brika[4] = {malso9a,adham,thon,kabar};
	char name[16];
	bool bl_jbn = false;

	printf("Brika mt3 chkoun? ");
	fgets(name,200,stdin);
	
	for (int i = 0;i<4;i++){
		if (brika[i] == kabar) {
			printf("mn7ibch kabar!\n");
			return;
		}
		//hethi version 2
		if (brika[i] == ijbn) {
			bl_jbn = true;
		}
	}
	if (bl_jbn) {
		win();
	} else {
		printf("n7ib jbn.\n");
	}
}

int main() {
	printf("Brika: ");
	printf(
		"malso9a = 0x6d\n"
		"adham   = 0x61\n"
		"thon    = 0x74\n"
		"kabar   = 0x6b\n"
		"ijbn    = 0x69\n"
	);
	make_brika();	
}
