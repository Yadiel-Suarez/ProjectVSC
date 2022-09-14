#include "include/triangle.h"

Triangle::Triangle(int s1, int s2, int s3){
    this->side1 = s1;
    this->side2 = s2;
    this->side3 = s3;
}

double Triangle::getArea() const{
    double s = (this->side1 + this->side2 + this->side3) / 2.0;
    double area = sqrt(s * (s - this->side1) * (s - this->side2) * (s - this->side3));
    return area;
}

bool Triangle::hasLargerArea(Triangle t2){
    return (this->getArea() > t2.getArea());
}

double Triangle::sumOfAreas(const vector<Triangle> &triangles){
    double result = 0;
    for (int i = 0; i < triangles.size(); i++)
        result += triangles[i].getArea();
    return result;
}

//Declaracion de funcion con argumento (double scale)
Triangle Triangle::scale(double scale){ 
    return Triangle(this->side1 * scale, this->side2 * scale, this->side3 * scale);
} 
Triangle Triangle::scale(){ 
    return this->scale(2);
} 

void Triangle::scaleMultiple(vector <Triangle> &triangles, double scaleFactor){
    for(int i = 0; i < triangles.size(); i++){
        triangles[i] = triangles[i].scale(scaleFactor);
    }
}