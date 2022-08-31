#include <iostream>
#include <cmath>
#include "triangle.h"

using namespace std;



int main(){
    double areaResult = Triangle(10,10,10).getArea();
    cout << "Area of triangle is: " << areaResult << endl;

    areaResult = Triangle(20,20,30).getArea();
    cout << "Area of triangle is: " << areaResult << endl;

    Triangle result = Triangle(10,10,10).scale(2);

}