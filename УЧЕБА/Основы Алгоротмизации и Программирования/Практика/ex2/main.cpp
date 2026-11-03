#include <iostream>

using namespace std;

struct sum
{
    struct distunce1{
        float m1;
        float stopa1;
    }d1;
    struct distunce2{
        float m2;
        float stopa2;
    }d2;
    float sumOfDistance(float x1, float x2){
        return x1+x2;
    }
}s;

int main()
{
    cin>>s.d1.m1;
    cin>>s.d1.stopa1;
    cin>>s.d2.m2;
    cin>>s.d2.stopa2;
    cout<<s.sumOfDistance(s.d1.m1, s.d2.m2)<<endl;
    cout<<s.sumOfDistance(s.d1.stopa1, s.d2.stopa2)<<endl;

    return 0;
}
