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
	if (size > 0)
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