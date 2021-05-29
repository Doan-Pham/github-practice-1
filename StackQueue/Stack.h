#pragma once
#pragma once
#include "LinkList.h"

// stack l� 1 c?u tr�c d? li?u m� d? li?u ?uo?c th�m ch?ng v�o nhau , d? li?u n�o n?p v�o sau c�ng s? ???c l?y ??u ti�n.
// s? d?ng 1 bi?n top ?? qu?n l� "stack" d? li?u
// c? b?n stack g?m push ( th�m v�o ph�a tr�n d? li?u) , pop( l?y ?i d? li?u tr�n c�ng ) , peek( l?y gi� tr? tr�n c�ng c?a d? li?u)

Node* top; // bi?n top ?? qu?n l� c?u tr�c d? li?u
bool isEmpty() 
{ return top == NULL; }

void Push(int _data)
{
	Node* newNode = new Node(_data);// t?o 1 d? li?u m?i
	if (isEmpty)
	{
		top = newNode;
		return;
	}
	newNode->next = top;  // th�m d? li?u m?i v�o ??u danh s�ch
	top = newNode; // ph?n t? m?i th�m v�o l� ph?n t? tr�n c�ng c?a d? li?u

}
void Pop()
{
	if (isEmpty)
	{
		// danh s�ch r?ng
		return;
	}
	else // x�a ph?n t? ??u
	{
		top = top->next; // x�a top
	}
}
int Peek()
{
	if (isEmpty())
	{
		// danh s�ch r?ng => top == null
		return;
	}
	else return top->data;
}