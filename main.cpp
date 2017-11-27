#include <iostream>
#include "Node.h"
#include "Student.h"

int main()
{
	Student* student = new Student();
	cout << "Student created at: " << student << endl;
	Node* node = new Node(student);
	cout << "Node created at: " << node << endl;
	node->setNext(NULL);
	cout << "The next node is: " << node->getNext() << endl;
	Student* second = new Student();
	cout << "Created second student at: " << second << endl;
	Node* head = new Node(second);
	cout << "Created a head node at: " << head << endl;
	head->setNext(node);
	cout << "Its next node is: " << head->getNext() << endl;
	second = node->getStudent();
	cout << "Now second student points to node's student: " << second << endl;
	delete node;
	delete head;
	cout << "Nodes deleted" << endl;
	return 0;
}
