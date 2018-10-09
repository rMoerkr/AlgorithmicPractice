#ifndef LINKLIST_H
#define LINKLIST_H

class Node {
public:
	Node *next;
	int data;
};
class LinkList {
public:
	LinkList();
	void Create(int i);
	void Travel();
	void del(int p);

private:
	Node *head;
};

#endif