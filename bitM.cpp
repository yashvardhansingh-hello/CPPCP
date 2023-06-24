#include<iostream>
using namespace std;

int getBit(int n, int pos){
    return (n & (1<<pos) != 0);
}

void setBit(int* n, int pos){
    *n = (*n | (1<<pos));
}

void clearBit(int* n, int pos){
    *n = (*n & (~(1<<pos)));
}

int main() {
    int n = 2;
    setBit(&n, 0);
    cout<<n;
    return 0;
}