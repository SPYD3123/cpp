#include <iostream>
using namespace std; 

class Matrix
{
private:

public:
void sum(int a,int b,int c,int d){
    if (a!=c || b!=d)
    {
        throw "Wrong dimensions entered";
    }
    
    int **mat1=new int*[a];
    for (int i = 0; i <a; i++)
    {
        mat1[i]= new int[b];
    }
    cout<<"enter the value for matrix 1:-"<<endl;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout<<"mat1["<<i<<"]["<<j<<"] :-";
            cin>>mat1[i][j];
        }
        
    }
    
    int **mat2=new int*[c];
    for (int i = 0; i <c; i++)
    {
        mat2[i]= new int[d];
    }

    cout<<"enter the value for matrix 2:-"<<endl;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout<<"mat2["<<i<<"]["<<j<<"] :-";
            cin>>mat2[i][j];
        }
        
    }
    cout<<"sum of 2 matrix entered is :-"<<endl;
    int **mat3=new int*[a];
    for (int i = 0; i <a; i++)
    {
        mat3[i]= new int[b];
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0;j <b; j++)
        {
            mat3[i][j]=mat1[i][j]+mat2[i][j];
            cout<<mat3[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
}
void product(int a,int b,int c,int d){
    if (b!=c)
    {
        throw "Wrong dimensions entered";
    }
    
    int **mat1=new int*[a];
    for (int i = 0; i <a; i++)
    {
        mat1[i]= new int[b];
    }
    cout<<"enter the value for matrix 1:-"<<endl;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout<<"mat1["<<i<<"]["<<j<<"] :-";
            cin>>mat1[i][j];
        }
        
    }
    
    int **mat2=new int*[c];
    for (int i = 0; i <c; i++)
    {
        mat2[i]= new int[d];
    }

    cout<<"enter the value for matrix 2:-"<<endl;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout<<"mat2["<<i<<"]["<<j<<"] :-";
            cin>>mat2[i][j];
        }
        
    }
    cout<<"product of 2 entered is :-"<<endl;
    int **mat3=new int*[a];
    for (int i = 0; i <a; i++)
    {
        mat3[i]= new int[d];
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0;j <d; j++)
        {
            mat3[i][j]=0;
            for (int k = 0; k < c ; k++)
            {
                mat3[i][j]+= mat1[i][k]*mat2[k][j];
            }
            cout<<mat3[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
}
void transpose(int a, int b){
    int **mat1=new int*[a];
    for (int i = 0; i <a; i++)
    {
        mat1[i]= new int[b];
    }
    cout<<"enter the value for matrix 1:-"<<endl;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout<<"mat1["<<i<<"]["<<j<<"] :-";
            cin>>mat1[i][j];
        }
        
    } 
    int **mat2=new int*[b];
    for (int i = 0; i <b; i++)
    {
        mat2[i]= new int[a];
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            mat2[j][i]=mat1[i][j];
        }
        
    }
    cout<<"Transpose of matrix is :-"<<endl;
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cout<<mat2[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
};
int main()
{
    try
    {
        cout<<"Sum"<<endl;
        int a,b,c,d;
        cout<<"Enter row for matrix 1"<<endl;
        cin>>a;
        cout<<"Enter column for matrix 1"<<endl;
        cin>>b;
        cout<<"Enter row for matrix 2"<<endl;
        cin>>c;
        cout<<"Enter column for matrix 2"<<endl;
        cin>>d;
        Matrix m1;
        m1.sum(a,b,c,d);
        cout<<"Product"<<endl;
        cout<<"Enter row for matrix 1"<<endl;
        cin>>a;
        cout<<"Enter column for matrix 1"<<endl;
        cin>>b;
        cout<<"Enter row for matrix 2"<<endl;
        cin>>c;
        cout<<"Enter column for matrix 2"<<endl;
        cin>>d;
        m1.product(a,b,c,d);
        cout<<"Transpose"<<endl;
        cout<<"Enter row for matrix 1"<<endl;
        cin>>a;
        cout<<"Enter column for matrix 1"<<endl;
        cin>>b;
        m1.transpose(a,b);
    }
    catch(...)
    {
        cout<<"Wrong dimensions entered";
    }
       
    return 0;
}

