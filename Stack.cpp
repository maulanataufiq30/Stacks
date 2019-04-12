#include <iostream>
using namespace std;
struct Node { 
   int data; 
   struct Node *next; 
}; 
struct Node* top = NULL; 
void push(int val) {
   struct Node* newnode = (struct Node*) malloc(sizeof(struct Node)); 
   newnode->data = val; 
   newnode->next = top; 
   top = newnode; 
}
void pop() {
   if(top==NULL)
      cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< top->data <<endl;
      top = top->next;
   }
}
void display() {
   struct Node* ptr;
   if(top==NULL)
      cout<<"stack is empty";
   else {   
      ptr = top; 
      cout<<"Stack elements are: ";
      while (ptr != NULL) { 
         cout<< ptr->data <<" "; 
         ptr = ptr->next; 
      } 
   }
   cout<<endl;
}
int main() {
   int ch, val; 
   do {
   cout<<"Stack with Linked list"<<endl;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
      cout<<"Enter choice: ";
      cin>>ch;
      cout<<endl;
      switch(ch) {
         case 1: {   
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            cout<<endl;
            break;
         }
         case 2: {
            pop();
            cout<<endl;
            break;
         }
         case 3: {
            display();
            cout<<endl;
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl<<endl;
         }
      }
   }while(ch!=4); 
      return 0;
}  
