#include <iostream>
#include <cmath>

using namespace std;

double getArea(int s1, int s2, int s3){
    double s = (s1 + s2 + s3)/2;
    double area = sqrt(s * (s-s1) * (s-s2) * (s-s3));
    return area;
}

int main(){
    double areaResult = getArea(10,10,10);
    cout << "Area of triangle is: " << areaResult << endl;

    areaResult = getArea(20,20,30);
    cout << "Area of triangle is: " << areaResult << endl;

}