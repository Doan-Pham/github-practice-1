#pragma once
#include "LinkList.h"
//Queue là 1 c?u trúc d? li?u mà d? li?u ?uo?c thêm ch?ng vào nhau , d? li?u nào n?p vào ??u tiên s? ???c l?y ??u tiên.
//s? d?ng 2 bi?n ?? qu?n lý là fornt and rear 
//
Node* front = NULL; Node* rear = NULL;
bool IsEmpty() 
{ return rear == NULL; }

// thêm 1 ph?n t? vào ??u d? li?u
void EnQueue(int _data)
{
	// thêm ch?ng 1 ph?n t? vào ??u d? li?u
	Node* newNode = new Node(_data);
	if (IsEmpty)
	{
		front = rear = newNode;
	}
	rear->next = newNode;
	rear = newNode;

}
//Xóa ph?n t? n?m phía ??u c?a d? li?u 
void DeQueue()
{
	if (front == NULL)  // d? li?u r?ng 
	{
		rear = NULL;
		return;
	}

	front = front->next;
}