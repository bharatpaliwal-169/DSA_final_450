<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
class Student
{
	private:
		long long int sch_no;
		float marks[4];
		float total;
	public:
		void getDetails()
		{
			cout << "Enter Student's Scholar number: " << endl;
			cin >> sch_no;
			cout << "Enter the marks of four subject in order -> Math,science,english,hindi" << endl;
			for(int i=0;i<4;i++)
			{
				cin >> marks[i];
				cout << "\n";
			}
			for(int i=0;i<4;i++)
			{
				total += marks[i];
			}
			
		}
		
		void displayDetails()
		{
			cout << "Student's Details are as follows: " <<  endl;
			cout << sch_no << endl;
			cout << "Marks obtained in four subject in order as : Maths,Science,English,Hindi" << endl;
			for(int i=0;i<4;i++)
			{
				cout << marks[i];
				cout << "\n";
			}
			cout << "Total Marks obtained : " << total << endl;			
			cout << "\n";
		}	
};
int main()
{
	int n,i;
	cout << "Enter the number of students" << endl;
	cin >> n;
	Student stu[n]; 	//no of students
	
	for(i=0;i<n;i++)
	{
		cout << "Enter the details of the student :" << endl;
		stu[i].getDetails(); 
	}
	
	cout << endl;
	
	for(i=0;i<n;i++)
	{
		stu[i].displayDetails(); 
	}
	
	return 0;
}
=======
#include<bits/stdc++.h>
using namespace std;
class Student
{
	private:
		long long int sch_no;
		float marks[4];
		float total;
	public:
		void getDetails()
		{
			cout << "Enter Student's Scholar number: " << endl;
			cin >> sch_no;
			cout << "Enter the marks of four subject in order -> Math,science,english,hindi" << endl;
			for(int i=0;i<4;i++)
			{
				cin >> marks[i];
				cout << "\n";
			}
			for(int i=0;i<4;i++)
			{
				total += marks[i];
			}
			
		}
		
		void displayDetails()
		{
			cout << "Student's Details are as follows: " <<  endl;
			cout << sch_no << endl;
			cout << "Marks obtained in four subject in order as : Maths,Science,English,Hindi" << endl;
			for(int i=0;i<4;i++)
			{
				cout << marks[i];
				cout << "\n";
			}
			cout << "Total Marks obtained : " << total << endl;			
			cout << "\n";
		}	
};
int main()
{
	int n,i;
	cout << "Enter the number of students" << endl;
	cin >> n;
	Student stu[n]; 	//no of students
	
	for(i=0;i<n;i++)
	{
		cout << "Enter the details of the student :" << endl;
		stu[i].getDetails(); 
	}
	
	cout << endl;
	
	for(i=0;i<n;i++)
	{
		stu[i].displayDetails(); 
	}
	
	return 0;
}
>>>>>>> 24fa196... stack and queue
