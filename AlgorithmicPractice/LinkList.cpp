//¡¥±Ì¡∑œ∞
#include <iostream>

#include"LinkList.h"
using namespace std;
LinkList::LinkList() {
	head = new Node;
	head->data = 0;
	head->next = NULL;
}
void LinkList::del(int i) {
	cout << "del" << endl;
}
void LinkList::Travel() {
	Node *p = head->next;
	while (p != NULL)
	{
		cout << p->data << " ";
		p = p->next;
	}
}
void LinkList::Create(int i) {
	Node *nNew, *nTemp;
	nTemp = head;
	while (i-- > 0) {
		nNew = new Node;
		nNew->data = i;
		nNew->next = NULL;
		nTemp->next = nNew;
		nTemp = nNew;
	}
}