#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
};

class linkedlist{
	private:
		node *head;
	public:
		linkedlist(){
			head=NULL;
		}

	void insertatbeg(int value){
		node *newnode=new node();
		newnode->data=value;
		newnode->next=head;
		head=newnode;
	}

	void reverse(){
		node *prev=NULL;
		node *current=head;
		node *next=NULL;

		while(current!=NULL){
			next=current->next;
			current->next=prev;
			prev=current;
			current=next;
		}
		head=prev;
	}

	void display(){
		if(head==NULL){
			cout<<"list is empty";
			return;
		}
		node *temp=head;
		while(temp!=NULL){
			cout<<temp->data<<"->";
			temp=temp->next;
		}
		cout<<"NULL\n";
	}
};

int main(){
	linkedlist list;
	list.insertatbeg(10);
	list.insertatbeg(20);
	list.insertatbeg(30);

	cout<<"original list:\n";
	list.display();

	list.reverse();

	cout<<"reversed list:\n";
	list.display();

	return 0;
}
