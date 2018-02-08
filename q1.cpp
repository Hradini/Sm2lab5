include <iostream>
using namespace std;
struct node{
	int data;
	node *temp;
};
class list{
	node *head, *tail;
	public:
		//default constructor
		list(){
			head=NULL;
			tail=NULL;
		}
		//function to insert new node
		void insert(int value){
			node *temp = new node;
			temp->data= value; //assigns value to temp
			temp->next=NULL;//points temp to null
			if (head == NULL){
				head = temp;
				tail=temp;
			}else{
				tail->next=temp; //points last node to temp
				tail=temp;//points tail to temp
			}
		}
		//function to count items
		int countItems(){
			node *cur=new node;
			int i=0;
			cur =head;
			while(cur!=NULL){//traverse the list till end 
				cur=cur->next;
				++i;//keeps track of the number of nodes
			}
			return i;
		}
		//function to display all items in the list
		void display(){
			node*cur= new node;
			cur=head;
			//traverses the linked list and preint every data from the node
			while(cur!=NULL){
				cout<< cur->data << "-> ";
				cur=cur->next;
			}
				cout<< "NULL\n";
			}
		
		
};
class bubble{
	int arr[100];
	void sorta(int arr[], int size);
	void sortll(node *temp);	
};





void bubble::sorta (int arr[], int n){
	int i, j;
	for (i = 0; i < n; ++i){
		for (j = 0; j < n-i-1; ++j){
			if (arr[j] > arr[j+1]){
				arr[j] = arr[j]+arr[j+1];
				arr[j+1] = arr[j]-arr[j + 1];
				arr[j] = arr[j]-arr[j + 1];
			}
		}
	}	
}	
