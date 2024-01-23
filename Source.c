#define CRT_SECURE_NO_WARNINGS_
#include <stdio.h>
#include "stack.h"
#define SLEN 100
#define ONE 1

//Dominic Szymanski November 22nd, 2022
/*This application will accept a string input. The program should then put each character of the string onto a stack, 
pop each character from the stack, and then display them. This causes the string to be displayed in reverse order.*/

int main(void)
{
	char input[SLEN]; //Variable declaration
	
	
	printf("Please Enter String:\n");	//getting string from user 
	gets_s(input, SLEN);
	
		Stack character_stack;
		Stack* stack_ptr = InitializeStack(&character_stack); //Initilizations 


		for (char* pchar = input; *pchar != '\0'; pchar++) //For loop setting pchar (pointer char) equal to the given input and making sure it can't be equal to an empty string.
			Push(pchar, stack_ptr); //Calling push function

		char pch[ONE];
		while(Pop(pch, stack_ptr)) //Call the pop function to display the reversed string in a while loop.
			printf("%c\n", *pch); // not sure if I should have it printing horizontally across the screan or vertically. 
		//I am going to leve it printing vertically as it was easier for me to understand the idea of the stack and the items being pushed and popped off.
		
		
	return 0;

}