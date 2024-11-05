#include <stdio.h>
#include "datos.h"
#include "calculos.h"
#include <string.h>
#include <time.h>
#include <stddef.h>

void mostrar_menu(){
  printf("Seleccione la figura geométrica:\n");
    printf("1. Triángulo\n");
    printf("2. Paralelogramo\n");
    printf("3. Cuadrado\n");
    printf("4. Rectángulo\n");
    printf("5. Rombo\n");
    printf("6. Trapecio\n");
    printf("7. Círculo\n");
    printf("8. Polígono regular\n");
    printf("9. Cubo\n");
    printf("10. Cuboide\n");
    printf("11. Cilindro recto\n");
    printf("12. Esfera\n");
    printf("13. Cono circular recto\n");
    printf("0. Salir\n");
}


void solicitar_datos_figura(int tipo_figura) {
    float resultado1,resultado2;

    switch (tipo_figura) {
        case 1: { // Triángulo
            int opcion;
            printf("1.-Triangulo Equilatero\n2.-Triangulo Isosceles\n 3.-Triangulo Escaleno\nSeleccione: ");
            scanf("%d",&opcion);
            switch (opcion)
            {
            case 1: //Equilatero
                float base1, altura1, lado1;
                printf("Ingrese la base del triángulo: ");
                scanf("%f", &base1);
                printf("Ingrese la altura del triángulo: ");
                scanf("%f", &altura1);
                printf("Ingrese longitud de un lado");
                scanf("%f",&lado1);
                resultado1 = areaTriangulo(base1, altura1);
                resultado2=perimetroTrianguloEquilatero(lado1);
                mostrar_resultado("Área del triángulo", resultado1);
                mostrar_resultado("Perimetro del triangulo",resultado2);
                break;
            
            case 2: //Isosceles
                float base2, altura2, lado2_2;
                printf("Ingrese la base del triángulo: ");
                scanf("%f", &base2);
                printf("Ingrese la altura del triángulo: ");
                scanf("%f", &altura2);
                printf("Ingrese longitud de un lado");
                scanf("%f",&lado2_2);
                resultado1 = areaTriangulo(base2, altura2);
                resultado2=perimetroTrianguloIsosceles(lado2_2,base2);
                mostrar_resultado("Área del triángulo", resultado1);
                
                break;
            case 3: // Escaleno
                float base3, altura3, lado1_3,lado2_3,lado3_3;
                printf("Ingrese la base del triángulo: ");
                scanf("%f", &base3);
                printf("Ingrese la altura del triángulo: ");
                scanf("%f", &altura3);
                printf("Ingrese longitud de un lado 1");
                scanf("%f",&lado1_3);
                printf("Ingrese longitud de un lado 2");
                scanf("%f",&lado2_3);
                printf("Ingrese longitud de un lado 3");
                scanf("%f",&lado3_3);
                resultado1 = areaTriangulo(base3, altura3);
                resultado2=perimetroTrianguloEscaleno(lado1_3,lado2_3,lado3_3);
                mostrar_resultado("Área del triángulo", resultado1);
                mostrar_resultado("Perimetro del triangulo",resultado2);
                break;

            default:
                printf("Opcion no valida\n");
                break;
            }
            
            break;
        }
        case 2: { // Paralelogramo
            float base, altura,lado1,lado2;
            printf("Ingrese la base del paralelogramo: ");
            scanf("%f", &base);
            printf("Ingrese la altura del paralelogramo: ");
            scanf("%f", &altura);
            printf("Ingrese la longitud de lado 1: ");
            scanf("%f", &lado1);
            printf("Ingrese la longitud de lado 2: ");
            scanf("%f", &lado2);
            resultado1 = areaParalelogramo(base, altura);
            resultado2=perimetroParalelogramo(lado1,lado2);
            mostrar_resultado("Área del paralelogramo", resultado1);
            mostrar_resultado("Perimetro del paralelogramo",resultado2);
            break;
        }
        case 3: { // Cuadrado
            float lado;
            printf("Ingrese el lado del cuadrado: ");
            scanf("%f", &lado);
            resultado1 = areaCuadrado(lado);
            resultado2= perimetroCuadrado(lado);
            mostrar_resultado("Área del cuadrado", resultado1);
            mostrar_resultado("Perimetro del cuadrado",resultado2);
            break;
        }
        case 4: { // Rectangulo
            float lado1,lado2;
            printf("Ingrese la longitud de lado 1: ");
            scanf("%f", &lado1);
            printf("Ingrese la longitud de lado 2: ");
            scanf("%f", &lado2);
            resultado1 = areaRectangulo(lado1,lado2);
            resultado2= perimetroRectangulo(lado1,lado2);
            mostrar_resultado("Área del rectangulo", resultado1);
            mostrar_resultado("Perimetro del rectangulo",resultado2);
            break;
        }
        case 5: { // Rombo
            float diagMayor,diagMenor,lado;
            printf("Ingrese la longitud del lado : ");
            scanf("%f", &lado);
            printf("Ingrese la diagonal Mayor : ");
            scanf("%f", &diagMayor);
            printf("Ingrese la diagonal Menor : ");
            scanf("%f",&diagMenor);
            resultado1 = areaRombo(diagMayor,diagMenor);
            resultado2= perimetroRombo(lado);
            mostrar_resultado("Área del rombo", resultado1);
            mostrar_resultado("Perimetro del rombo",resultado2);
            break;
        }
        case 6: { // Trapecio
            float basMayor,basMenor,altura,lado1,lado2,lado3;
            printf("Ingrese la base Mayor : ");
            scanf("%f", &basMayor);
            printf("Ingrese la base Menor : ");
            scanf("%f",&basMenor);
            printf("Ingrese la altura : ");
            scanf("%f",&altura);
            printf("Ingrese la longitud del lado 1 : ");
            scanf("%f", &lado1);
            printf("Ingrese la longitud del lado 2 : ");
            scanf("%f", &lado2);
            resultado1 = areaTrapecio(basMayor,basMenor,altura);
            resultado2= perimetroTrapecio(basMayor,basMenor,lado1,lado2);
            mostrar_resultado("Área del trapecio", resultado1);
            mostrar_resultado("Perimetro del trapecio",resultado2);
            break;
        }
        case 7: { // Circulo
            float radio;
            printf("Ingrese el radio : ");
            scanf("%f", &radio);
            resultado1 = areaCirculo(radio);
            resultado2= perimetroCirculo(radio);
            mostrar_resultado("Área del circulo", resultado1);
            mostrar_resultado("Perimetro del circulo",resultado2);
            break;
        }
        case 8: { // Poligono Regular
            float apotema,nLados,lado;
            printf("Ingrese la longitud del lado : ");
            scanf("%f", &lado);
            printf("Ingrese el apotema : ");
            scanf("%f", &apotema);
            printf("Ingrese el numero de lados : ");
            scanf("%f",&nLados);
            resultado1 = areaPoligono(apotema,nLados,lado);
            resultado2= perimetroPoligono(nLados,lado);
            mostrar_resultado("Área del poligono", resultado1);
            mostrar_resultado("Perimetro del poligono",resultado2);
            break;
        }      
        case 9: { // Cubo
            float lado;
            printf("Ingrese la longitud del lado : ");
            scanf("%f",&lado);
            resultado1 = superficieCubo(lado);
            resultado2= volumenCubo(lado);
            mostrar_resultado("Superficie del cubo", resultado1);
            mostrar_resultado("Volumen del cubo",resultado2);
            break;
        }
        case 10: { // Cuboide
            float largo,ancho,altura;
            printf("Ingrese el largo : ");
            scanf("%f",&largo);
            printf("Ingrese el ancho : ");
            scanf("%f",&ancho);
            printf("Ingrese el altura : ");
            scanf("%f",&altura);
            resultado1 = superficieCuboide(largo,ancho,altura);
            resultado2= volumenCuboide(largo,ancho,altura);
            mostrar_resultado("Superficie del cuboide", resultado1);
            mostrar_resultado("Volumen del cuboide",resultado2);
            break;
        }
        case 11: { // Cilindro recto
            float radio,altura;
            printf("Ingrese el radio : ");
            scanf("%f",&radio);
            printf("Ingrese el altura : ");
            scanf("%f",&altura);
            resultado1 = superficieCilindro(radio,altura);
            resultado2= volumenCilindro(radio,altura);
            mostrar_resultado("Superficie del cilindro recto", resultado1);
            mostrar_resultado("Volumen del cilindro recto",resultado2);
            break;
        }
        case 12: { // Esfera
            float radio;
            printf("Ingrese el radio : ");
            scanf("%f",&radio);
            resultado1 = superficieEsfera(radio);
            resultado2= volumenEsfera(radio);
            mostrar_resultado("Superficie del esfera", resultado1);
            mostrar_resultado("Volumen del esfera",resultado2);
            break;
        }
        case 13: { // Cono circular recto
            float radio,lInclinacion,altura;
            printf("Ingrese el radio : ");
            scanf("%f",&radio);
            printf("Ingrese la longitud del lado inclinado : ");
            scanf("%f",&lInclinacion);
            printf("Ingrese la altura : ");
            scanf("%f",&altura);
            resultado1 = superficieCono(radio,lInclinacion);
            resultado2= volumenCono(radio,altura);
            mostrar_resultado("Superficie del cono", resultado1);
            mostrar_resultado("Volumen del cono",resultado2);
            break;
        }

        default:
            printf("Opción no válida.\n");
            break;
    }
}

