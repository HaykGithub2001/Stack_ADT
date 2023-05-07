#include "Stack.h"
template <typename T>
Stack<T>::Stack()
{
	size = 0;
	head = nullptr;
}
template <typename T>
void Stack<T>::push(T data)
{
	head = new Node<T>(data, head);
	size++;
}
template <typename T>
void Stack<T>::pop()
{
	if(size>0)
	{
	head = head->pnext;
	size--;
	}
	return;
}
template<typename T>
void Stack<T>::clear()
{
	while (head)
	{
		pop();
	}
	return;
}
template<typename T>
T& Stack<T>::top()
{
	return head->data;
}
template<typename T>
Stack<T>::~Stack()
{

	clear();
	std::cout << "called destructor" << std::endl;
}