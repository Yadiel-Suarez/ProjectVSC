#include <iostream>
#include <cmath>

using namespace std;

class Triangle{
    public:
        int side1;
        int side2;
        int side3;

        Triangle(int s1, int s2, int s3){
            this->side1 = s1;
            this->side2 = s2;
            this->side3 = s3;
        }

        double getArea(){
            double s = (this->side1 + this->side2 + this->side3)/2.0;
            double area = sqrt(s * (s-this->side1) * (s-this->side2) * (s-this->side3));
            return area;
        }
        bool hasLargerArea(Triangle t2){
            return (this->getArea() > t2.getArea());
        }
        double sumOfAreas(Triangle triangles[], int size){
            double result = 0;
            for (int i = 0; i < size; i++)
                result += triangles[i].getArea();
            return result;
        }
        Triangle scale(double scale){
            return Triangle(this->side1 * scale, this->side2 * scale, this->side3 * scale);
        }
};




Triangle scale(Triangle original, double scale){
    return Triangle(original.side1*scale, original.side2*scale, original.side3*scale);
}