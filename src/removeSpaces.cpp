/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/

char removeSpaces(char *str) {
	if (str == ""||str==nullptr)
		return '\0';
	int pos, iter;
	for (pos = 0, iter = 0; str[iter] != '\0'; iter++){
		if (str[iter] == ' ')	continue;
		if (iter != pos){
			str[pos] = str[iter];
			pos++;
		}
		else pos++;
	}
	str[pos] = '\0';
}