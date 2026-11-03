#include <iostream>

using namespace std;
float d=1;
float Sum(float x){
    if(d==0.0 || d==0){
        return x;
    }
    else{
        cin>>d;
        return Sum(x+d);
    }
}
int main()
{
    float sum=0;
    cout << Sum(sum) << endl;
    return 0;
}
