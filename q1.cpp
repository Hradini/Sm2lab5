class bubble{
	int arr[100];
	void sorta(int arr[], int size);
	void sortll(node *head);
	void displayarr(int arr[]);
	
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

void bubble::sortll(node*head){
	node*temp;
	int i, j,n;
	n= countItems();
	for (i = 0; i < n; ++i){
		for (j = 0; j < n-i-1; ++j){
			if (temp->data > (temp->next)->data){
				temp->data = temp->data + (temp->next)->data;
				(temp->next)->data = temp->data - (temp->next)->data;
				temp->data = temp->data - (temp->next)->data;
				temp=temp->next;
			}
		}
	}	
} 

void bubble::displayarr(int arr[], int n){
	int i;
	for (i = 0; i < n; ++i){
		cout<<arr[i];
	}	
} 

