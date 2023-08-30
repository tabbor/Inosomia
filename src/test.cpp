#include<cstdio>
#include<iostream>
#define MaxSize 50
using namespace std;

typedef struct linknode{
	int data;
	struct linknode* next;
} LinkNode; 

typedef struct linkqueue{
	LinkNode* front ,* rear; 
}* LinkQueue;

void InitQueue(LinkQueue &Q){
	LinkNode *p = new LinkNode;
	p->data = 1;
	p->next = NULL;
	cout << p;
	cout << endl;
	Q->front = p;
} 

// 带节点链队列 
int main() {
	LinkQueue lq;
	InitQueue(lq);
	cout << lq->front->data << endl;
	
} 
