#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>



int main() {
	char* words[3] = { "CODE", "COED", "CDEO" };
	int words_len = 3;
	char* word = "CODE";
	int count = 0;

	for (int i = 0; i < 3; i++) {
		for(int j = 0; j<4; j++){
			printf("%c %c\n", words[i][j], word[j]);
			if (words[i][j] == word[j]) count++;
		}
		/*
		for (int j = 0; j < 4; j++) {
			if (strcmp(*(words[i])+j, word[j])) {
				count++;
			}
		}
		*/
	}
	printf("%d\n", count);

	printf("Hello");
}