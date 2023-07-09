#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, char **argv)
{
    string str;
    if (argc!=2)
    {
        
        cin>>str;
    }
    else{
        str=argv[1];
    }
    int l1=str.length();
    for (int i = 65; i < 65+26 ; i++)
    {
        int count=0;
        for (int j = 0; j < l1; j++)
        {
            if (toupper(str[j])==char(i))
            {
                count+=1;
            }
            
        }
        cout<<char(i)<<": "<<count<<endl;
        
    }
    
    return 0;
}
