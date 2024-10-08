#include <iostream>

using namespace std;


void swap(int& a ,int &b){
int c = a;
a = b;
b = c ;
}

int main(){

int a,b;
cin>>a>>b;

int &ref1 = a;
int &ref2 = b;


swap(ref1 , ref2);
cout<<"resultat:"<<ref1<<" "<<ref2;


    return 0;
}
