#include "Stack.h"
#include <iostream>
int main()
{
	Stack<int> a;
	a.push(5);
	a.push(7);
	a.pop();
	a.push(13654);
	std::cout << a.top() << std::endl;
	std::cout<<a.empty()<<std::endl;
	return 0;
}