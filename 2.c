#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_LENGTH 256
#define THRESHHOLD_RED 12
#define THRERSHOLD_GREEN 13
#define THRESHHOLD_BLUE 14

int main() {
	int triangularSum = 0;
	for (int i = 1; i <= 100; i++) {
		triangularSum += i;
	}

	FILE *filePointer = fopen("input/2.txt", "r");
	char buffer[MAX_LENGTH];

	for (int gameIndex = 0; fgets(buffer, MAX_LENGTH, filePointer); gameIndex++) {
		char* ptr = strtok(buffer, " ");
		ptr = strtok(NULL, " ");
		ptr = strtok(NULL, " ");
		char token[512];
		while (ptr) {
			int number = atoi(ptr);
			ptr = strtok(NULL, " ");
			strcpy(token, ptr);
			ptr = strtok(NULL, " ");
			if (strstr(token, "red") && number > THRESHHOLD_RED) {
				triangularSum = triangularSum - (gameIndex + 1);
				break;
			}
			if (strstr(token, "green") && number > THRERSHOLD_GREEN) {
				triangularSum = triangularSum - (gameIndex + 1);
				break;
			}
			if (strstr(token, "blue") && number > THRESHHOLD_BLUE) {
				triangularSum = triangularSum - (gameIndex + 1);
				break;
			}
		}
	}

	fclose(filePointer);
	printf("%d", triangularSum);
	return 0;
}

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