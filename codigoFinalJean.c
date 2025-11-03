#include <stdbool.h>

bool lemonadeChange(int* bills, int billsSize) {
    int cincoCont=0, dezCont=0;
    int i;

    for ( i = 0; i < billsSize ; i++ ){

        int atual = bills[i];
        
        if ( atual == 5 ) {
            cincoCont++;
        } else if ( atual == 10 ){

            if (cincoCont > 0){
            cincoCont--;
            dezCont++;
        } else {
            return false;
        }
    }
        else if ( atual == 20) {
            if ( cincoCont > 0 && dezCont > 0) {
                dezCont--;
                cincoCont--;
            } else if ( cincoCont >= 3) {
                cincoCont -=3;
            } else {
                return false;
            }
        }
    }
    return true;
}
