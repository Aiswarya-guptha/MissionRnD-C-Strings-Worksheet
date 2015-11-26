/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>


void number_to_str(float number, char *str,int afterdecimal){
	
	int iter=0,integer;
	if (number < 0){
		//checking for negative value
		str[0] = '-';
		iter = 1;
		number = number*-1;
	}
	integer = number;
	for (; integer != 0; iter++, integer = integer / 10){
		//converting into string
		str[iter] = integer % 10 + '0';
	}
	integer = iter;
	iter--;
	int iter1;
	if (str[0] == '-')	iter1 = 1;
	else	iter1 = 0;
	for (; iter1 < iter; iter1++, iter--){
		//reverse
		str[iter] = str[iter] + str[iter1];
		str[iter1] = str[iter] - str[iter1];
		str[iter] = str[iter] - str[iter1];
	}
	if (number != (int)number){
		//decimal part
		str[integer] = '.';
		for (iter = 1; iter <= afterdecimal; iter++){
			number = number * 10;
			str[iter + integer] = ((int)number) % 10 + '0';
		}
	}
}
