#include <iostream>

using namespace std;

int main()
{
    int size;
    cin>> size;
    if(size <26){
        cout<< "No";
        return 0;
    }
    string word ;
    cin>> word;

    for(int i=0; i<size; i++){
        word[i]=tolower(word[0]);
    }
    sort(word.begin() , word.end() );
    int count=0;
    for(int i=0; i<size; i++){

        if(word[i] != word[i++]){
            count++;
        }


    }
    if(count==26) cout<<"yes";
    else cout<<"no";

}
