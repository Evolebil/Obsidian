#include <iostream>
#include <vector>

using namespace std;

struct GrowableVector {
    vector<double> data;

    double& operator[](size_t i) {
        if (i >= data.size()) {
            data.resize(i + 1, 0.0);
        }
        return data[i];
    }
};
class intersectingSequences{
private:
    struct threabonach
    {
        GrowableVector threa;
        double threA;
        double threB;
        double threC;
    };
    struct speral{
        GrowableVector sper;
        double sperStart;
        double sperStep;
    };
    threabonach tribData;
    speral spiralData;
public:

    // гетеры(вывод)
    double getThreA(){
        return tribData.threA;
    }
    double getThreB(){
        return tribData.threB;
    }
    double getThreC(){
        return tribData.threC;
    }
    double getSperStart(){
        return spiralData.sperStart;
    }
    double getSperStep(){
        return spiralData.sperStep;
    }

    // сеттеры(ввод)
    void setThreA(istream& input){
        input>>tribData.threA;
    }
    void setThreB(istream& input){
        input>>tribData.threB;
    }
    void setThreC(istream& input){
        input>>tribData.threC;
    }
    void setSperStart(istream& input){
        input>>spiralData.sperStart;
    }
    void setSperStep(istream& input){
        input>>spiralData.sperStep;
    }


    void reg(){

        tribData.threa[0]=tribData.threA;
        tribData.threa[1]=tribData.threB;
        tribData.threa[2]=tribData.threC;
        spiralData.sper[0]=spiralData.sperStart;
    }

    void regThreaBonach(int i){
        tribData.threa[i]=tribData.threA+tribData.threB+tribData.threC;
        tribData.threC=tribData.threa[i];
        tribData.threB=tribData.threa[i-1];
        tribData.threA=tribData.threa[i-2];
    }

    void regSperal(int i){
        spiralData.sper[i]=spiralData.sperStart+spiralData.sperStep;
        spiralData.sperStart+=spiralData.sperStep;
    }
    int getSizeSperal(int i){
        if(spiralData.sper[i]==0.0){
            return i;
        }
        else{
            return getSizeSperal(i+1);
        }
    }
    int getSizeThrea(int i){

        if(tribData.threa[i]==0.0){
            return i;
        }
        else{
            return getSizeThrea(i+1);
        }
    }
    double cycleSperal(int i, int j){
        if(i>=0 && j>=0 && tribData.threa[i]==spiralData.sper[j]){
            return tribData.threa[i];
        }
        else if(i >= 0){  // Изменил с i!=-1 на i>=0
            return cycleSperal(i-1, j);
        }
        else{
            return -1.0;
        }
    }

    double cycleThrea(int i, int j){
        if(i>=0 && j>=0 && tribData.threa[i]==spiralData.sper[j]){
            return tribData.threa[i];
        }
        else if(j >= 0){  // Изменил с j!=-1 на j>=0
            return cycleThrea(i, j-1);
        }
        else{
            return -1.0;
        }
    }
    double result(){
        int indexSperal=0, indexThrea=0;
        double resilt=0;
        indexSperal=getSizeSperal(indexSperal);
        indexThrea=getSizeThrea(indexThrea);
        if((tribData.threA<=0 || tribData.threA >=1000000) || (tribData.threB<=0 || tribData.threB >=1000000) || (tribData.threC <=0 || tribData.threC >=1000000) || (spiralData.sperStart <=0 || spiralData.sperStart >=1000000) || (spiralData.sperStep<=0 || spiralData.sperStep >=1000000)){
            return -1.0;
        }

        else{
            resilt = cycleThrea(0, 0);

            if(resilt>0.0){
                return resilt;
            }

            else{

                resilt = cycleSperal(indexThrea-1, indexSperal-1);
                
                if(resilt>0.0){
                    return resilt;
                }
                
                else{
                    indexSperal=getSizeSperal(indexSperal);
                    indexThrea=getSizeThrea(indexThrea);
                    regThreaBonach(indexThrea);
                    regSperal(indexSperal);
                    return result();
                }

            }
        }

    }
};

int main()
{
    intersectingSequences overPawer;
    double resultFinall;
    
    cout<<"Введите 3 числа Трибоначи: "<<endl;

    overPawer.setThreA(cin);
    overPawer.setThreB(cin);
    overPawer.setThreC(cin);

    cout<<"Введите начальное значение и шаг Сперали:"<<endl;

    overPawer.setSperStart(cin);
    overPawer.setSperStep(cin);

    if((overPawer.getThreA()<=0 || overPawer.getThreA() >=1000000) || (overPawer.getThreB()<=0 || overPawer.getThreB() >=1000000) || (overPawer.getThreC() <=0 || overPawer.getThreC() >=1000000) || (overPawer.getSperStart()<=0 || overPawer.getSperStart() >=1000000) || (overPawer.getSperStep()<=0 || overPawer.getSperStep() >=1000000)){
        cout<<"ERROR"<<endl;
    }
    
    else{

        overPawer.reg();
        resultFinall=overPawer.result();
    
        if(resultFinall<0){
            cout<<"No"<<endl;
        }
    
        else {
            cout<<"Первые числа которые пересеклись: "<<endl;
            cout<<resultFinall<<endl;
        }
    }


    return 0;
}
