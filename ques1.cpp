#include <iostream>
using namespace std;
double series(int n);
int main(int argc, char **argv)
{
    int n;
    if (argc!=2)
    {
        cout<<"enter the value of n";
        cin>>n;
    }
    else{
        n=stoi(argv[1]);
    }
    double sum=series(n);
    cout<<sum;
    return 0;
}
double series(int n){
    double sum;
    for (int i = 1; i <=n; i++)
    {
        if (i%2==0)
        {
            sum-=1.0/(i * i);
        }
        else{
            sum+=1.0/(i * i);
        }
        
    }
    return sum;
}