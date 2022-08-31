#include <iostream>
#include <cmath>
#include "triangle.h"

using namespace std;

double getArea(Triangle t){
    double s = (t.side1 + t.side2 + t.side3)/2.0;
    double area = sqrt(s * (s-t.side1) * (s-t.side2) * (s-t.side3));
    return area;
}

bool hasLargerArea(Triangle t1, Triangle t2){
    return (getArea(t1) > getArea(t2));
}

double sumOfAreas(Triangle triangles[], int size){
    double result = 0;
    for(int i=0; i < size; i++)
        result += getArea(triangles[i]);
    return result;
}

Triangle scale(Triangle original, double scale){
    return Triangle(original.side1*scale, original.side2*scale, original.side3*scale);
}


int main(){
    double areaResult = getArea(Triangle(10,10,10));
    cout << "Area of triangle is: " << areaResult << endl;

    areaResult = getArea(Triangle(20,20,30));
    cout << "Area of triangle is: " << areaResult << endl;

    Triangle result = scale(Triangle(10,10,10), 2);

}