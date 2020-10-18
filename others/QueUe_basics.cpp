<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

//circular queue
class Queue{
	private:
		int arr[5];
		int front,rear;
		int count_item;
	public:
		
		Queue()	//constructor
		{
			//creating an empty queue
			front = -1 ;
			rear = -1;
			count_item = 0;
			for(int i=0;i<5;i++)
			{
				arr[i] = 0;
			}
		}
		
		//methods / functions
		
		bool isEmpty()
		{	
			if(front == -1 && rear == -1)
				return true;
			else
				return false;
		}
		
		
		bool isFull()
		{
			//if(rear == 4) 	// rear == size(array)-1
			if((rear+1)%5==front) //circular  
				return true;
			else
				return false;
		}
		
		void enqueue(int val)
		{
			if(isFull())
			{
				cout << "Queue is Full !!" << endl;
				return;
			}
			else if(isEmpty())	//if empty queue the both rear and front are 0
			{
				rear = 0;
				front = 0;
				arr[rear] = val;
			}
			else
			{
				//rear++;
				rear = (rear+1) %5;
				arr[rear] = val;
			}
			count_item++;
		}
		
		int dequeue()
		{
			int x ;
			if(isEmpty())
			{
				cout << "Queue is Empty !!" << endl;
				return 0;
			}
			else if(front == rear)
			{
				x = arr[front];
				arr[front] = 0;
				
				front = -1;
				rear = -1 ;
				count_item--;
				return x;
			}
			else
			{
				x = arr[front];
				arr[front] = 0;
				
//				front ++;
				front = (front+1)%5;
				count_item--;
				return x;
			}
			
		}
		
		int count()
		{
			return (count_item);
		}
		
		void display()
		{
			for(int i=0;i<5;i++)
			{
				cout << arr[i] <<"  ";
			}
			cout << endl;
			cout << endl;
			
		}
};

int main()
{
	Queue qu_1;
	int option,value;
	
	do	//do while loop so that we can have option driven menu for the action....
	{
		cout << "What operation do you want to peform? Select the correct option..."<<endl;
		cout << "press 0 to exit." << endl;
		cout << endl;
		cout << "1. Enqueue()" << endl;
		cout << "2. Dequeue()" << endl;
		cout << "3. isEmpty()" << endl;
		cout << "4. isFull()" << endl;
		cout << "5. count()" << endl;
		cout << "6. Display()" << endl;
		cout << "7. Clear Screen()" << endl;
		cout << endl;
		
		cout << "Choose one option: ";
		
		cin >> option;
		cout << "\n";
		
		switch(option)
		{
			case 0:
				break;			
			case 1:	//enqueue
				cout << "Enter the data into Queue :" << endl;
				cin >> value;
				qu_1.enqueue(value);
				break;
			case 2:	//dequeue
				cout << "Dequeue function executed -  value removed :" << qu_1.dequeue() << endl; 
				break;
			case 3:
				if(qu_1.isEmpty())
					cout << "Queue is Empty!!" << endl;
				else
					cout <<	"Queue is not empty." << endl;
				break;
			case 4:
				if(qu_1.isFull())
					cout << "Queue is full!!" << endl;
				else
					cout <<	"Queue is not full." << endl;
				break;
			case 5:
				cout << "Number of item in the Queue is : " << qu_1.count() << endl;
				break;
			case 6:
				cout << "Display is called " << endl;
				qu_1.display();
				break;
			case 7:
				system("cls");
				break;
			default:
				cout << "Please enter appropriate option" << endl;
		}
	}while(option!=0);
	// NOTE !! --> while - do end with ; 
	return 0;
}
=======
#include<bits/stdc++.h>
using namespace std;

//circular queue
class Queue{
	private:
		int arr[5];
		int front,rear;
		int count_item;
	public:
		
		Queue()	//constructor
		{
			//creating an empty queue
			front = -1 ;
			rear = -1;
			count_item = 0;
			for(int i=0;i<5;i++)
			{
				arr[i] = 0;
			}
		}
		
		//methods / functions
		
		bool isEmpty()
		{	
			if(front == -1 && rear == -1)
				return true;
			else
				return false;
		}
		
		
		bool isFull()
		{
			//if(rear == 4) 	// rear == size(array)-1
			if((rear+1)%5==front) //circular  
				return true;
			else
				return false;
		}
		
		void enqueue(int val)
		{
			if(isFull())
			{
				cout << "Queue is Full !!" << endl;
				return;
			}
			else if(isEmpty())	//if empty queue the both rear and front are 0
			{
				rear = 0;
				front = 0;
				arr[rear] = val;
			}
			else
			{
				//rear++;
				rear = (rear+1) %5;
				arr[rear] = val;
			}
			count_item++;
		}
		
		int dequeue()
		{
			int x ;
			if(isEmpty())
			{
				cout << "Queue is Empty !!" << endl;
				return 0;
			}
			else if(front == rear)
			{
				x = arr[front];
				arr[front] = 0;
				
				front = -1;
				rear = -1 ;
				count_item--;
				return x;
			}
			else
			{
				x = arr[front];
				arr[front] = 0;
				
//				front ++;
				front = (front+1)%5;
				count_item--;
				return x;
			}
			
		}
		
		int count()
		{
			return (count_item);
		}
		
		void display()
		{
			for(int i=0;i<5;i++)
			{
				cout << arr[i] <<"  ";
			}
			cout << endl;
			cout << endl;
			
		}
};

int main()
{
	Queue qu_1;
	int option,value;
	
	do	//do while loop so that we can have option driven menu for the action....
	{
		cout << "What operation do you want to peform? Select the correct option..."<<endl;
		cout << "press 0 to exit." << endl;
		cout << endl;
		cout << "1. Enqueue()" << endl;
		cout << "2. Dequeue()" << endl;
		cout << "3. isEmpty()" << endl;
		cout << "4. isFull()" << endl;
		cout << "5. count()" << endl;
		cout << "6. Display()" << endl;
		cout << "7. Clear Screen()" << endl;
		cout << endl;
		
		cout << "Choose one option: ";
		
		cin >> option;
		cout << "\n";
		
		switch(option)
		{
			case 0:
				break;			
			case 1:	//enqueue
				cout << "Enter the data into Queue :" << endl;
				cin >> value;
				qu_1.enqueue(value);
				break;
			case 2:	//dequeue
				cout << "Dequeue function executed -  value removed :" << qu_1.dequeue() << endl; 
				break;
			case 3:
				if(qu_1.isEmpty())
					cout << "Queue is Empty!!" << endl;
				else
					cout <<	"Queue is not empty." << endl;
				break;
			case 4:
				if(qu_1.isFull())
					cout << "Queue is full!!" << endl;
				else
					cout <<	"Queue is not full." << endl;
				break;
			case 5:
				cout << "Number of item in the Queue is : " << qu_1.count() << endl;
				break;
			case 6:
				cout << "Display is called " << endl;
				qu_1.display();
				break;
			case 7:
				system("cls");
				break;
			default:
				cout << "Please enter appropriate option" << endl;
		}
	}while(option!=0);
	// NOTE !! --> while - do end with ; 
	return 0;
}
>>>>>>> 24fa196... stack and queue
