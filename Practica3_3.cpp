#include <iostream>

using namespace std;

int main (){
    int d,m,a;
    bool ultimoDia;
    cout << "Introduce la fecha, siguiendo dia/mes/año";
    cin >> d >> m >> a;
    if (a%4==0){
        switch (m) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                if (d==31) {ultimoDia = 1;}
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                if (d==30) {ultimoDia = 1;}
                break;
            case 2:
                if (d==29) {ultimoDia = 1;}
                break;
        }
            }
        else {
                switch (m) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                if (d==31) {ultimoDia = 1;}
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                if (d==30) {ultimoDia = 1;}
                break;
            case 2:
                if (d==28) {ultimoDia = 1;}
                break;
            }
    }
         if (not ultimoDia) {d=d+1;}
       else if (not (m==12)) {d=1; m=m+1;}
            else {d=1;m=1;a=a+1;}
    cout << "El dia siguiente es: " << d <<" "<< m <<" "<< a << endl;
    return 0;
}

//Programa realizado por Daniel Valera Tebas en 1º de Ingeniería Informática.
