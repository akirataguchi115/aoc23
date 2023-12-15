#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256

int main() {
	int sum = 0;
	for (int i = 1; i < 100; i++) {
		sum += i;
	}

	FILE *fp = fopen("input/2.txt", "r");
	char buffer[MAX_LENGTH];

	for (int i = 0; fgets(buffer, MAX_LENGTH, fp); i++) {
		char *ptr = strtok(buffer, " ");
		char token[512];
		while (ptr) {
			strcpy(token, ptr);
			printf("'%s'\n", token);
			ptr = strtok(NULL, " ");
		}
	}
	fclose(fp);

	return 0;
}

// split line to tokens

// Ariel, listen to me
// OO languages?
// It's a mess
// Programming in C
// is better than anything they got over there.

// The syntax might seem much sweeter
// Where objects and subtypes play
// But frills like inheritance
// Will only get in the way
// Admire C's simple landscape
// Efficiently dangerous
// No templates or fancy pitfalls
// ...like Java and C++!

// Program in C
// Program in C
// Pointers, assembly,
// Manage your memory
// With malloc() and free()!
// Don't sink your app with runtime bloat
// Software in C will stay afloat
// Do what you want there
// Close to the hardware!
// Program in C

// memset()
// (cast)
// register
// void*
// #define
// strcpy()
// asm
// SEGFAULT