#include <iostream>
using namespace std;
int Binary_Search(int arr[],int len,int res);
int main(){
 	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
 	int res = Binary_Search(arr,10,9);
 	cout<<res<<endl;
} 
int Binary_Search(int arr[],int len,int res){
	int start = 0;
	int end = len - 1;
	while (start <= end) {
		int middle = (start + end) / 2;
		if(arr[middle] == res) {
			return middle;
		}else if(arr[middle]< res){
			start = middle + 1;
		}else {
			end = middle - 1;
		}
	}
	return -1;
}
