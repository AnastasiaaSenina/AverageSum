#ifndef _QUEUE_H_
#define _QUEUE_H_
#include <stdio.h>
#include <stdexcept>
using namespace std;

 struct CNode {
 int data;
 CNode *prev;
 CNode *next; 
};
 class Queue {
   CNode *finish;
   CNode *start;
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
   void push(int x){
   CNode *node= new CNode;
   node-> data=x;
   node->next=NULL;
   node->prev=finish;
   finish->next=node;
   finish=node;
   if (size==0)
   start=start->next;
   size++;
    }
   void pop(){
     CNode *node = start;
     if (size){
     if (size >1) {
     size--;
     start=start->next;
     start->prev=NULL;
     delete node;
     } else {
     finish=NULL;
     start=NULL;
     delete node;
     size--;
      }
     }
     else throw 1;
   }
   int &back() {
     if (size!=0)
     return start->data;
     else throw 1;
        }
   int front() {
     if (size != 0)
       return finish->data;
     else throw 1;
   }
   bool empty(){
     if (size!=0)
     return false;
     else return true;
     }
      };
  void SumOfAverageValue(int N, int *mas,int window, double *resmas);
 #endif 