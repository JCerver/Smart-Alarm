# Smart Alarm

Proyecto que consiste en generar una alarma inteligente que por medio de un interruptor magnetico detecte cuando se abra o cierre una puerta, al momento de abrirse la puerta se emite un sonido de alarma mediante un buzzer y un LED que nos indica dicha accion. 
Para aterrizar la idea un poco mas, se utilizo un ataud de madera en la cual al momento de abrirlo se activa la alarma. 

hay muchos proyectos en los que hay que realizar acciones periódicas de tarde en tarde, como tomar lecturas de sensores o enviar mensajes a un servidor central, pero la mayor parte del tiempo el Arduino no esta ejecutando instrucciones, Sin embargo, en un procesador, el no hacer nada sigue suponiendo miles de instrucciones por segundo que consumen una energía considerable. Es por este motivo que el el objetivo principal de este proyecto es el reducir a lo mas minimo en consumo de energia, ya que nuestra alarma solamente se activa al abrir la puerta, podemos poner a dormir al arduino cuando no ocurra ningun evento.

## Objetivo general

 Crear un sistema de alarma inteligente donde el consumo de energia sea el mas minimo, manteniendo el arduino en un estado de reposo en su mayor tiempo.

## Comenzando 🚀

_Estas instrucciones te permitirán obtener una copia del proyecto en funcionamiento en tu máquina local para propósitos de desarrollo y pruebas._


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
Libreria LowPower.zip
```

### Instalación 🔧

Importando la libreria en el entorno de desarrollo 

```
*Dentro del IDE de arduino nos dirijimos a la pestaña programa >> Incluir libreria >> Añadir libreria .ZIP

```

_Y repite_

```
hasta finalizar
```

_Finaliza con un ejemplo de cómo obtener datos del sistema o como usarlos para una pequeña demo_

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

## Deployment 📦

_Agrega notas adicionales sobre como hacer deploy_

## Construido con 🛠️

_Menciona las herramientas que utilizaste para crear tu proyecto_

* [Dropwizard](http://www.dropwizard.io/1.0.2/docs/) - El framework web usado
* [Maven](https://maven.apache.org/) - Manejador de dependencias
* [ROME](https://rometools.github.io/rome/) - Usado para generar RSS

## Contribuyendo 🖇️

Por favor lee el [CONTRIBUTING.md](https://gist.github.com/villanuevand/xxxxxx) para detalles de nuestro código de conducta, y el proceso para enviarnos pull requests.

## Versionado 📌

Usamos [SemVer](http://semver.org/) para el versionado. Para todas las versiones disponibles, mira los [tags en este repositorio](https://github.com/tu/proyecto/tags).

## Autores ✒️

_Menciona a todos aquellos que ayudaron a levantar el proyecto desde sus inicios_

* **Andrés Villanueva** - *Trabajo Inicial* - [villanuevand](https://github.com/villanuevand)
* **Fulanito Detal** - *Documentación* - [fulanitodetal](#fulanito-de-tal)

También puedes mirar la lista de todos los [contribuyentes](https://github.com/your/project/contributors) quíenes han participado en este proyecto. 

## Licencia 📄

Este proyecto está bajo la Licencia (Tu Licencia) - mira el archivo [LICENSE.md](LICENSE.md) para detalles

## Expresiones de Gratitud 🎁

* Comenta a otros sobre este proyecto 📢
* Invita una cerveza 🍺 a alguien del equipo. 
* Da las gracias públicamente 🤓.
* etc.
