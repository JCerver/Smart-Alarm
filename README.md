# Smart Alarm

Proyecto que consiste en generar una alarma inteligente que por medio de un interruptor magnetico detecte cuando se abra o cierre una puerta, al momento de abrirse la puerta se emite un sonido de alarma mediante un buzzer y un LED que nos indica dicha accion. 
Para aterrizar la idea un poco mas, se utilizo un ataud de madera en la cual al momento de abrirlo se activa la alarma. 

hay muchos proyectos en los que hay que realizar acciones periódicas de tarde en tarde, como tomar lecturas de sensores o enviar mensajes a un servidor central, pero la mayor parte del tiempo el Arduino no esta ejecutando instrucciones, Sin embargo, en un procesador, el no hacer nada sigue suponiendo miles de instrucciones por segundo que consumen una energía considerable. Es por este motivo que el el objetivo principal de este proyecto es el reducir a lo mas minimo en consumo de energia, ya que nuestra alarma solamente se activa al abrir la puerta, podemos poner a dormir al arduino cuando no ocurra ningun evento.

## Objetivo general

 Crear un sistema de alarma inteligente donde el consumo de energia sea el mas minimo, manteniendo el arduino en un estado de reposo en su mayor tiempo.

## Comenzando 🚀

A continuacion se presentan las siguientes instrucciones para obtener una copia del proyecto en funcionamiento en nuestra máquina local para propósitos de desarrollo y pruebas.


### Pre-requisitos 📋

Para poder realizar el proyecto se debe contar con el siguiente material

A nivel hardware
```
PLaca Arduino UNO
1 Buzzer
3 resistencias de 330 ohms
1 LED cualquier color
Cables para protoboard 
2 cables caiman
1 reed switch
Algun componente que nos permita simular una puerta (en este caso la puerta de un ataud de madera pequeño).
```
A nivel software
```
IDE de Arduino
Libreria Low-Power-master.ZIP
```

### Instalación 🔧

1. Importar la libreria en el entorno de desarrollo. 

```
*Dentro del IDE de arduino nos dirijimos a la pestaña programa >> Incluir libreria >> Añadir libreria .ZIP, en este punto ya debemos de tener la libreria Low-Power-master.ZIP descargada en el ordenador. 

```


2. Armado de circuito. 

```
*Se colocan todos los componentes hardware mencionados en nuestra tabla protoboard, siguiendo el siguiente
diagrama del circuito, es importante añadir un condensador en paralelo con el reed switch para evitar la 
mayor cantidad de ruido posible, este proceso se le conoce como debounce y se ṕuede eliminar añadiendo
un componente al circuito o mediante software.

```
![diagrama](https://github.com/JCerver/Smart-Alarm/blob/master/diagrama.jpg)

3. Importar el codigo al entorno de desarrollo. 

```
*Se descarga el archivo Smart_Alarm.ino del repositorio y se abre con el IDE de arduino, dentro del codigo
se explica a detalle cada una de las instrucciones que lo conforman, se carga y compila.

```

A partir de estas instrucciones podemos tener algo similar a las siguientes imagenes:

## Ejecutando las pruebas ⚙️

_Explica como ejecutar las pruebas automatizadas para este sistema_

### Analice las pruebas end-to-end 🔩

_Explica que verifican estas pruebas y por qué_

```
Da un ejemplo
```

### Y las pruebas de estilo de codificación ⌨️

_Explica que verifican estas pruebas y por qué_

```
Da un ejemplo
```



## Construido con 🛠️

La herramienta clave para este proyecto es la libreria Low-Power-master.ZIP 

* [rocketscream/Low-Power](https://github.com/rocketscream/Low-Power) Con la librería lowpower es muy fácil poner en modo sleep a Arduino con una línea como: LowPower.powerDown(SLEEP_8S, ADC_OFF, BOD_OFF);


## Como contribuir 🖇️

Si deseas contribuir o realizar modificaciones en el proyecto, proximamente se tendra el archiv CONTRIBUTING.md
,favor de leer el [CONTRIBUTING.md](https://github.com/JCerver/Smart-Alarm/blob/master/CONTRIBUTING.md) para detalles de nuestro código de conducta.


## Autores ✒️


* **Jose Guadalupe de Jesus Cervera Barbosa** - *Trabajo Inicial y Documentación * - [JCerver](https://github.com/JCerver)


También puedes mirar la lista de todos los [contribuyentes](https://github.com/JCerver/Smart-Alarm/graphs/contributors) quíenes han participado en este proyecto. 

## Licencia 📄

Copyright (c) 2018, jose guadalupe cervera
Todos los derechos reservados.


ESTE SOFTWARE ES PROPORCIONADO POR LOS TITULARES DE LOS DERECHOS DE AUTOR Y SUS COLABORADORES "TAL CUAL" Y SE RENUNCIA A CUALQUIER GARANTÍA EXPRESA O IMPLÍCITA, INCLUIDAS, ENTRE OTRAS, LAS GARANTÍAS IMPLÍCITAS DE COMERCIABILIDAD E IDONEIDAD PARA UN PROPÓSITO DETERMINADO. EN NINGÚN CASO EL TITULAR DE LOS DERECHOS DE AUTOR O SUS COLABORADORES SERÁN RESPONSABLES DE NINGÚN DAÑO DIRECTO, INDIRECTO, INCIDENTAL, ESPECIAL, EJEMPLAR O CONSECUENCIAL (INCLUIDOS, ENTRE OTROS, LA ADQUISICIÓN DE BIENES O SERVICIOS SUSTITUTOS, LA PÉRDIDA DE USO, LOS DATOS O LAS GANANCIAS; O INTERRUPCIÓN DEL NEGOCIO) SIN EMBARGO Y EN CUALQUIER TEORÍA DE RESPONSABILIDAD, YA SEA EN CONTRATO, RESPONSABILIDAD ESTRICTA O AGRAVIO (INCLUYENDO NEGLIGENCIA O DE OTRO MODO) QUE SURJA DE CUALQUIER FORMA DEL USO DE ESTE SOFTWARE, AUN CUANDO SE HAYA ADVERTIDO DE LA POSIBILIDAD DE DICHO DAÑO.

## Expresiones de Gratitud 🎁

* A partir de este proyecto pueden surgir gran cantidades de variaciones a realizar sobre el, es curioso la manera
en que se utiliza un ataud para simular la puerta, con esto se puede mejorar para crear algo interesante para este dia 
de muerto, lo dejo a su imaginación📢
* Solo fue la base o plantilla de este proyecto, si tienes alguna idea por favor hazmelo saber.
