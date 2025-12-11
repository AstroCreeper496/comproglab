#include <iostream>
#include <cmath>

using namespace std;

double deg2rad(double deg){
    return deg / 360 *2 * M_PI;
}

double findXComponent(double size1, double size2, double arc1, double arc2){
    double x1 = size1 * cos(arc1);
    double x2 = size2 * cos(arc2);
    return x1 + x2;
}

double findYComponent(double size1, double size2, double arc1, double arc2){
    double y1 = size1 * sin(arc1);
    double y2 = size2 * sin(arc2);
    return y1 + y2;
}

double pythagoras(double arg1,double arg2){
    return sqrt(pow(arg1,2)+pow(arg2,2));
}

double rad2deg(double rad){
    double deg = rad * 360 /2 / M_PI;   
    return deg;
}
    
void showResult(double result_vec_length,double result_vec_direction){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "Length of the resultant vector = "<< result_vec_length<<"\n";
    cout << "Direction of the resultant vector (deg) = "<< result_vec_direction<<"\n";
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 
    showResult(result_vec_length,result_vec_direction);
}
