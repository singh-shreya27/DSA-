#include<bits/stdc++.h>
using namespace std;
void printPattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
            }
            cout<<endl;
    }
}
int main(){
    //in online compilers, code runs for for multiple test cases at the same time ..so this will
    //be in the backend of the code(hidden). 
    //we only have to code the function and not the int main part.
    int t;
    cout<<"t:";
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        printPattern(n);     
    }

   
    return 0;
}


//Some other questions are directly submitted in the code runner.