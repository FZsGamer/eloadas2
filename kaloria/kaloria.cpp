#include <iostream>
int main(){
    using namespace std;
    struct emberek{
        int kor;
        double testsuly;
        double magassag;
        string nem;
        double kaloria;
    };
    emberek ember1;
    emberek ember2;
    ember1.kor=19;
    ember2.kor=25;
    ember1.testsuly=94.5;
    ember2.testsuly=60;
    ember1.magassag=182;
    ember2.magassag=160;
    ember1.nem="ferfi";
    ember2.nem="no";
    if(ember1.nem=="ferfi"){
        ember1.kaloria=((10*ember1.testsuly)+(6.25*ember1.magassag)-(5*ember1.kor)+5)*1.2;
    }else{
        ember1.kaloria=((10*ember1.testsuly)+(6.25*ember1.magassag)-(5*ember1.kor)-161)*1.2;
    }
    if(ember2.nem=="ferfi"){
        ember2.kaloria=((10*ember2.testsuly)+(6.25*ember2.magassag)-(5*ember2.kor)+5)*1.2;
    }else{
        ember2.kaloria=((10*ember2.testsuly)+(6.25*ember2.magassag)-(5*ember2.kor)-161)*1.2;
    }
    cout<<"1."<<" "<<ember1.kaloria<<" "<<"kcal"<<endl;
    cout<<"2."<<" "<<ember2.kaloria<<" "<<"kcal"<<endl;


    return 0;

}
