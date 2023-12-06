#include <iostream>
#include<math.h>
class Wektor2D
{
    public:
        Wektor2D()
            {
             x=0;
             y=0; 
            }
        Wektor2D(double a, double b)
            {
             x=a;
             y=b;
            }
        ~Wektor2D(){}


void setX(int a) { x = a; }
void setY(int a) { y = b; }
int  getX()      { return x; }
int  getY()      { return y; }

 double norm() 
    {
        double result;
        result = sqrt(x*x + y*y); 
        std::cout << "[" <<x<< ", "<<y<<"]"<<std::endl;
        return result; 
        }; 

int x;
int y;
};

Wektor2D operator+(Wektor2D v1, Wektor2D v2)
{
    double sumx, sumy; 
    sumx=v1.getX()+v2.getX(); 
    sumy=v1.getY()+v2.getY(); 

    return Wektor2D{sumx, sumy}; 
}; 


double operator*(Wektor2D v1, Wektor2D v2)
{
    double scalar; 
    scalar =v1.getX()*v2.getX()+ v1.getY()*v2.getY(); 
    return scalar; 
}; 


