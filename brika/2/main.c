//build: gcc -o main -fno-stack-protector main.c
#include <stdio.h> 
#include <stdbool.h> 
#include <stdlib.h> 

enum {
	malso9a=0x6d,
	adham=0x61,
	thon=0x74,
	kabar=0x6b,
	ijbn=0x69,
};
void win() {
	system("/bin/sh");
}
void make_brika() {
	char brika[4] = {malso9a,adham,thon,kabar};
	char name[16];

	printf("Brika mt3 chkoun? ");
	fflush(stdout);	
	
	fgets(name,33,stdin);
	if (
		brika[0] == 'm' &&
		brika[1] == 'a' &&
		brika[2] == 't' &&
		brika[3] == 'i'
	) {
		puts("mmm Mala Benna Ya Latif!\n");
		fflush(stdout);
		win();
	} else {
		printf("brika masta ;(\n");
	}

}

int main() {
	printf("Brika :) : \n");
	printf(
		"malso9a = 0x6d\n"
		"adham   = 0x61\n"
		"thon    = 0x74\n"
		"kabar   = 0x6b\n"
		"ijbn    = 0x69\n"
	);
	make_brika();	
}
