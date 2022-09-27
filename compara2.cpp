//Examen Primer Parcial Programacion...
//Nombre:Montaño Jaen Fausto
//Curso: 1ro "B" Tics

// Programa que permite al usuario determinar si un numero es mayor, menor o igual que el otro numero
#include<iostream>
using namespace std;
int main()
{
        //Se declaran las variables
  float f,t;
  cout<<"Por favor Usuario Ingrese el primero numero en f  : "; cin>>f;
  cout<<"Por favor Usuario Ingrese el segundo numero  en  t  : "; cin>>t;

  // se declara if para confirmar si el numero es igual o no
  if(f==t)
  {
     cout<<"Son numeros Iguales "<<endl;
  }
  else                               // se declara el if para comprobar los menores de las cantidades
  {
     if(f<t)
     {
	     cout<<f<<" Es Menor que "<<t<<"\n";
    }
     else
     {
       cout<<t<<" Es Menor que  "<<f<<"\n";
     }
  }

return (0);
}

//Se acaba el programa y se da por finalizado
//2022/09

