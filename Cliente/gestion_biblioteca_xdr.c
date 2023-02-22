/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "gestion_biblioteca.h"

bool_t
xdr_datos_credencial (XDR *xdrs, datos_credencial *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->usuario, MAXNOM,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->clave, MAXDAT,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_datos_usuario (XDR *xdrs, datos_usuario *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_int (xdrs, &objp->id))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->nombreCompleto, MAXNOM,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->apellidos, MAXNOM,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->ocupacion, MAXNOM,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_datos_credencial (xdrs, &objp->datosCredencial))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_datos_libro (XDR *xdrs, datos_libro *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_int (xdrs, &objp->codigo))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->nombre, MAXNOM,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->areaConocimiento, MAXNOM,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->autor, MAXNOM,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->editorial, MAXNOM,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_datos_prestamo (XDR *xdrs, datos_prestamo *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_int (xdrs, &objp->codigo))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->fechaPrestamo, MAXDAT,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->fechaDevolucion, MAXDAT,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_bool (xdrs, &objp->multa))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->valor_multa))
		 return FALSE;
	 if (!xdr_datos_libro (xdrs, &objp->libroaPrestar))
		 return FALSE;
	 if (!xdr_datos_usuario (xdrs, &objp->usuarioAsociado))
		 return FALSE;
	return TRUE;
}
