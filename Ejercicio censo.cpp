// El gobierno de la Ciudad de Buenos Aires realiza una encuesta en casas de familia. De cada familia conoce: domicilio, tipo de vivienda (‘C’:casa, ‘D’:departamento). Asumimos que viven 4 personas por domicilio. De cada integrante de la familia se conoce: nombre y apellido, edad, sexo (‘F’, ‘M’), nivel de
//estudios alcanzados (‘N’: no posee, ‘P’: primario, ‘S’: secundario, ‘T’: terciario, ‘U’: universitario), y un indicador (‘I’: incompleto, ‘C’: completo) que se refiere al ítem anterior.

//Se pide emitir un listado con los resultados:
//a) los datos de los encuestados que hayan completado los estudios primarios
//b) el porcentaje de analfabetismo en la ciudad (se considera analfabetos a los mayores de 10 años que no posean estudios)
//c) el domicilio de la familia con mayor cantidad de integrantes de nivel terciario que viven en departamento.
//d) edad promedio de cada familia y de la ciudad
//e) cantidad de encuestados en cada tipo de nivel de estudios alcanzados incompletos.
//f)  porcentaje de encuestados de sexo femenino y masculino.

//Funciones a desarrollar: 
//- print_information >> que reciba una persona y muestre por consola sus datos
//- filter_by_studies >> que reciba un listado de personas y un estudio alcanzado y que devuelva a aquellos que cumplen con ese estudio alcanzado
//--- En este punto ya pueden hacer una funcion que cumpla con el a)

//- filter_by_age_greater_than >> que reciba un listado de personas y una edad minima e incluyente y nos retorne aquellos que 
//--- En este punto ya pueden hacer una funcion que cumpla con el b)

//- filter_by_home_type >> que reciba un listado de familias y un tipo de vivienda y que devuelva aquellos que cumplan con esta condición
//- find_family_with_most_university_graduates >> dado un listado de familias, devolver la que tenga mas graduados de universidad
//--- En este punto ya pueden hacer una funcion que cumpla con el c)

struct Persona{ 
    char nombre;
    int edad;
    char sexo;
    char estudio;
    char terminado;
};
struct Familia{
    Personas integrantes[4];
    char domicilio;
    char tipo;
};

#include <iostream>

int main() {
    Familia familias[1];
    Persona personas[7];
    familias[0]={.domicilio="Cochabamba 2744".tipo="C"};
    familias[1]={.domicilio="General Guemes 465".tipo="C"}; 
    personas[0]={.nombre="Matias Serafini".edad=18 .sexo="M" .estudio="S" .terminado="I"};
    personas[1]={.nombre="Gustavo Serafini".edad=56 .sexo="M" .estudio="T" .terminado="C"};
    personas[2]={.nombre="Helena Ribero".edad=51 .sexo="F" .estudio="U" .terminado="C"};
    personas[3]={.nombre="Fernando Serafini".edad=11 .sexo="M" .estudio="N" .terminado="I"};
    personas[4]={.nombre="Franco Maio" .edad=18 .sexo="M" .estudio="S" .terminado="I"};
    personas[5]={-nombre="Kudell Maradona" .edad=18 .sexo="M".estudio="S" .terminado="I"};
    personas[6]={-nombre="Gonzalo Belmonte" .edad=18 .sexo="M".estudio="S" .terminado="I"};
    personas[7]={-nombre="Benicio Pavon" .edad=18 .sexo="M".estudio="S" .terminado="I"};
 return 0;
}
