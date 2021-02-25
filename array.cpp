#include<iostream>

using namespace std;
int deleteElement(int arr[], int n, int x) 
{ 
   // Search x in array 
   int i; 
   for (i=0; i<n; i++) 
      if (arr[i] == x) 
         break; 
  
   // If x found in array 
   if (i < n) 
   { 
     // reduce size of array and move all 
     // elements on space ahead 
     n = n - 1; 
     for (int j=i; j<n; j++) 
        arr[j] = arr[j+1]; 
   } 
  
   return n; 
} 

int main(){
	
//	int arr[1000], size,cnt,position;
//	cout<<"Enter the size of the array"<<endl;
//	cin>>size;
//	for(cnt=0;cnt<size;cnt++){
//		
//	cout<<"Enter the value at index: "<<cnt<<endl;cin>>arr[cnt];
//	
//	}
//	cout<<"Enter the position for deleting: "<<endl;
//	cin>>position;
//	
//	for(cnt = position;cnt<size-1;cnt++){
//		arr[cnt]=arr[cnt+1];
//		
//	}
//	
//	   for(cnt=0;cnt<size-1;cnt++)  
//	    {
//		cout<<endl<<arr[cnt]<<endl;   
//		}
  int arr[] = {11, 15, 6, 8, 9, 10}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int x = 6; 
  
    // Delete x from arr[] 
    n = deleteElement(arr, n, x); 
  
    cout << "Modified array is \n"; 
    for (int i=0; i<n; i++) 
       cout << arr[i] << " "; 
}
