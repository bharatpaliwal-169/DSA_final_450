#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data ;
    struct node *next ;
};
struct node *head , *temp , *new_node , *prev_node , *head1 , *head2 ,*temp1  ;

void create_list ()
{
    int a=1 ;
    head = 0 ;

    while (a)
    {
        new_node = (struct node *) malloc (sizeof(struct node)) ;

        cout << "Enter the data of node : \n" ;
        cin >> new_node -> data ;
        new_node -> next = 0 ;

        if (head == 0)
        {
            head = temp = new_node ;
        }
        else
        {
            temp -> next = new_node  ;
            temp = new_node ;
        }

        cout << "\nPress 1 to continue entering the data or press 0 to stop entering the data : " ;
        cin >> a ;
    }
}

// DISPLAY OF THE SINGLE LINKED LIST :
void display()
{
    temp = head ;

    while (temp != 0)
    {
        prev_node = temp ;
        cout << temp -> data << "  " ;
        temp = temp -> next ;
    }
    cout << "\n\n" ;
}

// COCATENATION :
void concat ()
{
    temp1 -> next = head2 ;
    head = head1 ;
    head2 = 0 ;
}

int main ()
{
    create_list () ;
    cout << "\nThe first list is : " ;
    display() ;
    temp1 = prev_node ;
    head1 = head ;

    create_list () ;
    head2 = head ;
    cout << "\nThe second list is : " ;
    display() ;

    concat() ;
    cout << "\nThe concatenated list is : " ;
    display() ;

    return 0;
}
