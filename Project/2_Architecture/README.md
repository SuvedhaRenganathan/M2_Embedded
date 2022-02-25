## FLOWCHART
  ![image](https://user-images.githubusercontent.com/98879965/155770396-70a16c31-d743-40d7-b45e-668d98313be7.png)

## BLOCK DIAGRAM
   ![image](https://user-images.githubusercontent.com/98879965/155779323-4a4b60ab-4d22-4d7d-9699-b01a782013e7.png)
   
## COMPONENTS
### The MQ-3 sensor/Alcohol sensor
      Used to detect alcohol level. The sensor detects the alcohol consumption by the smell of the breath. The sensor is an analog as well as a digital sensor which on its   analog pin outputs the analog voltage proportional to the alcohol level. 
                         ![image](https://user-images.githubusercontent.com/98879965/155783606-b1c43426-0142-4bd5-ae24-f98049e8a2d3.png)
### Power Supply 
     The circuit needs a 5V regulated DC for its operation. An 18V battery can be used as the primary source of power.
     
### LCD Display
      The 16X2 LCD display is connected to the Arduino board by connecting its data pins to pins 4 to 7 of the Arduino board. The RS and E pins of the LCD are connected to pins 2 and 3 of the Arduino board respectively. The RW pin of the LCD is grounded.
      
### ARDUINO BOARD
    The arduino board is the central unit of the system. The arduino uno is the microcontroller board based on the ATmega 328.
    
### Buzzer
    To alarm the status of the presence of alcohol is done through buzzer. 
                     ![image](https://user-images.githubusercontent.com/98879965/155784626-a9957d94-b17a-4baa-83c4-943f9f6fd95f.png)
                   
### Relay
    Relay is used for interfacing and control various appliances, its operating voltage and current is5V, 10A. It is controlled from a microcontroller (Arduino) directly
with 3.3V or 5V logic signals.

### DC MOTOR
    The DC motor converts direct current electrical energy into mechanical energy. Change current produces magnetic energy which in turn produces rotation. In the project when the alcohol is sensed the DC motor starts running showing the engine is ON.
    
### SIM900A(GSM/GPRS)
     This is a smaller and solid remote module structure. The SIM900A is an entire group Dual-band GSM/GPRS strategy in a SMT module which can be installed in the client applications.
