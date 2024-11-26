#include <iostream>
#include <fstream>
#include <string>
#include <vector>


using namespace std;

void f1(){
    string m,n;
    vector <string> array(3);
    ifstream in ("lala.txt");
    if (in.is_open()){
            in >> m >> n;
            array[0] = m;
            array[1] = n;
    }
}
void f2(){
    }
void f3(){
    }

int main()
{
    void f1();
    void f2();
    void f3();
    return 0;
}
