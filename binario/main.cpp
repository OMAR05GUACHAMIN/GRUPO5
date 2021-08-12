#include <iostream>
using namespace std;
#include <fstream>
#define TAM 50


void Busqueda (int a[],int n,int dato);
void Burbuja (int a[],int n);

int main()
{
    int x,y,z;


    cout<<"ingrese el numero del arreglo: ";
    cin>>x;
    int k[x];

        for(int i=0; i<x; i++)
    {
        cout<<"ingrese el numero"<<" "<<i+1<<" :";
        cin>>k[i];

    }

    cout<<"ingrese el numero que quiere buscar: ";
    cin>>z;

    Burbuja(k,x);
    Busqueda(k,x,z);

    return 0;
}

void Burbuja (int a[],int n)
{
    int aux;
    for (int i=0 ; i<n ; i++)
    {
        for(int j=i+1 ; j<n ; j++)
        {
            if(a[j]<a[i])
            {
                aux=a[i];

                a[i]=a[j];

                a[j]=aux;

            }

        }
    }
}



void Busqueda(int a[],int n,int dato)
{
    ofstream Binario;
    int i,j,k;
    Binario.open("Binario.txt",ios::app);
    i=0;
    j=n-1;

    do
    {
        k=(i+j)/2;
        if(a[k]<=dato)
        {
            i=k+1;
        }
        if (a[k]>=dato)
        {
            j=k-1;
        }
    }
    while (i<=j);

    if(a[k]==dato)
    {
        cout <<"\nElemento encontrado en la posicion:"<<k+1<<endl;
        Binario<<"\nElemento encontrado en la posición:"<<k+1<<endl;
    }
    else
    {
        cout <<"\nElemento no encontrado"<<endl;
        Binario <<"\nElemento no encontrado :"<<endl;
    }

}


