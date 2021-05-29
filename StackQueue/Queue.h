#pragma once
#include "LinkList.h"
//Queue l� 1 c?u tr�c d? li?u m� d? li?u ?uo?c th�m ch?ng v�o nhau , d? li?u n�o n?p v�o ??u ti�n s? ???c l?y ??u ti�n.
//s? d?ng 2 bi?n ?? qu?n l� l� fornt and rear 
//
Node* front = NULL; Node* rear = NULL;
bool IsEmpty() 
{ return rear == NULL; }

// th�m 1 ph?n t? v�o ??u d? li?u
void EnQueue(int _data)
{
	// th�m ch?ng 1 ph?n t? v�o ??u d? li?u
	Node* newNode = new Node(_data);
	if (IsEmpty)
	{
		front = rear = newNode;
	}
	rear->next = newNode;
	rear = newNode;

}
//X�a ph?n t? n?m ph�a ??u c?a d? li?u 
void DeQueue()
{
	if (front == NULL)  // d? li?u r?ng 
	{
		rear = NULL;
		return;
	}

	front = front->next;
}