#include "converter.h"

double celsius_to_fahrenheit(double c){
    return c * 9.0 / 5.0 + 32.0;
}
double km_to_miles(double km){
    return km*0.621371;
}
double bytes_to_mb(double bytes){
    return bytes/1048576.0;
}
