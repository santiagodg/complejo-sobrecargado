
/**
 * Escribe una aplicación main.cpp que tenga un menú con lo siguiente:
 * Previo al menu declarar Complejo C1 y C2
 * 1.  Dar de alta C1 (Utilizar >>)
 * 2.  Dar de alta C2 (Utilizar >>)
 * 3.  Imprime C1
 * 4.  Imprime C2
 * 5.  Suma de Complejos (Mostrar el resultado con <<)
 * 6.  Resta de Complejos (Mostrar el resultado con <<)
 * 7.  Comparar C1 > C2 (Mostrar true o false)
 * 8.  Comparar C1 < C2 (Mostrar true o false)
 * 9.  Comparar C1 >= C2 (Mostrar true o false)
 * 10. Comparar C1 <= C2 (Mostrar true o false)
 * 11. Comparar C1 == C2 (Mostrar true o false)
 * 12. Comparar C1 != C2 (Mostrar true o false)
 * 13. Aumentar C1 con ++ (Mostrar el resultado con <<)
 * 14. Disminuir C2 con -- (Mostrar el resultado con <<)
 * 15. Sumar C1 += C2 (Mostrar el resultado con <<)
 * 16. Restar C2 -= (Mostrar el resultado con <<)
 * 17. Terminar
 */

#include "Complejo.h"

#include <iostream>
using namespace std;

int main()
{
	Complejo C1, C2;
	int iOpcion;
	do {
		cout << "        MENU" << endl;
		cout << "1.  Dar de alta C1" << endl;
		cout << "2.  Dar de alta C2" << endl;
		cout << "3.  Imprime C1" << endl;
		cout << "4.  Imprime C2" << endl;
		cout << "5.  Suma de Complejos" << endl;
		cout << "6.  Resta de Complejos" << endl;
		cout << "7.  Comparar C1 > C2" << endl;
		cout << "8.  Comparar C1 < C2" << endl;
		cout << "9.  Comparar C1 >= C2" << endl;
		cout << "10. Comparar C1 <= C2" << endl;
		cout << "11. Comparar C1 == C2" << endl;
		cout << "12. Comparar C1 != C2" << endl;
		cout << "13. Aumentar C1 con ++" << endl;
		cout << "14. Disminuir C2 con --" << endl;
		cout << "15. Sumar C1 += C2" << endl;
		cout << "16. Restar C2 -= C1" << endl;
		cout << "17. Terminar" << endl;
		cout << "Ingrese la opcion deseada: ";
		cin >> iOpcion;
		switch (iOpcion)
		{
			case 1:
				cin >> C1;
				break;
			case 2:
				cin >> C2;
				break;
			case 3:
				cout << C1 << endl;
				break;
			case 4:
				cout << C2 << endl;
				break;
			case 5:
				cout << C1 + C2 << endl;
				break;
			case 6:
				cout << C2 - C1 << endl;
				break;
			case 7:
				cout << (C1 > C2 ? "true" : "false") << endl;
				break;
			case 8:
				cout << (C1 < C2 ? "true" : "false") << endl;
				break;
			case 9:
				cout << (C1 >= C2 ? "true" : "false") << endl;
				break;
			case 10:
				cout << (C1 <= C2 ? "true" : "false") << endl;
				break;
			case 11:
				cout << (C1 == C2 ? "true" : "false") << endl;
				break;
			case 12:
				cout << (C1 != C2 ? "true" : "false") << endl;
				break;
			case 13:
				C1++;
				cout << C1 << endl;
				break;
			case 14:
				C2--;
				cout << C2 << endl;
				break;
			case 15:
				C1 += C2;
				cout << C1 << endl;
				break;
			case 16:
				C2 -= C1;
				cout << C2 << endl;
				break;
			case 17:
				break;
			default:
				cout << "Opcion invalida. Ingrese otra opcion: " << endl;
				cin >> iOpcion;
				break;
		}
	} while (iOpcion != 17);
	return 0;
}
