//cpp file to go with Node.h header

#include <iostream>
#include "Node.h"

using namespace std;

//Node constructor (pass in the student pointer when constructing it)
Node::Node(Student* newStudent)
{
	student = newStudent;
}

//Set the next node in the linked list
void Node::setNext(Node* node)
{
	next = node;
}

//Return the next node in the linked list
Node* Node::getNext()
{
	return next;
}

//Return the student contained in this node
Student* Node::getStudent()
{
	return student;
}

//Node deconstructor
Node::~Node()
{
	delete student;
}
