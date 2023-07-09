#include <iostream>
using namespace std;
int main()
{
    int duplicate[5]={1,3,4,5,4};
    int w[5];
    int count=0;
    for (int i = 0; i < 5; i++)
    {
        bool a=true;
        for (int j = 0; j < 5; j++)
        {
            
            if (duplicate[i]==w[j])
            {
                a=false;
                break;
            }
           
        }
         if (a)
            {
                count+=1;
                w[i]=duplicate[i];
            }
        
    }
    for (int i = 0; i < count; i++)
    {
        cout<<w[i]<<" ";
    }
    
    return 0;
}
