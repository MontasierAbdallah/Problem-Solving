#include <iostream>

using namespace std;

int main()
{
     int size,removeSize;
      cout << "add size and remove size " << endl;
     cin>> size>> removeSize;
     string value;
      cout << "add the value" << endl;
     cin >> value;
        int start='a';
        int end= 'z' ;
        for(int i=start; i<=end;i++){
                for(int x=0; x<=size; x++){
                    if(vlaue[x]==i){
                        vlaue[x]=' ' ;
                        removeSize--;
                    }
                }
        }

    return 0;
}
