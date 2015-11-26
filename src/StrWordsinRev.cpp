/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>

void swapWord(char *input, int from, int till){
	while (from < till){
		input[from] = input[from] + input[till];
		input[till] = input[from] - input[till];
		input[from] = input[from] - input[till];
		from++;
		till--;
	}
}

void str_words_in_rev(char *input, int len){
	
	for (int from = 0, till = 0; till < len; till++){
		if (till == (len - 1) || input[till + 1] == ' '){
			swapWord(input, from, till);
			from = till+2;
		}
	}
	swapWord(input, 0, (len - 1));
}
