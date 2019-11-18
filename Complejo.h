
/**
 * Escribe la clase Complejo:
 * - Esta clase tiene como atributos iReal e iImaginario. Ambos son enteros.
 * - Crea un constructor default que asigne el complejo 0 + 0i
 * - Crea un constructor que reciba ambos números real e imaginario.
 * - Agrega los métodos de acceso y modificación para ambos atributos.
 * - Crea los métodos que sobrecarguen los siguientes operadores:
 *   +, -, <, >, <=, >=, ==, !=, ++, --, +=, -=, <<, >>
 * - Al utilizar los operadores relacionales toma en cuenta lo siguiente:
 *   -    4 + 1i > 4 + 2i   === false
 *   -    4 + 1i > 4 + 0i   === true
 *   -    4 + 1i > 4 + 1i   === false
 *   -    5 + 1i > 4 + 2i   === true
 * - El operador de ++ debe de aumentar una unidad a ambas partes real e
 *   imaginaria.
 * - El operador de -- debe de restar una unidad a ambas partes real e
 *   imaginaria.
 * - El operador >> pide al usuario primero el numero real seguido del numero
 *   imaginario
 * - El operador << imprime el número Complejo en formato
 *   iReal +/- iImaginario i   Ejemplo 1: 4 - 5 i    Ejemplo 2: 6 + 7 i
 */

#ifndef COMPLEJO_H
#define COMPLEJO_H

#include <iostream>
using namespace std;

class Complejo
{
	private:
		int iReal;
		int iImaginario;

	public:
		Complejo();
		Complejo(int,int);

		int getReal();
		int getImaginario();
		void setReal(int);
		void setImaginario(int);

		Complejo operator+(Complejo);
		Complejo operator-(Complejo);
		bool operator<(Complejo);
		bool operator>(Complejo);
		bool operator<=(Complejo);
		bool operator>=(Complejo);
		bool operator==(Complejo);
		bool operator!=(Complejo);
		void operator++(int);
		void operator--(int);
		void operator+=(Complejo);
		void operator-=(Complejo);
		friend ostream& operator<<(ostream&, Complejo);
		friend istream& operator>>(istream&, Complejo&);
};

Complejo::Complejo()
{
	iReal = 0;
	iImaginario = 0;
}

Complejo::Complejo(int iR, int iI)
{
	iReal = iR;
	iImaginario = iI;
}

int Complejo::getReal()
{
	return iReal;
}

int Complejo::getImaginario()
{
	return iImaginario;
}

void Complejo::setReal(int iR)
{
	iReal = iR;
}

void Complejo::setImaginario(int iI)
{
	iImaginario = iI;
}

Complejo Complejo::operator+(Complejo c)
{
	int iR = iReal + c.getReal();
	int iI = iImaginario + c.getImaginario();
	return Complejo(iR, iI);
}

Complejo Complejo::operator-(Complejo c)
{
	int iR = iReal - c.getReal();
	int iI = iImaginario - c.getImaginario();
	return Complejo(iR, iI);
}

bool Complejo::operator<(Complejo c)
{
	if (iReal < c.getReal())
	{
		return true;
	}
	else if (iReal == c.getReal())
	{
		if (iImaginario < c.getImaginario())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}

bool Complejo::operator>(Complejo c)
{
	if (iReal > c.getReal())
	{
		return true;
	}
	else if (iReal == c.getReal())
	{
		if (iImaginario > c.getImaginario())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}

bool Complejo::operator<=(Complejo c)
{
	if (*this < c || *this == c)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Complejo::operator>=(Complejo c)
{
	if (*this > c || *this == c)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Complejo::operator==(Complejo c)
{
	if (iReal == c.getReal() && iImaginario == c.getImaginario())
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Complejo::operator!=(Complejo c)
{
	return !(*this == c);
}

void Complejo::operator++(int)
{
	++iReal;
	++iImaginario;
}

void Complejo::operator--(int)
{
	--iReal;
	--iImaginario;
}

void Complejo::operator+=(Complejo c)
{
	iReal += c.getReal();
	iImaginario += c.getImaginario();
}

void Complejo::operator-=(Complejo c)
{
	iReal -= c.getReal();
	iImaginario -= c.getImaginario();
}

ostream& operator<<(ostream &os, Complejo c)
{
	os << c.getReal();
	if (c.getImaginario() >= 0)
	{
		os << " + " << c.getImaginario() << " i";
	}
	else if (c.getImaginario() < 0)
	{
		os << " - " << c.getImaginario() * -1 << " i";
	}
	return os;
}

istream& operator>>(istream &is, Complejo &c)
{
	cout << "Real: ";
	is >> c.iReal;
	cout << "Imaginario: ";
	is >> c.iImaginario;
	return is;
}

#endif
