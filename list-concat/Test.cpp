// Test.cpp : Defines the entry point for the console application.
//
#include "LinkedList.h"
#include <iostream>

LinkedList<char> concatenate(LinkedList<char>& first, LinkedList<char>& second)
{
	LinkedList<char>* conList = new LinkedList<char>();
	char c;
	for (int i = 0; i < first.size(); i++)
	{
		c = first.get(i);
		conList->add(c);
	}

	for (int i = 0; i < second.size(); i++)
	{
		c = second.get(i);
		conList->add(c);
	}

	return *conList;
}

void printList(LinkedList<char> list)
{
	for (int i = 0; i < list.size(); i++)
	{
		std::cout << list.get(i);
	}
	std::cout << std::endl;
}

int main()
{
	char c = 'a';
	LinkedList<char> listOne;
	LinkedList<char> listTwo;
	for (int x = 0; x < 10; x++)
	{
		listOne.add(c++);
		listTwo.add(c++);
	}

	printList(listOne);
	printList(listTwo);
}
