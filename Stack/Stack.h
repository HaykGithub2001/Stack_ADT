#pragma once
#include <iostream>
template <typename T>
class Stack 
{

public:
	Stack();
	void push(T data);
	void pop();
	void clear();
	T& top();
	int length() { return size; };
	bool empty() { return size == 0; }
	~Stack();
private:
	int size;
	template <typename T>
	class Node
	{
		public:
		Node(T data = NULL, Node<T>* pnext = nullptr) :data(data), pnext(pnext) {}
		Node<T>* pnext;
		T data;
	};
	Node<T>* head;

};