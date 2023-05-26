#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	int noMhs;
	string name;
	Node* next;
	Node* prev;
};

class DoubleLinkedList {
private:
	Node* START = NULL;
public:

	void addNode();
	bool search(int rollNo, Node** pervious, Node** current);
	bool deleteNode(int rollNo);
	bool listEmpty();
	void traverse();
	void revtraverse();
	void hapus();
	void searchData();
};

void DoubleLinkedList::addNode() {
	int nim;
	string nm;
	cout << "\nEnter the roll number of student : ";
	cin >> nim;
	cout << "\nEnter the name of student : ";
	cin >> nm;

	Node* newNode = new Node(); //step1
	newNode->noMhs = nim;      //step 2
	newNode->name = nm;       //step 2


}