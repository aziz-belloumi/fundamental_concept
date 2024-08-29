#include <iostream>
bool isPrimeFirstVersion(int number){
    if(number < 2) return false;
    if(number == 2) return true;
    if(number % 2 == 0) return false;
    for(int i=3; (i*i)<=number; i+=2){
        if(number % i == 0 ) return false;
    }
    return true;
}
bool isPrimeSecondVersion(int number){
    if (number != 2){
        if (number < 2 || number % 2 == 0) {
            return false;
        }
        for(int i=3; (i*i)<=number; i+=2){
            if(number % i == 0 ){
                return false;
            }
        }
    }
    return true;
}
bool isPrimeThirdVersion(int number){
    for(int i=1; i<number; i++){
        if(number%i!=0) {
            return false ;
        }
        else {
            return true ;
        }

    }
}
int main() {
    isPrimeFirstVersion(3) ? std::cout << "prime number" << std::endl : std::cout << "not prime number" << std::endl;
    isPrimeSecondVersion(3) ? std::cout << "prime number" << std::endl : std::cout << "not prime number" << std::endl;
    isPrimeThirdVersion(3) ? std::cout << "prime number" << std::endl : std::cout << "not prime number" << std::endl;
    return 0;
}