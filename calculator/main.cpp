#include <iostream>
#include <getopt.h>
#include <cmath>
#define PI 3.14159265

using namespace std;

int main(int argc, char *argv[])
{

	{ if (argc==1)
    {
        cout<<"КАЛЬКУЛЯТОР"<< endl<< "Чтобы выбрать действие, нужно ввести один из параметров:" << endl<< "-s — вычисление арксинуса значениe" << endl << "-c — вычисление арккосинуса значения"<< endl << "Для того чтобы продолжить запустите программу еще раз с нужным параметром и введите одно значения через пробел"<< endl<<"Значение должно быть от -1 до 1 включительно"<<endl;
    }        
int opt, i = 0;
	while ((opt = getopt (argc, argv, "s:c:")) != -1)
        {
            switch (opt)
            {
                case 's':{
                    
        			 for(i = 0; i<argc; i++)
   			 		{
        				cout<< i << ": "<< argv[i] << endl;
                    
        			}
                    if (i<4){
                    long double n = stold(argv[2]);//число которое ввели в терминале для функции
                    if (n<=1){cout<<"Результат:"<<asin(n)<<"-радиан   "<<asin(n)*180 / PI<<"-градусов"<<endl;}
                    else{cout<<"Error"<<endl;}}
                    else{cout<<"Error";}
                break; 
                }
               	case 'c':
                     for(i = 0; i<argc; i++)
   			 		{
        				cout<< i << ": "<< argv[i] << endl;
        			}
                    if (i<4){
                    long double n = stold(argv[2]);//число которое ввели в терминале для функции
                    if (n<=1){cout<<"Результат:"<<acos(n)<<"-радиан   "<<acos(n)*180 / PI<<"-градусов"<<endl;}
                    else{cout<<"Error"<<endl;}}
                    else{cout<<"Error";}
                break;       
            } 
        }
    }
}