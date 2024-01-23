#pragma once
#include <stdbool.h>
//Dominic Szymanski November 22nd, 2022
/*This application will accept a string input. The program should then put each character of the string onto a stack,
pop each character from the stack, and then display them. This causes the string to be displayed in reverse order.*/

//Defining types
typedef struct node			
{
	char item;
	struct node* previous;
}Node;

typedef Node * Stack;

//Initalizing a list.
Stack* InitializeStack(Stack* pstack);

bool Push(const char* pch, Stack* pstack); //Function  that will attempt to add the char to the stack pointed to by pstack.

bool Pop(char* pch, Stack* pstack); //Function to pop item from stack and placed into the location pointed to by pch.

void EmptyStack(Stack* pstack); //Function to free stack and memory.

