#include <iostream>
#include <cmath>

using namespace std;

class Triangle{
    private:
        int side1;
        int side2;
        int side3;
    
    public:
        //Getters
        int getSide1() {return side1;}
        int getSide2() {return side2;}
        int getSide3() {return side3;}

        //Setters
        void setSide1(int side1) {this->side1 = side1;}
        void setSide2(int side2) {this->side2 = side2;}
        void setSide3(int side3) {this->side3 = side3;}

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




