#include "hw7.h"

bool int_perf(int num){
    int sum = 0;
    sum = 0;

    for(int i = 1; i <= num/2; i++){
        if (num % i == 0){
            sum += i;
        }
    }

    return sum == num;

}

int print(vector<int> &vect){

    int sum;
    sum = 0;
 
    for_each(vect.begin(), vect.end(), [&](int num){
        if (int_perf(num) == true){
            sum += 1;
        }
    });

    return sum;

};
