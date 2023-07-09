#include <iostream> 
using namespace std;

int main()
{
    int size1=5;
    int size2=3;
    int size3=8;
    int a[5]={1,2,3,4,5};
    int b[3]={3,7,9};
    int c[8];
    int i=0,j=0,k=0;
    while (i<size1 && j<size2)
    {
        if (a[i]<=b[j])
        {
            c[k++]=a[i++];
        }
        else{
            c[k++]=b[j++];
        }
    }
    
    while (i<size1)
    {
        c[k++]=a[i++];
    }
    while (j<size2)
    {
        c[k++]=b[j++];
    }
    
    for (int i = 0; i < size3; i++)
    {
        cout<<c[i];
    }
    
    
    return 0;
}
