# 1.1 AUTOMATIC RAILWAY GATE CONTROL SYSTEM

## 1.1.1 INTRODUCTION
     Now a days, many accidents are happening in the railway tracks.To overcome such accidents which is one of the most significant method is implemented by automatic railway gate control using arduino with automatically open and closes the gate by tracking the train which aims at reducing the accidents due to this automation in the railway industry is an important need as we are stepping into the advanced era and to reduce the risk of accidents due to human induced errors it is very important that we let these tasks be handled by these smart machines. 
     
## 1.1.2 STATE OF ART
* The main goal of  the project is to prevent accidents occuring in the railway tracks
* This can be implemented in real time system
* To track or detect the movement of the train using the sensors
* To use automatic system for the control of railway gate 
* This shall use a LCD display the distance and the gate position
* To reduce the manual work and instead use the machine process

## 1.1.3 4W's and 1H
* When  - It can be used when people work at late night to open the railway gate
* Where - It used in the railway track gate to prevent accidents
* Who   - Peoples,Railwaygate keeper,Gate man
* What  - Use to detect the moving train using sensors

* How   -It can detect the train and automatically open or closes the railway gate and display these in LCD display
  
## 2.1 SWOT ANALYSIS

![image](https://user-images.githubusercontent.com/98879965/157074965-baf1239c-4f99-4687-9c5a-c2050d606497.png)


## 3.1 REQUIREMENTS
## 3.1.1 High Level Requirements
| ID  |                    Description                                                                                  |
| --  | -----------                                                                                                     |
| HL1 | The system shall be able to detect the train                                                                    |
| HL2 | It shall automatically open or close the railway gate according to train arriving at the track                  |  
| HL3 | Buzzer shall ring if there is detection of the train                                                            |
| HL4 | LCD display shall be used to display the results                                                                |

## 3.1.2 Low Level Requirements 
| ID  |                    Description                                                      |                                                    
| --  | -----------                                                                         |                                                                          
| LL1 | With the ultrasonic sensor the system shall be able to detect the train             |      
| LL2 | After the detection the railway gate open and close based the detection of train    |
| LL3 | The buzzer connected to the arduino shall ring when the train is detected           | 
| LL4 | The LCD display shall display the distance of the train and gate is open or close   |


## 4.1 ADVANTAGES
* The main advantage of this system is the low cost implementation
* Easy to detect the moving train 
* Helps to prevent accidents
* Reduces human efforts in monotonous works

## 5.1 FUTURE SCOPE

* Though this prototype is simple to build and highly reliable but there are some obstacles too. Rather than a train if an animal or other object is placed in front of the sensor the alarm will and the gate will be closed which is not desirable at all.There are also a scope of alerting the nearest railway station about arrival and departure of the train.

* The problems indicated above can be overcome by adding some extra modules. Like adding the GSM module for future scope. After adding this module, upon arrival and departure of train, the GSM module will send an SMS to registered phone number for acknowledgement and safety. Also adding a pair of pressure sensor increases the chance of fault triggering of gate as well as alarm. After adding the pressure sensor, the Arduino closes the gate after receiving both signal from IR sensor as well as pressure sensor.
