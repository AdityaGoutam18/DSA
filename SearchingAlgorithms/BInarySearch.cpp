// binary search used only in the case of sorted arrays
 #include<iostream>
 using namespace std;

//  int BinarySearch(int arr[],int start,int end,int key){
//     while(start<=end){
//         int mid=start+(end-start)/2;
//         if(arr[mid]==key){
//             return mid;
//         }else if(arr[mid]>key){
//             end=mid-1;

//         }else{
//             start=mid+1;
//         }
//     }
//     return -1;
//  }

 // using Recursion

 int BinarySearch(int arr[],int start,int end,int key){
    if(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]>key){
            return BinarySearch(arr,mid+1,end,key);

        }else{
            return BinarySearch(arr,start,mid-1,key);
        }
    }
    return -1;
 }

 int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    int start=0;
    int end=n-1;
    int key;
    cout<<"Enter value to be searched :"<<endl;
    cin>>key;
    int result=BinarySearch(arr,0,n-1,key);
    if(result == -1){
        cout<<"Element is not present"<<endl;

    }else{
        cout<<"Element is present at index "<<result<<endl;
    }

    return 0;

}