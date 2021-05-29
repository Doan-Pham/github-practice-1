#pragma once
#pragma once
#include "LinkList.h"

// stack là 1 c?u trúc d? li?u mà d? li?u ?uo?c thêm ch?ng vào nhau , d? li?u nào n?p vào sau cùng s? ???c l?y ??u tiên.
// s? d?ng 1 bi?n top ?? qu?n lı "stack" d? li?u
// c? b?n stack g?m push ( thêm vào phía trên d? li?u) , pop( l?y ?i d? li?u trên cùng ) , peek( l?y giá tr? trên cùng c?a d? li?u)

Node* top; // bi?n top ?? qu?n lı c?u trúc d? li?u
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
	newNode->next = top;  // thêm d? li?u m?i vào ??u danh sách
	top = newNode; // ph?n t? m?i thêm vào là ph?n t? trên cùng c?a d? li?u

}
void Pop()
{
	if (isEmpty)
	{
		// danh sách r?ng
		return;
	}
	else // xóa ph?n t? ??u
	{
		top = top->next; // xóa top
	}
}
int Peek()
{
	if (isEmpty())
	{
		// danh sách r?ng => top == null
		return;
	}
	else return top->data;
}