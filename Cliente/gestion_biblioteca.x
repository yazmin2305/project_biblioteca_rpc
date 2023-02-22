/*Declaracion de datos a transferir entre el cliente y el servidor gestion biblioteca*/
/*Declaracion de constantes*/
const MAXNOM = 30;
const MAXDAT = 20;


/*Declaracion estructura login*/
struct datos_credencial{
	char usuario[MAXNOM];
	char clave[MAXDAT];
};

/*Declaracion estructura usuario*/
struct datos_usuario{
	int id;
	char nombreCompleto[MAXNOM];
	char apellidos[MAXNOM];
	char ocupacion[MAXNOM];
	struct datos_credencial datosCredencial;
};

/*Declaracion estructura libro*/
struct datos_libro{
	int codigo;
	char nombre[MAXNOM];
	char areaConocimiento[MAXNOM];
	char autor[MAXNOM];
	char editorial[MAXNOM];
};

/*Declaracion estructura prestamo*/
struct datos_prestamo{
	int codigo;
	char fechaPrestamo[MAXDAT];
	char fechaDevolucion[MAXDAT];
	bool multa;
	int valor_multa;
	struct datos_libro libroaPrestar;
	struct datos_usuario usuarioAsociado;
};

/*Definicion de las operaciones que se pueden realizar*/
program gestion_biblioteca{
	version gestion_biblioteca_version{
		bool registrarUsuario(datos_usuario objUsuario)=1;
		bool registrarLibro(datos_libro objLibro)=2;
		int calcularMulta(datos_libro objLibroPrestado)=3;
		int abrirSesion(datos_credencial objCredencial)=4;
		datos_usuario consultarUsuario(int id)=5;
		datos_libro buscarLibro(int codigo)=6;
		datos_prestamo consultarPrestamo(int id)=7;
		bool realizarPrestamo(datos_prestamo objPrestamo)=8;
		datos_libro prestamosUsuario(int id)=9;
	}=1;
}=0x20000021;

