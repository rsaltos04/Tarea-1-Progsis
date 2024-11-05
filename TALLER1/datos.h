#ifndef datos_h
#define datos_h
#include <stddef.h>

void mostrar_menu();
void solicitar_datos_figura(int tipo_figura);
void mostrar_resultado(const char* descripcion, float valor);


int verificarUsuarioContraseña(char* ruta, char* contraseña, char* usuario);
void registroSistema(int bol, char* ruta,char* contraseña, char* usuario);
void tiempoLocal(char* fechaHora, size_t tamano);
void RegistroAccion(char* ruta,char* usuario, int accion);

#endif