#include <stdlib.h>
#include "stack.h"
#include <stdio.h>
//Dominic Szymanski November 22nd, 2022
/*This application will accept a string input. The program should then put each character of the string onto a stack,
pop each character from the stack, and then display them. This causes the string to be displayed in reverse order.*/ 

Stack* InitializeStack(Stack* pstack)
{
	*pstack = NULL;
	return pstack;
}

bool Push(const char* pch, Stack* pstack)
{
	Node* pnode = (Node*)malloc(sizeof(Node)); //memory allocation
	if (pnode == NULL)
	{
		fprintf(stderr, "Stack is full. Could not add item.\n"); //if stack is Null return false;
		return false;
	}
	else
	{
		pnode->item = *pch;
		pnode->previous = *pstack; //adding char to the stack
		*pstack = pnode;
		return true; //retruning true if the above is false 
	}
}

bool Pop(char* pch, Stack* pstack)
{
	if (*pstack == NULL) //false if stack is empty
		return false;
	else
	{
		*pch = (*pstack)->item;
		Node* tmp = *pstack;
		*pstack = (*pstack)->previous; //popping items from stack and and placing them in location pointed to by pch
		free(tmp);
		return true;
	}
}

void EmptyStack(Stack* pstack)
{
	Node* tmp, * pnode = *pstack;
	while (pnode != NULL)
	{
		tmp = pnode->previous;
		free(pnode);             //Here we are emptying stack and freeing memory.
		pnode = tmp;
	}
}