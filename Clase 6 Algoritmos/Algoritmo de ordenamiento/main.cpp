#include <iostream>

using namespace std;

int main()
{
    int n=10,arreglo[n]={1,8,4,2,7,1,13,9,1,11},arreglocopia[10],limmen,limmay,mi=0,ma=9,men,may;
    bool arrebol[10];
    for(int i=0;i<10;i++){
        arrebol[i]=1;
    }
    for(int i=0;i<10;i++){
        cout<<arreglo[i]<<" ";
    }
    cout<<"\nORDENANDO CARTAS \n";
    while(mi<=ma){
        limmen=14;
        limmay=0;
        for(int i=0;i<10;i++){
            if(arreglo[i]<limmen&&arrebol[i]==1){
                limmen=arreglo[i];
                men=i;
            }
            if(arreglo[i]>limmay&&arrebol[i]==1){
                    limmay=arreglo[i];
                    may=i;
                }
        }
            arreglocopia[mi]=limmen;
            arreglocopia[ma]=limmay;
            mi++;
            ma--;
            arrebol[men]=0;
            arrebol[may]=0;
        }
    for(int i=0;i<10;i++){
    cout<<arreglocopia[i]<<" ";
    }

    return 0;
}
