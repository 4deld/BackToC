/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//집에 늦게 들어갈 것 같아서 태블릿으로,,ㅠㅠ
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n-1; i++){
        for(int k=0; k<n-i-1; k++){
            cout<<' ';
        }
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        cout<<'\n';
    }
    for(int i=0; i<n; i++){
        cout<<'*';
    }
    cout<<'\n';
    for(int i=0; i<n-1; i++){
        for(int k=0; k<i+1; k++){
            cout<<' ';
        }
        for(int j=0; j<n-i-1; j++){
            cout<<"*";
        }
        cout<<'\n';
    }

    return 0;
}
