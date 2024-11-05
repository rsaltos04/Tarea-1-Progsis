#include <stdio.h>
#include "calculos.h"
#define PI 3.141592 


//Areas y Perimetros
//Triangulos
float areaTriangulo(float base, float altura){
    return (base*altura)/2;
}
float perimetroTrianguloEquilatero(float lado){
    return 3*lado;
}
float perimetroTrianguloIsosceles(float lado,float base){
    return (2*lado)+base;
}
float perimetroTrianguloEscaleno(float lado1,float lado2, float lado3){
    return lado1+lado2+lado3;
}

//Paralelogramo
float areaParalelogramo(float base, float altura){
    return base*altura;
}
float perimetroParalelogramo(float lado1,float lado2){
    return (lado2+lado1)*2;
}

//Cuadrado
float areaCuadrado(float lado){
    return lado*lado;
}
float perimetroCuadrado(float lado){
    return lado*4;
}

//Rectangulo
float areaRectangulo(float lado1,float lado2){
    return lado1*lado2;
}
float perimetroRectangulo(float lado1,float lado2){
    return (lado1*2)+(lado2*2);
}

//Rombo
float areaRombo(float diagMayor, float diagMenor){
    return (diagMayor*diagMenor)/2;
}
float perimetroRombo(float lado){
    return lado*4;
}

//Trapecio
float areaTrapecio(float basMayor,float basMenor,float altura){
    return ((basMayor+basMenor)*altura)/2;
}
float perimetroTrapecio(float basMayor, float basMenor, float lado1, float lado2){
    return basMayor+basMenor+lado1+lado2;
}

//Circulo
float areaCirculo(float radio){
    return PI*radio*radio;
}
float perimetroCirculo(float radio){
    return PI*radio*2;
}

//Poligono regular
float areaPoligono(float apotema,float nLados, float lado ){
    return (nLados*lado*apotema)/2;
}
float perimetroPoligono(float nLados,float lado){
    return nLados*lado;
}


//Superficie y volumen
//Cubo
float superficieCubo(float lado){
    return lado*lado*6;
}
float volumenCubo(float lado){
    return lado*lado*lado;
}

//Cubiode
float superficieCuboide(float largo, float base, float altura){
    return 2*(largo * base + base * altura + largo * altura);
}
float volumenCuboide(float largo,float base,float altura){
    return largo*altura*base;
}

//Cilindro recto
float superficieCilindro(float radio,float altura){
    return (2*radio*altura*PI)+(2*PI*radio*radio);
}
float volumenCilindro(float radio,float altura){
    return PI*radio*radio*altura;
}

//Esfera
float superficieEsfera(float radio){
    return 4*PI*radio*radio;
}
float volumenEsfera(float radio){
    return PI*radio*(4/3);
}

//Cono circular recto
float superficieCono(float radio, float lInclinacion){
    return (PI*radio*lInclinacion)+(PI*radio*radio);
}
float volumenCono(float radio,float altura){
    return (1/3)*PI*radio*radio*altura;
}