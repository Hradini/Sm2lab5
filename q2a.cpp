#include <iostream>
using namespace std;

void quickSort(int arr[], int left, int right) {//funtion for sort
      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];

      while (i <= j) {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      };

      if (left < j)
            quickSort(arr, left, j);

      if (i < right)
            quickSort(arr, i, right);
}
void display(int arr[]){
	for(int i=0;i<6;++i){
		cout<<arr[i];	
	}
}

int main(){
	int arr[6]={7,2,3,4,8,1};
	int left=0;
	int right=5;
	display(arr);
	quickSort(arr,0,5);
	display(arr);
}
