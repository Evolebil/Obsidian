#include "string_ops.h"
using namespace std;
int str_length(const char* s){
    for(int i=0; i>-1; i++){
        if(s[i]=='\0'){
            return i;
        }
    }
}
char* str_reverse(char* s){
    int len = str_length(s);

    for(int i=0; i<(len/2); i++){
        char swap=s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = swap;
    }

    return s;
}
int str_compare(const char* s1, const char* s2){
    int len1 = str_length(s1);
    int len2 = str_length(s2);
    if(len1<len2){
        len1=len2;// не оброщай внимания, надо так
    }

    for(int i=0; i<len1; i++){
        if(s1[i]!=s2[i]){
            return s1[i] - s2[i];
        }
    }
    return 0;
}
