#include <iostream>
using namespace std;
int main()
{
  float exam;
  float part;
  float tare;
  float cali;
  int caso;
  cout<<"Este es un programa para obtener la calificacion final del curso Fisica Computacional 1."<<endl;
  cout<<"Tiene tres opciones para obtener la calificación."<<endl;
  cout<<"El caso 1: Cuando en el examen se obtuvo una calificación mayor a ocho."<<endl;
  cout<<"El caso 2: Cuando en el examen se obtuvo una calificacion menor igual a ocho y no tiene tareas ni participaciones"<<endl;
  cout<<"El caso 3: Cuando en el examen se obtuvo una calificacion menor igual a ocho y tiene tareas y particiapaciones"<<endl;
  cout<<"Escoja una opcion ya sea la 1, 2 o 3"<<endl; 
  cin>>caso;
  switch (caso)
    {
    case 1:
      cout<<"Deme la calificacion de examen."<<endl;
      cin>>cali;
      cout<<"Deme la calificacion correspondiente a el numero de participaciones."<<endl;
      cin>>part;
      cout<<"Deme la calificacion correspondiente a el numero de tareas."<<endl;
      cin>>tare;
      cali=exam*0.7+part*0.15+tare*0.15;
      cout<<"Su califiacion es: "<<cali;
      break;
    case 2:
      cout<<"Deme la calificacion de examen."<<endl;
      cin<<exam;
      cout<<"Su calificacion es: "<<cali;
      break;
    case 3
      cout<<"Deme la calificacion de examen."<<endl;
    cincout<<"Deme la calificacion de examen."<<endl;
    cin>>cali;
    cout<<"Deme la calificacion correspondiente a el numero de participaciones."<<endl;
    cin>>part;
    cout<<"Deme la calificacion correspondiente a el numero de tareas."<<endl;
    cin>>tare;
    cali=exam*0.7+part*0.15+tare*0.15;
    break;
   }
  return 0;
}
