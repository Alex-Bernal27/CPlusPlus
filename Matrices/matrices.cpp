#include<iostream>

using namespace std;

int main(){
    int a,aux;
    cin>>a;
    int x[a][a];
    
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            cin>>x[i][j];
        }
    }
    cout<<"Matriz X: "<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            cout<<x[i][j]<<" ";
        }
        cout<<"\n";
    }

    int invertida[a][a];

    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            invertida[i][a-j-1] = x[i][j];
        }
    }

    cout<<"Matriz X Invertida es: "<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            cout<<invertida[i][j]<<" ";
        }
        cout<<"\n";
    }

    system("pause");
    return 0;
}