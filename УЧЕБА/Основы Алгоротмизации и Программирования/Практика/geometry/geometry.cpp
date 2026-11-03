#include "geometry.h"

double area_circle(double radius){
    if(radius<=0){
        return -1;
    }
    else{
        return PI * radius * radius;
    }

}
double area_rectangle(double width, double height){
    if (width <= 0 || height <= 0) return -1;
    return width*height;
}
double area_triangle(double a, double b, double c){
    if (a <= 0 || b <= 0 || c <= 0) return -1;
    if (a + b <= c || a + c <= b || b + c <= a) return -1;
    double p=(a+b+c)/2.0;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