void mostrar_resultado(const char* descripcion, float valor) {
    printf("%s: %.2f\n", descripcion, valor);
}



int verificarUsuarioContraseña(char* ruta, char* usuario, char* contrasena){
    FILE *archivo;
    char linea[100];
    archivo=fopen(ruta,"r");
    int bo1=0;
    int bo2=0;

    while ((fgets(linea,sizeof(linea),archivo)!=NULL) && ((bo1==0) || (bo2==0)))
    {
        linea[strcspn(linea, "\r\n")] = 0;
        char* part1=strtok(linea,"-");
        char* part2=strtok(NULL,"-");
        int bol1=strcmp(part1,usuario)==0;
        int bol2=strcmp(part2,contrasena)==0;
        if ( bol1 && bol2){
            bo1=1;
            bo2=1;
        }
    }
    fclose(archivo);
    if ((bo1==1) && (bo2==1)){
        printf("Ingreso al sistema correctamente\n");
        return 1;
    }
    return 0;

    
}
void registroSistema(int bol,char* ruta,char* usuario, char* contrasena){
    FILE *archivo;
    char salida[50]="";
    char fecha[70];
    tiempoLocal(fecha, sizeof(fecha));
    archivo=fopen(ruta,"a");
    if (bol){
            strcat(salida,fecha);
            strcat(salida,": ");
            strcat(salida,usuario);
            strcat(salida," - ");
            strcat(salida,"Ingreso exitoso al sistema");
            fprintf(archivo,"%s\n",salida);

    }else{
            strcat(salida,fecha);
            strcat(salida,": ");
            strcat(salida,usuario);
            strcat(salida," - ");
            strcat(salida,"Ingreso fallido usuario/clave erróneo");
            fprintf(archivo,"%s\n",salida);
    }
    fclose(archivo);
    
}

