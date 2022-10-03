#include <cstdlib>
#include <iostream>
#include <new>

using namespace std;

class Sucesion
{
	private:
		int p,x,l;
		int *A1,*A2;
	
	public:	
		Sucesion(int to){l=to; p=8;x=11;A1 = new int [to];A2 = new int [to];};
		int sucesionIterativa(int l);
		int sucesionRecursiva(int l);
		void Liberar();
		void visualizarI();
		void visualizarR();
};

int Sucesion::sucesionIterativa(int l)
{
	for(int i=0; i<l;i++)
	{
		p=p-x;
		A1[i]=p;
 	}
}

int Sucesion::sucesionRecursiva(int l)
{
	if(l==1)
	{
	return l=-3;
	}
	else
	{
	return l=-x+sucesionRecursiva(l-1);
	}
}

void Sucesion::visualizarI()
{
    cout<< "Vectores:" <<endl;
    for (int i=0;i<l;i++)
    {
    cout<< A1[i]<<endl;
    }
}

void Sucesion::visualizarR()
{
    cout<< "Vectores:" <<endl;
    for(int i=1; i<=l;i++)
		{
			A2[i]=sucesionRecursiva(i);
			cout<<A2[i]<<endl;
		}
}

void Sucesion::Liberar() 
{
   delete [] A1;
   delete [] A2;
}
