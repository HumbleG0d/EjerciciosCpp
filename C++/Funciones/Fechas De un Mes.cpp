#include<iostream>
#include<iomanip>
using namespace std;  //Profesor No pude elimnar los ceros de este programa.
                      //En el ejercicio 4 dice respecto al ejercicio 5 pero no hay ejercicio 5.

const int Tamano = 40;
void Monstras_Matriz(double Mat[Tamano][Tamano],int F,int C);
void Llenar_Matriz(double Mat[Tamano][Tamano], int F, int C);

int cont = 1;
int main() {
	int Fila, Columna;
	double M[Tamano][Tamano];
	Fila = 5;
	Columna = 7;
	Llenar_Matriz(M, Fila, Columna);
	cout << "Calendario del mes digitado:" << endl;
	Monstras_Matriz(M, Fila, Columna);
	return 0;
}
void Llenar_Matriz(double Mat[Tamano][Tamano], int F, int C) {
	int n, a, m, d = 1, DiaSemana; //Mes :Enero=1,Febero=2.......Diciembre=12
	do {
		cout << "Digite el alo:"; cin >> a;
		cout << "Digite el mes:"; cin >> m;
	} while (a<=0||m<=0);
	if (m >=1 && m <= 2) {
		n = a + 31 * (m - 1) + (d * (a - 1) / 4) - 3 * (((a + 99) / 100) / 4);
		DiaSemana = n % 7;
		cout << "Dia de la semana:" << DiaSemana << endl;
	}
	else if (m >= 3 && m <= 12) {
		n = a + 31 * (m - 1) + d - ((4 * m + 23) / 10) + (a / 4) - ((3 * (a / 100 + 1)) / 4);
		DiaSemana = n % 7;
		cout << "Dia de la semana:" << DiaSemana << endl;
	}
	if (m == 1||m==3||m==5||m==7||m==8||m==10||m==12) {
		if (DiaSemana == 1) {
			int suma = 1;
			for (int i = 0; i < F; i++) {
				for (int j = 0; j < C; j++) {
					if (suma <= 31) {
						Mat[i][j] = suma;
						suma++;
					}
				}
			}
		}
		else if (DiaSemana == 2) {
			int suma = 7;
			for (int i = 1; i < F; i++) {
				for (int j = 0; j < C; j++) {
					if (cont == 1 || cont == 2 || cont == 3 || cont == 4 || cont == 5 || cont == 6) {
						Mat[0][1] = 1;
						Mat[0][2] = 2;
						Mat[0][3] = 3;
						Mat[0][4] = 4;
						Mat[0][5] = 5;
						Mat[0][6] = 6;
					}
					if (suma <= 31) {
						Mat[i][j] = suma;
						suma++;
						cont++;
					}
				}
			}
		}
		else if (DiaSemana == 3) {
			int suma = 6;
			for (int i = 1; i < F; i++) {
				for (int j = 0; j < C; j++) {
					if (cont == 1 || cont == 2 || cont == 3 || cont == 4 || cont == 5 || cont == 6) {
						Mat[0][2] = 1;
						Mat[0][3] = 2;
						Mat[0][4] = 3;
						Mat[0][5] = 4;
						Mat[0][6] = 5;
					}
					if (suma <= 31) {
						Mat[i][j] = suma;
						suma++;
						cont++;
					}
				}
			}
		}
		else if (DiaSemana == 4) {
			int suma = 5;
			for (int i = 1; i < F; i++) {
				for (int j = 0; j < C; j++) {
					if (cont == 1 || cont == 2 || cont == 3 || cont == 4 || cont == 5 || cont == 6) {
						Mat[0][3] = 1;
						Mat[0][4] = 2;
						Mat[0][5] = 3;
						Mat[0][6] = 4;
					}
					if (suma <= 31) {
						Mat[i][j] = suma;
						suma++;
						cont++;
					}
				}
			}
		}
		else if (DiaSemana == 5) {
			int suma = 4;
			for (int i = 1; i < F; i++) {
				for (int j = 0; j < C; j++) {
					if (cont == 1 || cont == 2 || cont == 3 || cont == 4 || cont == 5 || cont == 6) {
						Mat[0][4] = 1;
						Mat[0][5] = 2;
						Mat[0][6] = 3;
					}
					if (suma <= 31) {
						Mat[i][j] = suma;
						suma++;
						cont++;
					}
				}
			}
		}
		else if (DiaSemana == 6) {
			int suma = 3;
			for (int i = 1; i < F; i++) {
				for (int j = 0; j < C; j++) {
					if (cont == 1 || cont == 2 || cont == 3 || cont == 4 || cont == 5 || cont == 6) {
						Mat[0][5] = 1;
						Mat[0][6] = 2;
					}
					if (suma <= 31) {
						Mat[i][j] = suma;
						suma++;
						cont++;
					}
				}
			}
		}
		else if (DiaSemana == 7) {
			int suma = 2;
			for (int i = 1; i < F; i++) {
				for (int j = 0; j < C; j++) {
					if (cont == 1 || cont == 2 || cont == 3 || cont == 4 || cont == 5 || cont == 6) {
						Mat[0][6] = 1;
					}
					if (suma <= 31) {
						Mat[i][j] = suma;
						suma++;
						cont++;
					}
				}
			}
		}
	}
	else if (m == 2) {
		  if (DiaSemana == 1) {
			int suma = 1;
			for (int i = 0; i < F; i++) {
				for (int j = 0; j < C; j++) {
					if (suma <= 29) {
						Mat[i][j] = suma;
						suma++;
					}
				}
			}
		}
		else if (DiaSemana == 2 && a%4==0) {
			int suma = 7;
			for (int i = 1; i < F; i++) {
				for (int j = 0; j < C; j++) {
					if (cont == 1 || cont == 2 || cont == 3 || cont == 4 || cont == 5 || cont == 6) {
						Mat[0][1] = 1;
						Mat[0][2] = 2;
						Mat[0][3] = 3;
						Mat[0][4] = 4;
						Mat[0][5] = 5;
						Mat[0][6] = 6;
					}
					if (suma <= 29) {
						Mat[i][j] = suma;
						suma++;
						cont++;
					}
				}
			}
		}
		else if (DiaSemana == 3) {
			int suma = 6;
			for (int i = 1; i < F; i++) {
				for (int j = 0; j < C; j++) {
					if (cont == 1 || cont == 2 || cont == 3 || cont == 4 || cont == 5 || cont == 6) {
						Mat[0][2] = 1;
						Mat[0][3] = 2;
						Mat[0][4] = 3;
						Mat[0][5] = 4;
						Mat[0][6] = 5;
					}
					if (suma <= 29) {
						Mat[i][j] = suma;
						suma++;
						cont++;
					}
				}
			}
		}
		else if (DiaSemana == 4) {
			int suma = 5;
			for (int i = 1; i < F; i++) {
				for (int j = 0; j < C; j++) {
					if (cont == 1 || cont == 2 || cont == 3 || cont == 4 || cont == 5 || cont == 6) {
						Mat[0][3] = 1;
						Mat[0][4] = 2;
						Mat[0][5] = 3;
						Mat[0][6] = 4;
					}
					if (suma <= 29) {
						Mat[i][j] = suma;
						suma++;
						cont++;
					}
				}
			}
		}
		else if (DiaSemana == 5) {
			int suma = 4;
			for (int i = 1; i < F; i++) {
				for (int j = 0; j < C; j++) {
					if (cont == 1 || cont == 2 || cont == 3 || cont == 4 || cont == 5 || cont == 6) {
						Mat[0][4] = 1;
						Mat[0][5] = 2;
						Mat[0][6] = 3;
					}
					if (suma <= 29) {
						Mat[i][j] = suma;
						suma++;
						cont++;
					}
				}
			}
		}
		else if (DiaSemana == 6) {
			int suma = 3;
			for (int i = 1; i < F; i++) {
				for (int j = 0; j < C; j++) {
					if (cont == 1 || cont == 2 || cont == 3 || cont == 4 || cont == 5 || cont == 6) {
						Mat[0][5] = 1;
						Mat[0][6] = 2;
					}
					if (suma <= 29) {
						Mat[i][j] = suma;
						suma++;
						cont++;
					}
				}
			}
		}
		else if (DiaSemana == 7) {
			int suma = 2;
			for (int i = 1; i < F; i++) {
				for (int j = 0; j < C; j++) {
					if (cont == 1 || cont == 2 || cont == 3 || cont == 4 || cont == 5 || cont == 6) {
						Mat[0][6] = 1;
					}
					if (suma <= 29) {
						Mat[i][j] = suma;
						suma++;
						cont++;
					}
				}
			}
		}
	}
	else if (m == 2 && a%4!=0) {
		if (DiaSemana == 1) {
			int suma = 1;
			for (int i = 0; i < F; i++) {
				for (int j = 0; j < C; j++) {
					if (suma <= 28) {
						Mat[i][j] = suma;
						suma++;
					}
				}
			}
		}
		else if (DiaSemana == 2) {
			int suma = 7;
			for (int i = 1; i < F; i++) {
				for (int j = 0; j < C; j++) {
					if (cont == 1 || cont == 2 || cont == 3 || cont == 4 || cont == 5 || cont == 6) {
						Mat[0][1] = 1;
						Mat[0][2] = 2;
						Mat[0][3] = 3;
						Mat[0][4] = 4;
						Mat[0][5] = 5;
						Mat[0][6] = 6;
					}
					if (suma <= 28) {
						Mat[i][j] = suma;
						suma++;
						cont++;
					}
				}
			}
		}
		else if (DiaSemana == 3) {
			int suma = 6;
			for (int i = 1; i < F; i++) {
				for (int j = 0; j < C; j++) {
					if (cont == 1 || cont == 2 || cont == 3 || cont == 4 || cont == 5 || cont == 6) {
						Mat[0][2] = 1;
						Mat[0][3] = 2;
						Mat[0][4] = 3;
						Mat[0][5] = 4;
						Mat[0][6] = 5;
					}
					if (suma <= 28) {
						Mat[i][j] = suma;
						suma++;
						cont++;
					}
				}
			}
		}
		else if (DiaSemana == 4) {
			int suma = 5;
			for (int i = 1; i < F; i++) {
				for (int j = 0; j < C; j++) {
					if (cont == 1 || cont == 2 || cont == 3 || cont == 4 || cont == 5 || cont == 6) {
						Mat[0][3] = 1;
						Mat[0][4] = 2;
						Mat[0][5] = 3;
						Mat[0][6] = 4;
					}
					if (suma <= 28) {
						Mat[i][j] = suma;
						suma++;
						cont++;
					}
				}
			}
		}
		else if (DiaSemana == 5) {
			int suma = 4;
			for (int i = 1; i < F; i++) {
				for (int j = 0; j < C; j++) {
					if (cont == 1 || cont == 2 || cont == 3 || cont == 4 || cont == 5 || cont == 6) {
						Mat[0][4] = 1;
						Mat[0][5] = 2;
						Mat[0][6] = 3;
					}
					if (suma <= 28) {
						Mat[i][j] = suma;
						suma++;
						cont++;
					}
				}
			}
		}
		else if (DiaSemana == 6) {
			int suma = 3;
			for (int i = 1; i < F; i++) {
				for (int j = 0; j < C; j++) {
					if (cont == 1 || cont == 2 || cont == 3 || cont == 4 || cont == 5 || cont == 6) {
						Mat[0][5] = 1;
						Mat[0][6] = 2;
					}
					if (suma <= 28) {
						Mat[i][j] = suma;
						suma++;
						cont++;
					}
				}
			}
		}
		else if (DiaSemana == 7) {
			int suma = 2;
			for (int i = 1; i < F; i++) {
				for (int j = 0; j < C; j++) {
					if (cont == 1 || cont == 2 || cont == 3 || cont == 4 || cont == 5 || cont == 6) {
						Mat[0][6] = 1;
					}
					if (suma <= 28) {
						Mat[i][j] = suma;
						suma++;
						cont++;
					}
				}
			}
		}
	}
	else if(m == 4 || m == 6 || m == 9 ) {
		if (DiaSemana == 1) {
			int suma = 1;
			for (int i = 0; i < F; i++) {
				for (int j = 0; j < C; j++) {
					if (suma <= 30) {
						Mat[i][j] = suma;
						suma++;
					}
				}
			}
		}
		else if (DiaSemana == 2) {
			int suma = 7;
			for (int i = 1; i < F; i++) {
				for (int j = 0; j < C; j++) {
					if (cont == 1 || cont == 2 || cont == 3 || cont == 4 || cont == 5 || cont == 6) {
						Mat[0][1] = 1;
						Mat[0][2] = 2;
						Mat[0][3] = 3;
						Mat[0][4] = 4;
						Mat[0][5] = 5;
						Mat[0][6] = 6;
					}
					if (suma <= 30) {
						Mat[i][j] = suma;
						suma++;
						cont++;
					}
				}
			}
		}
		else if (DiaSemana == 3) {
			int suma = 6;
			for (int i = 1; i < F; i++) {
				for (int j = 0; j < C; j++) {
					if (cont == 1 || cont == 2 || cont == 3 || cont == 4 || cont == 5 || cont == 6) {
						Mat[0][2] = 1;
						Mat[0][3] = 2;
						Mat[0][4] = 3;
						Mat[0][5] = 4;
						Mat[0][6] = 5;
					}
					if (suma <= 30) {
						Mat[i][j] = suma;
						suma++;
						cont++;
					}
				}
			}
		}
		else if (DiaSemana == 4) {
			int suma = 5;
			for (int i = 1; i < F; i++) {
				for (int j = 0; j < C; j++) {
					if (cont == 1 || cont == 2 || cont == 3 || cont == 4 || cont == 5 || cont == 6) {
						Mat[0][3] = 1;
						Mat[0][4] = 2;
						Mat[0][5] = 3;
						Mat[0][6] = 4;
					}
					if (suma <= 30) {
						Mat[i][j] = suma;
						suma++;
						cont++;
					}
				}
			}
		}
		else if (DiaSemana == 5) {
			int suma = 4;
			for (int i = 1; i < F; i++) {
				for (int j = 0; j < C; j++) {
					if (cont == 1 || cont == 2 || cont == 3 || cont == 4 || cont == 5 || cont == 6) {
						Mat[0][4] = 1;
						Mat[0][5] = 2;
						Mat[0][6] = 3;
					}
					if (suma <= 30) {
						Mat[i][j] = suma;
						suma++;
						cont++;
					}
				}
			}
		}
		else if (DiaSemana == 6) {
			int suma = 3;
			for (int i = 1; i < F; i++) {
				for (int j = 0; j < C; j++) {
					if (cont == 1 || cont == 2 || cont == 3 || cont == 4 || cont == 5 || cont == 6) {
						Mat[0][5] = 1;
						Mat[0][6] = 2;
					}
					if (suma <= 30) {
						Mat[i][j] = suma;
						suma++;
						cont++;
					}
				}
			}
		}
		else if (DiaSemana == 7) {
			int suma = 2;
			for (int i = 1; i < F; i++) {
				for (int j = 0; j < C; j++) {
					if (cont == 1 || cont == 2 || cont == 3 || cont == 4 || cont == 5 || cont == 6) {
						Mat[0][6] = 1;
					}
					if (suma <= 30) {
						Mat[i][j] = suma;
						suma++;
						cont++;
					}
				}
			}
		}
	}
}
void Monstras_Matriz(double Mat[Tamano][Tamano], int F, int C) {
	cout <<setw(9)<< "L" << setw(9) << "M" << setw(9) << "M" << setw(9) << "J" << setw(9) << "V" << setw(9) << "S" << setw(9) << "D" << endl;
	for (int i = 0; i < F; i++) {
		for (int j = 0; j < C; j++) {
			cout <<setw(9)<< Mat[i][j]<<setw(9);
		}
		cout << endl;
	}
}