void tiempoLocal(char* fechaHora, size_t tamano){
     time_t t = time(NULL);
    struct tm tiempoLocal = *localtime(&t);
    int bytesEscritos = strftime(fechaHora, tamano, "%Y/%m/%d", &tiempoLocal);
    
}

void RegistroAccion(char* ruta,char* usuario, int accion){

    FILE *archivo;
    char salida[50]="";
    char fecha[70];
    tiempoLocal(fecha, sizeof(fecha));
    archivo=fopen(ruta,"a");
    strcat(salida,fecha);
    strcat(salida,": ");
    strcat(salida,usuario);
    strcat(salida," - ");
    switch (accion)
    {
    case 1:
        strcat(salida,"Triangulo");
        fprintf(archivo,"%s\n",salida);
        break;
    case 2:
        strcat(salida,"Paralelogramo");
        fprintf(archivo,"%s\n",salida);
        break;
    case 3:
        strcat(salida,"Cuadrado");
        fprintf(archivo,"%s\n",salida);
        break;    
    case 4:
        strcat(salida,"Rectangulo");
        fprintf(archivo,"%s\n",salida);
        break;
    case 5:
        strcat(salida,"Rombo");
        fprintf(archivo,"%s\n",salida);
        break;
    case 6:
        strcat(salida,"Trapecio");
        fprintf(archivo,"%s\n",salida);
        break;    
    case 7:
        strcat(salida,"Circulo");
        fprintf(archivo,"%s\n",salida);
        break;    
    case 8:
        strcat(salida,"Poligono");
        fprintf(archivo,"%s\n",salida);
        break;
    case 9:
        strcat(salida,"Cubo");
        fprintf(archivo,"%s\n",salida);
        break;
    case 10:
        strcat(salida,"Cuboide");
        fprintf(archivo,"%s\n",salida);
        break;
    case 11:
        strcat(salida,"Cilindro Recto");
        fprintf(archivo,"%s\n",salida);
        break;
    case 12:
        strcat(salida,"Esfera");
        fprintf(archivo,"%s\n",salida);
        break;    
    case 13:
        strcat(salida,"Cono circular recto");
        fprintf(archivo,"%s\n",salida);
        break;        
    default:
        strcat(salida,"Salida del sistema");
        fprintf(archivo,"%s\n",salida);
        break;
    }
    fclose(archivo);

}
