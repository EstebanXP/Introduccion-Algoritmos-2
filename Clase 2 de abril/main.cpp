#include <iostream>

using namespace std;
int mergesort(int [],int,int);

int n=8,a[8]={7,1,4,3,2,0,9,7};
int main()
{
    int total=0;
    total=mergesort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\nTotal es: "<<total;
    return 0;
}
int mergesort(int a[],int lo,int hi){
    int INFTY=9999999,total=0;
    if(hi<=lo){
        return 0;
    }
    int mid=lo+(hi-lo)/2;
    mergesort(a,lo,mid);
    mergesort(a,mid+1,hi);

    int b[mid +2],c[mid+2];
    for(int k=lo;k<=mid;k++){
        b[k-lo]=a[k];
        total=total+a[k];
    }
    for(int k=mid+1;k<=hi;k++){
        c[k-mid-1]=a[k];
        total=total+a[k];
    }
    b[mid-lo+1]=INFTY;c[hi-mid]=INFTY;

    int i=0,j=0;
    for(int k=lo;k<=hi;k++){
        if(c[j]<b[i]){
            a[k]=c[j++];
        }else{
            a[k]=b[i++];
        }
    }
    return total;
}
