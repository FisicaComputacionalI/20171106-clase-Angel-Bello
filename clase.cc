#include <iostream>
using namespace std;
int main ()
{
  char<<variable;
  cout<<"Escoge una opcion entre A,B,C,D,F"<<endl;
  cin>>variable;
  varible=touper(variable);
    switch (variable)
      {
       case 'A':
	 cout<<"Excelente"<<endl;
	 break;
       case 'B':
	 cout<<"Muy bien"<<endl;
	 break;
       case 'C':
	 cout<<"Bien"<<endl;
	 break;
       case 'D':
	 cout<<"Pasaste"<<endl;
	 break;
      case 'F':
	cout<<"Intentalo Nuevamente"<<endl;
       default: 
	 cout<<"Opcion no valida"<<endl;
      }
return 0;
}
