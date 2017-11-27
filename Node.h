#ifndef NODEH
#define NODEH

#include <iostream>
#include "Student.h"

using namespace std;

//define node class
class Node
{
	//publicly available methods
	public:
		Node(Student* newStudent); //Node constructor (pass in the student pointer when constructing)
		void setNext(Node* node); //Set the next node in the linked list
		Node* getNext(); //Return the next node in the linked list
		Student* getStudent(); //Return the student contained in this node
		~Node(); //Node deconstructor calls the contained student deconstructor (not recursive)
	
	//private variables, only accessible with getters and setters
	private:
		Node* next;
		Student* student;
};

#endif
