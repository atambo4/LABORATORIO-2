#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <math.h>

using namespace std;
int main()
{
    int n, opcion;

    do
    {
        printf( "\n        CALCULADORA DE TRIANGULOS.", 163 );
		printf( "\n   1. Determinar segun sus lados.", 163 );
        printf( "\n   2. Determinar segun sus angulos.", 163 );
        printf( "\n   3. Calcular el area, perimetro y la hipotenusa.", 163 );
        printf( "\n   4. Salir." );
        printf( "\n\n   Introduzca opci%cn (1-4): ", 162 );

        scanf( "%d", &opcion );

        /* Inicio del anidamiento */

        switch ( opcion )
        {
            case 1: int a, b, c;
			        cout << "\nPrimer lado: "; cin >> a;
			        cout << "Segundo lado: "; cin >> b;
			        cout << "Tercer lado: "; cin >> c;
			
			        if (a == b && a == c)
			           cout << "\nEs un triangulo Equilatero" << endl;
			        else if (a == b || a == c || b == c)
			           cout << "\nEs un triangulo Isosceles" << endl;
			        else
			           cout << "\nEs un triangulo Escaleno" << endl;
			        break;

            case 2: int ang1, ang2, ang3;
					printf("Ingresa el primer angulo:\n");
					scanf("%d", &ang1);
					printf("Ingresa el segundo angulo:\n");
					scanf("%d", &ang2);
					printf("Ingresa el tercer angulo:\n");
					scanf("%d", &ang3);

					if (ang1 == 90 && ang2 < 90 && ang3 < 90 || ang2 == 90 && ang1 < 90 && ang3 < 90 || ang3 == 90 && ang2 < 90 && ang1 < 90)
					{
					printf("El triangulo es Rectangulo\n");
					}
					else
					{
					if (ang1 < 90 && ang2 < 90 && ang3 < 90)
					{
					printf("El triangulo es Acutangulo\n");
					}
					else
					{
					if (ang1>90 && ang2 < 90 && ang3<90 || ang2>90 && ang1 < 90 && ang3<90 || ang3>90 && ang1 < 90 && ang2 < 90)
					{
					printf("El triangulo es Obtusangulo\n");
					}
					}
					}
                    break;

            case 3: float A, B, Ar, H, P;
                    cout<<"Ingresar base del Triangulo:\n";
         			cin >> B;
    				cout << "\n" << endl;
    				cout << "Ingresar la Altura del Triangulo:\n";
   					cin >> A;
    				Ar = (A*B) / 2;
    				H = sqrt((pow(A, 2)) + (pow(B, 2)));
    				P = B + A + H;
    				cout << "\n" << endl;
    				cout << "El Area es:" << Ar << endl;
    				cout << "\n" << endl;
    				cout << "la Hipotenusa es:" << H << endl;
    				cout << "\n" << endl;
    				cout << "El Perimetro es:" << P << endl;
    				cout << "\n" << endl;
         }

         /* Fin del anidamiento */

    } while ( opcion != 4 );

    return 0;
}