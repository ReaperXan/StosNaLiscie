#include "lista.h"
ListNode::ListNode()
{
	this->list = nullptr;
}
ListNode::ListNode(int a)
{
	this->dane = a;
}
ListNode::~ListNode()
{
	delete this->list;
}
int ListNode::wypiszdane()
{
	return this->dane;
}
ListNode* ListNode::wypiszliste()
{
	return this->list;
}
void ListNode::zapiszdane(int mojedane)
{
	this->dane = mojedane;
}
void ListNode::zapiszliste(ListNode* mojaListNode)
{
	this->list = mojaListNode;
}