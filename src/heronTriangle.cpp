#include <iostream>
#include <cmath>
#include "include/triangle.h"

using namespace std;

int main(){
    double areaResult = Triangle(10,10,10).getArea();
    cout << "Area of triangle is: " << areaResult << endl;

    areaResult = Triangle(20,20,30).getArea();
    cout << "Area of triangle is: " << areaResult << endl;

    Triangle t1 = Triangle(10,10,10);
    
    Triangle result = t1.scale(2); //Llamada de funcion con parametro (2)

    cout << result.getSide1() << endl;
    result.setSide1(30);
    cout << result.getSide1() << endl;
    
    Triangle t2 = Triangle(10,20,30);

    Triangle triangles[] = {t1, t2, result};

    cout << Triangle::sumOfAreas(triangles, 3) << endl;

    cout << result.getSide1() << endl;

    //Triangle::sumOfAreas();

}