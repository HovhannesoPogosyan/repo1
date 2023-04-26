#include "queue.hpp"


//Structure of the Node
node::node(int data)
{
	this->data = data;
	link = nullptr;
}
queue::queue()
{
	front = nullptr;
	rear = nullptr;
	size = 0;
}

//Function to check if queue is empty or not
bool queue::isempty()
{
	if(front == nullptr)
		return true; 
 	else
 		return false;
}

//Function to insert an element in queque
void queue::enqueue (int data)
{
	if (front == nullptr)
	{
		front = new node(data);
		rear = front;
	}
	else
	{
	node* el = new node(data);
	rear->link = el;
	rear = el;
	}
	size++;
}

 //Returns  queue --size
int queue::get_size()
{
        return size;
}

//Function to delete an element from the queue
int queue::dequeue()
{
	if ( isempty() )
  		std::cout<<"queue is empty"<<std::endl;
	else if (size == 1)
	{
		delete front;
		front = nullptr;
		rear = nullptr;
		size--;
	}
 	else
 	{
	        int d = front->data;
  		node* el = front;
  		front = front -> link;
  		delete el;
		size--;
		return d;
 }
	return 0;
}

 //function to show the element at front
int&  queue::Front()
{
	assert(size != 0 && "Segmentation fault");
  	return front->data;  //"Element at front is"

}

 //function to show the element at rear
int&  queue::Rear()
{
        if ( isempty() )
        {
                std::cout<<"queue is Empty"<<std::endl;
        }
//        else
//        {
                return rear->data;  //"Element at queue is"
//        }
}

// Function to Display the queue
void queue::print()
{
	if ( isempty() )
		std::cout<<"queue is Empty"<<std::endl;
 	else
 	{
  		node *temp = front;
		while(temp != nullptr)
  		{   
			std::cout<<temp->data<<" ";
			temp = temp->link;
  		}
  			std::cout<<std::endl;
 	}
 }


//Destructor---- queue 
queue::~queue()
{
	node* n = front;
	node* n_link;
	while (n != nullptr)
	{
		n_link = n->link;
		delete n;
		size--;
		n = n_link;
	}
	assert(size == 0);
}

