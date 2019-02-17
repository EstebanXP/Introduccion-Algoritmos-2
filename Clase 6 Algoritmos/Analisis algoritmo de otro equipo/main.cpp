#include <iostream>

using namespace std;

int main()
{
    int arr[]={10,9,9,7,7,6,4,2};
    int i=0, SHORT_RES=0,j=0,n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Arreglo a ordenar: ";
    for(i=0;i<n;i++){ //n veces
        cout<<arr[i]<<",";
    }
    cout<<endl;//1 vez
    for(i=1;i<n;i++){ //n veces
        SHORT_RES=arr[i];
        j=i-1;//n-1 veces
        while(j>=0&&arr[j]>SHORT_RES){ //variable aleatoria veces
            arr[j+1]=arr[j];
            j=j-1; //variable aleatoria-1 veces
        }
    for(i=1;i<n;i++){ //n-1 veces
        SHORT_RES=arr[i];
        j=i-1; //n-2 veces
        while(j>=0&&arr[j]>SHORT_RES){ //variable aleatoria veces
            arr[j+1]=arr[j];
            j=j-1;//variable aleatoria-1
        }
        arr[j+1]=SHORT_RES;//n-2
    }
    }
    cout<<"Arreglo ordenado: ";
    for(i=0;i<n;i++){//n veces
        cout<<arr[i]<<",";
    }
    return 0;
}
