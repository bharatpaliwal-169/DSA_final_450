#include<bits/stdc++.h>
using namespace std;

class Stack {
	private:
		int top;
		int arr[5];
	
	public:
		Stack()
		{
			top = -1;	//setting the top 
			for(int i=0;i<5;i++) 	//initalise the empty stack
			{
				arr[i] = 0;
			}
			
		}
		
		bool isEmpty(){
			if(top == -1)
			{
				return true;
			}
			else{
				return false;
			}
		}
		
		bool isFull(){
			if(top == 4)
				return true;
			else
				return false;
		}
		
		//put the value
		void push(int val)
		{
			if(isFull())
			{
				cout << "Stack OverFlow!!" << endl;
			}
			else
			{
				top ++;	//-1 se 0 fir value dalo
				arr[top] = val;
			}
		}
		//remove only the top most value
		int pop()
		{
			if(isEmpty())
			{	
				cout << "Stack UnderFlow!!" << endl;
				return 0;
			}
			else
			{
				int popValue = arr[top];
				arr[top] = 0; // make  that part empty
				top--;	//now top is second last element
				return popValue;
			}
		}
		
		//above four are the most basic and imp functions.....
		//more functions......
		
		//no.of data in the stack.....
		int count()
		{
			return (top + 1);
		}
		
		//to watch data at a position....
		int peek(int pos)
		{
			if(isEmpty())
			{	
				cout << "Empty Stack!" << endl;
				return 0;
			}	
			else
			{
				return arr[pos];
			}
		}
		
		
		//modify and update data at a position....
		void change(int pos , int val)
		{
			arr[pos] = val;
			cout << "value changed at : " << pos << endl;
		}

		//current status of your stack		
		void display()
		{
			cout << "Your stack look as follows : "<< endl;
			for(int i=4;i>=0;i--)
			{
				cout << "\n";
				cout << arr[i] <<endl;
			}
		}
};


//main driver code:-
int main()
{
	Stack stack_1;
	int option,position,value;
	
	do	//do while loop so that we can have option driven menu for the action....
	{
		cout << "What operation do you want to peform? Select the correct option..."<<endl;
		cout << "press 0 to exit." << endl;
		cout << endl;
		cout << "1. Push()" << endl;
		cout << "2. Pop()" << endl;
		cout << "3. isEmpty()" << endl;
		cout << "4. isFull()" << endl;
		cout << "5. Peek()" << endl;
		cout << "6. count()" << endl;
		cout << "7. change()" << endl;
		cout << "8. Display()" << endl;
		cout << "9. clear Screen" << endl;
		cout << endl;
		cout << "Choose one option: ";
		cin >> option;
		cout << "\n";
		
		switch(option)
		{
			case 0:
				break;			
			case 1:
				cout << "Enter the data into stack :" << endl;
				cin >> value;
				//push here______
				stack_1.push(value);
				break;
			case 2:
				cout << "Pop function executed - poped value :" << stack_1.pop() << endl; 
				break;
			case 3:
				if(stack_1.isEmpty())
					cout << "Stack is Empty!!" << endl;
				else
					cout <<	"Stack is not empty." << endl;
				break;
			case 4:
				if(stack_1.isFull())
					cout << "Stack is full!!" << endl;
				else
					cout <<	"Stack is not full." << endl;
				break;
			case 5:
				cout << "Enter the position of item you want to watch: " << endl;
				cin >> position;
				cout << "Peek function called - value at position "<< position << " is " << stack_1.peek(position) << endl;
				break;
			case 6:
				cout << "Number of item in the stack is : " << stack_1.count() << endl;
				break;
			case 7:
				cout << "change is called!" <<endl;
				cout << "Enter the position of the item to be changed :- " << endl;
				cin >> position;
				cout << "Enter the new item to be added " << endl;
				cin >> value;
				stack_1.change(position,value);
				break;
			case 8:
				cout << "Display function called"<< endl;
				stack_1.display();
				break;
			case 9:
				system("cls");
				break;
			default:
				cout << "Please enter appropriate option" << endl;		
				
		}
	}while(option!=0);
	// NOTE !! --> while - do end with ; 
		
	return 0;	
}




