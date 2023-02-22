/*Declaración de datos a transferir entre el servidor-gestion-biblioteca(role cliente) y el servidor notificacion devolucion*/
/*Definición de las operaciones que se pueden realizar*/
program gestion_notificaciones_devolucion{

version gestion_notificaciones_devolucion_version{
    bool enviarNotificacion(string mensaje)=1;
}=1;
}=0x20000022;
