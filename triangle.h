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
};