/* CODIGO IMPLEMENTADO POR NOSOTROS Esteban Xelhuantsi Perla - 324249
 * Compila, pero no corre adecuadamente, cabe aclarar que lo hicimos sin nimguna
 * herramienta de apoyo.
 * */
#include <iostream>

using namespace std;
// Este boleano lo utilizamos en un While, ignore el nombre, es una broma.
bool True = true;
// Usamos este arreglo global como un arreglo de prueba para "Debugear" manualemente
int arre[8]={8,6,8,3,1,0,3,5};

/* DEBUGER START====================================================================
 * 8,6,8,3,1,0,3,5
 * swap(a,b)
 * 6,8,8,3,   1,0,3,5
 * 6,8,3,8,0,1,3,5
 * 3 6
 *
 *
 * 					   [0][1][2][3][4][5][6][7]
 *  					8  6  8  3  1  0  3  5
 *  					^        ^           ^
 *  					a
 *
 * 				[0][1][2][3]  			[4][5][6][7]
 *  			 8  6  8  3    			 1  0  3  5
 *  			 ^  ^     ^    			 ^  ^     ^
 *  			 a             			 a
 * 		[0][1] 			[2][3]  	[4][5]  		[6][7]
 *  	 8  6    		 8  3    	 1  0    		 3  5
 *  	 ^  ^    		 ^  ^    	 ^  ^    	   	 ^  ^
 *  	 ^       		 ^       	 ^       	 	 ^
 * 		 a       		 a       	 a       		 a
 * [0]	    [1]		[2]		[3]  	[4]		[5]		[6]		[7]
 *  8  	     6  	 8  	 3    	 1  	 0  	 3  	 5
 *
 * ////////////////////////////////////////////////////////////////////////
 *
 * 		[0][1] 			[2][3]  	[4][5]  		[6][7]
 *  	 8  6    		 8  3    	 1  0    		 3  5
 *    	 6  0    		 0  0    	 0  0    		 0  0
 *  	 ^  ^    		 ^  ^    	 ^  ^    	   	 ^  ^
 *  	 ^       		 ^       	 ^       	 	 ^
 * 		    a      		 a       	 a       		 a
 *
 * DEBUGER ENDS==================================================================*/

void mergesort(int imenor,int imayor){ //Recibe como parametros Un Indice Mayor y Menor
  //Aquí declaramos el arreglo temporal para poner los arrelos reuseltos
  int solved[8] = {0};
	int imedio = (imenor + imayor) / 2;
  //EMPEZAMOS A DIVIDIR EL ARREGLO
  	if (imenor!=imayor) {
      mergesort (imenor, imedio);
      mergesort (imedio+1, imayor);

  //INDICES TEMPORALES PARA COMPARAR
  int tmenor = imenor;
  int tmedio = imedio+1;
  int tAsignador = imenor;
  //Este ciclo lo utilizamos para empezar a acomodar los valores en el arreglo temporal
    while (True){
    //##==--  COMPROBAMOS QUE ACABÓ DE COMPARAR  --==##//
    if (tmenor == imedio && tmedio == imayor){
      True=false;
    }
    //##==--  COMPARARAMOS  --==##//
    //if (tmenor>tmedio) {
    if (arre[tmenor]>arre[tmedio]) {
      solved[tAsignador] = arre[tmedio];
      tmedio++;
    } else {
      solved[tAsignador] = arre[tmenor];
      tmenor++;
    }
    tAsignador++;
  }
      //El proposito de este for era insertar los valores ya acomodados en el arreglo original
      for(int i = imenor; i < imayor; i++){
        arre[i] = solved[i];
      }
    }///llave del if inicial
}
// Aqui se encuentra mein
int main()
{
  //Este for imprime el arreglo antes de ser Ordenado
    for (int i = 0; i < 8; i++){
    	cout << arre[i] << " ";
    }
  	cout << endl;
  //Aquí iniciamos la aventura, mandamos a llamar nuestro Merge_Sort
	mergesort(0,7);
  //Se supone que lo pondria ya acomodado
    for (int i = 0; i < 8; i++){
    	cout << arre[i] << " ";
    }
  	cout << endl;
    return 0;
}
