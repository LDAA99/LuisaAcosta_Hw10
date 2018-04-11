#include <iostream>
using std::cout;
using std::endl; 
using std::cin;


double matrix_product(int F1, int C1, int F2, int C2, double**mat1, double**mat2);
double creamat(int F, int C);
int main(){
	int F1;
	int C1;
	int F2;
	int C2; 
	double**mat1;
	double**mat2;
	int i;
	int j;

	cout<<"Ingrese el tamaño de la matriz uno, en el orden de filas y columnas, en diferentes reglones" <<endl;
	cin>>F1>>C1;
	cout<<"Ingrese el tamaño de la matriz dos, en el orden de filas y columnas,  en diferentes reglones" <<endl;
	cin>>F2>>C2;
	
	//ahora generar las matrices
	"escriba los datos para las matrices"
	cout<< "matriz uno"<< mat1=crearmat(F1, C1) <<endl;
	cout<< "matriz dos"<<mat2=crearmat(F2, C2)<<endl;
	

	if(C1=F2){
		double**a; 
		a=matrix_product(F1, C1, F2, C2, mat1, mat2);
		cout<<"la matriz resultante es "<<endl;
		for(i=0; i<F1; i++){
			for(j=0; j<C2; j++){

				cout<< a[i][j]<< " ";
}
			cout<<endl;	
}

}

	return 0; 
}

//crear mat 1 y mat2
double creamat(int F, int C){
	int i;
	int j;
	for (i=0; i<F; i++){
		for(j=0; j<C, j++){
			cout<<"Ingrese numero"<< i+1 <<j+1<<endl;
			cin>>mat[i][j];
}

} 
	return mat
}


/*esta es la funcion que le entran como parametros los tamanos de las matrices y las multiplica*/

double matrix_product(int F1, int C1, int F2, int C2, double**mat1, double**mat2){
	double **fin;
	int i;
	int j;
	//se inicializa
	for(i=0; i<F1; i++){
		for (j=0; j<C2; j++){
			fin[i][j]= 0;

}
}
	int k;
	for(i=0; i<F1; i++){
		for (j=0; j<C2; j++){
			for (k=0; k<C1; k++){
				 fin[i][j] += mat1[i][k]*mat2[k][j];

}
}
}
	
	return **fin;
}


/* Este es el codigo para crear vectores y matrices
ademas, usar:
	std::cout<< "ingrese un numero"<<std::endl;
	double variable;
	std::cin>>variable;
int main(){

	//un vector de 10 componentes
		double*a= new double[10];
	//una matriz de 4 filas, hay que inicializarla
		double**mat= new double*[4];
		int i;
		for(i=0; i<4; i++){
			mat[i]= new double[5];
}
		int j;
		for(i=0; i<4; i++){
			for(j=0; j<5; j++){
				mat[i][j]=i*j;
				cout<< mat[i][j]<< " ";
}
			cout<<endl;
}

	return 0;
}
*/


