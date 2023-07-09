#include <iostream>
#include <cmath>
using namespace std;

class Triangle
{
private:
    double a,b,c;
public:
    Triangle(int a1,int b1, int c1){
        a=a1;
        b=b1;
        c=c1;
        if (a==0 || b==0 ||c==0)
        {
            throw "Wrong inputs";
        }
        else if (a+b<c || a+c<b || b+c<a)
        {
            throw "Wrong inputs";
        }
    }   
    double getarea(){
        double s=(a+b+c)/2;
        double area=sqrt(s*(s-a)*(s-b)*(s-c));
        return area;
    }
    double getarea(double x,double y){
        double area=0.5*x*y;
        return area;
    }
};

int main()
{
    Triangle T(2,4,5);
    cout<<T.getarea()<<endl;
    cout<<T.getarea(4,5);
    return 0;
}
