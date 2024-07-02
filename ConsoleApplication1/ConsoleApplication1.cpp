#include <iostream>
using namespace std;

//int foo(int vet[], int n) {
//    if (n == 0) return 0;
//    return vet[n - 1] + foo(vet, n - 1);
//}

int main()
{
    int pp[4];
     pp[0] = 10;
     pp[1] = 20;
     pp[2] = 30;
     pp[3] = 50;

     int* ptr = pp;

      cout << "Valor de pp: \n" << pp[0] << endl;
      cout << "Valor de ptr: \n" << ptr << endl;
      cout << "Valor de ptr+0: \n" << ptr+0 << endl;
      cout << "Valor de pp[4]: \n" << pp+0 << endl;
      cout << "Valor de *pp: \n" << *pp << endl;
      cout << "Valor de &pp[0]: \n" << &pp[1] << endl;
     

    /*int n = 7;
    int vet[6] = { 1,2,3,4,5,6 };
    cout << foo(vet, n);
    return 0;*/
}

/* int vet[5] = { 1,2,3,4,5 };*/
 /* cout << "Valor de vet: \n" << vet << endl;*/

  //int* p = nullptr;
  /*cout << "Valor ponteiro: \n" << p << endl;*/
  /*cout << "Valor ponteiro *: \n" << *p << endl;*/
  /*cout << "Valor ponteiro &: \n" << &p << endl;*/

  //p = vet;
/*  cout << "Valor ponteiroVet: \n" << p << endl;
  cout << "Valor ponteiroVet *: \n" << *p << endl;*/
  /*  cout << "Valor ponteiroVet &: \n" << &p << endl;*/

    /*cout << "[indice]: \n" << 3 << endl;
    cout << "Vet[indice]: \n" << vet[3] << endl;
    cout << "p+[indice]: \n" << p+3 << endl;
    cout << "Vet[indice]: \n" << &vet[3] << endl;*/
    /* cout << endl;
     cout << "Vet+indice: \n" << vet+3 << endl;
     cout << "&Vet[3]: \n" << &vet[3] << endl;*/

