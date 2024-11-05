#include "datos.h"
#include "calculos.h"
#include <stdio.h>
#include <stddef.h>
//Realice los cálculos de área y perímetro para las siguientes figuras geométricas: Triángulos, 
//Rparalelogramo, cuadrado, rectángulo, rombo, trapecio, círculo y polígono regular. 
int main(){
    int opcion;
    int continuar = 1;
    char usuario[100];
    char contrasena[100];
    char rutaRegistro[]="registro.txt";
    char rutaUsuarios[]="usuarios.txt";

    printf("Ingrese usuario: ");
    scanf("%s",usuario);
    printf("Ingrese contraseña: ");
    scanf("%s",contrasena);

    if (verificarUsuarioContraseña(rutaUsuarios,usuario,contrasena)){
        printf("Ingreso correcto de usuario y contraseña\n");
        registroSistema(1,rutaRegistro,usuario,contrasena);
        while (continuar) {
            mostrar_menu();
            printf("Ingrese su opción: ");
            scanf("%d", &opcion);
            RegistroAccion(rutaRegistro,usuario,opcion);

            if (opcion == 0) {
                printf("Fin del programa.\n");
                break;
        }

            solicitar_datos_figura(opcion);

        }
    }else{
        printf("Ingreso incorrecto al sistema \n");
        registroSistema(0,rutaRegistro,usuario,contrasena);

    }
    
    
    

    
    return 0;
}
