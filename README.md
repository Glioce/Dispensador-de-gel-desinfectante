# Dispensador de Gel Desinfectante
*Convierte un producto de higiene en algo más higiénico*
*#CienciaEnCasa*

![Gif mostrando el funcionamiento del dispensador](/img/dispensador_prueba_01.gif)

Lavarse las manos regularmente en una buena forma de evitar enfermedades. 
Con ello evitamos la propagación de gérmes y que esos gérmenes entren a nuestro cuerpo. 
En lugares en los que no tenemos agua y jabón disponible, el gel desinfectante es una 
buena opción para mantener nuestras manos libres de gérmenes.

En este artículo se explican los pasos para armar un dispensador automático de gel 
desinfectante. Se instala sobre un dispensador común y permite extraer gel sin 
necesidad de tocarlo.

## Paso 1: Reunir los materiales
![Foto de componentes](/img/componentes_01.jpg)
+ 1 Sensor Reflectivo TCRT5000
+ 1	Resistencia 100 ohm
+ 1	Resistencia 10 kohm
+ 1	Arduino Nano
+ 1	Servo SG90
+ 1	Cable para Fuente USB
+ 1	Fuente Cargador USB 5V
+ 8	Jumpers
+ 3	Pines macho
+ 3	Cinchillos de plástico
+ 5	Tornillo M3
+ Impresión 3D

### Paso 1.1: Impresión 3D
Las piezas se imprimieron en **PLA** usando los siguientes parámetros:  
Slicer: Ultimaker Cura  
Impresora: Ender 3  
Calidad: Baja (altura de capa 0.28 mm)  
Infill: 20 %  
No requieren soportes y se pueden imprimir juntas o separadas.  
![Captura de Cura](/img/cama_impresora.png)

## Paso 2: Armar circuito
![Esquemático](/img/esquematico1.png)
El circuito tiene 4 componentes principales: la fuente de alimentación; un sensor infrarrojo que detecta si hay un objeto cercano; un Arduino que lee el estado del sensor y envía pulsos al servo; y el servo que mueve la palanca del dispensador. 

### Paso 2.1: Sensor infrarrojo
![Esquemático del sensor](/img/sensor.png)
El sensor está formado por un TCRT5000 y dos resistencias.  
Cortar el pin positivo del diodo infrarrojo. Soldar resistencias y tres pines para formar el circuito que se muestra arriba. Así es más fácil conectar con jumpers.

![TCRT5000 original](/img/sen_01.jpg)
![TCRT5000 con resistencias y pines](/img/sen_02.jpg)
![TCRT5000 conectado con jumpers](/img/sen_03.jpg)

### Paso 2.2: Cables de alimentación
Usamos 2 jumpers hembra para alimentar el Arduino a través de las terminales GND y 5V.
Otros 3 jumpers hembra se usan para conectar el sensor (GND-café, 5V-rojo, Salida-amarillo).
El servo se conecta con 3 jumpers macho (café, rojo y naranja).

Cortar los 3 jumpers rojos y los 3 jumpers cafés, pelar las puntas y unir los cables.
También unir las puntas del cable USB y aplicar soldadura. Aislar con tubo termoretráctil (thermofit).

### Paso 3.3: Conexiones finales
Conectar el Arduino.
