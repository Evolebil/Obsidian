#include "string_ops.h"

using namespace std;

int main()
{
    char s1[100], s2[100];
    cin>> s1 >> s2;
    cout<<str_length(s1)<<endl;
    cout<<str_reverse(s1)<<endl;
    cout<<str_compare(s1, s2)<<endl;
    cout<<"OVER"<<endl;
    return 0;
}
