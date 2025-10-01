#include <iostream>
using namespace std;

int main() {
    int N, i, j, t;
    bool scambio;
    cout<<"Quanti numeri vuoi inserire?"<<endl;
    cin>>N;
    int v[N];
    i=0;
    while(i<=N-1)
    {
        v[i]=random()%N*10-1;
        i=i+1;
    }
    i=0;
    scambio=true;
    while(i<=N-1 & scambio)
    {
        scambio=false;
        j=0;
        while(j<=(N-2)-i)
        {
            if(v[j]>v[j+1])
            {
                t=v[j];
                v[j]=v[j+1];
                v[j+1]=t;
                scambio=true;
            }
            j=j+1;
        }
        i=i+1;
    }
    i=0;
    while(i<=N-1)
    {
        cout<<"Il "<<i+1<<"° numero è "<<v[i]<<endl;
        i=i+1;
    }
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
