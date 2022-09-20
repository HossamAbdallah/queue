#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next; 
	Node()
	{
		data = 0;
		next = NULL;
	}

	class queue{
		Node* front;
		Node* rear; 
		queue()
		{
			rear = front = NULL;
		}
		bool isempty()
		{
			return (front == NULL )//&& rear == NULL)

		}
		void enqueue(int item)
		{
			Node* newnode;
			newnode->data = item;
			if (isempty())
				front = rear = newnode;
			else
			{
				next->rear = newnode;
				rear = newnode;
			}
		}
		void display()
		{
			Node* temp = front;
			while (temp != NULL)
			{
				cout << temp->data << " " << endl;
				temp = temp->next;
			}
		}
		void dequeue() {
			if (isempty())
			{
				cout<< "the queue is empty"
			}
			else if (front ==rear)
			{
				delete front;
				front = rear = NULL;
			}
			else
			{
				Node* delptr = front;
				front = front->next
					delete delptr;

			}
			
		}



	 }

};


int mian()
{
	queue q;
	for (int i = 1; i <= 3; i++)
	{
		int item;
		cout << "enter item to enqueue";
		q.enqueue(item);
	}
	q.display();  

}