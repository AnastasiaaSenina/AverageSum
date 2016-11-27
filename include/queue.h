#ifndef _QUEUE_H_
#define _QUEUE_H
#include <stdio.h>
#include <stdexcept>
using namespace std;

 struct CNode {
 int data;
 CNode *prev;
 CNode *next; 
};
 class Queue {
   int finish;
   int start;
   int size;
 public:
   Queue(){
   size=0;
   CNode *node= new CNode;
   node->prev=NULL;
   node->next=NULL;
   finish=node;
   start=node;
   }
   void push(int x){}
   void pop()
   int &back(){}
   int front(){}
   bool empty(){}
 };
  void SumOfAverageValue(int sizeofmas, int *mas,int window);
 #endif 