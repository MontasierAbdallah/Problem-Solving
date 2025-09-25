#include <iostream>

using namespace std;

int main()
{
   int arr[100001] = {0};
   int num1,num2;
   int n,q;
   cin>> n>>q;
   for(int  i=0;i<q;i++){
    cin>>num1>>num2;
    if(num1==1){

       arr[num2]= ++arr[num2];
    }else{
        cout<<arr[num2]<<endl;
    }

   }
}
