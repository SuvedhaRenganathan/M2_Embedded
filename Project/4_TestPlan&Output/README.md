## High Level TestPlan
| ID  |                    Description                                                                |         Status          |
| --  | -----------                                                                                   |  ------------           |
| HL1 | The system shall be able to detect the train                                                  |  Implemented            |
| HL2 | It shall automatically open the railway gate according to vehicle detection                   |  Implemented            |
| HL3 | It shall automatically close the railway gate according to vehicle detection                  |  Partially Implemented  |
| HL3 | Buzzer shall ring if there is detection of the train                                          |  Implemented            |
| HL4 | LCD display shall be used to display the results                                              |  Not Implemented        |

##  Low Level TestPlan
| ID  |                    Description                                                      |       Status                   |                                                 
| --  | -----------                                                                         |    ------------                |                                            
| LL1 | With the ultrasonic sensor the system shall be able to detect the train             |     Implemented                |  
| LL2 | After the detection the railway gate open and close based the detection of train    |    Partially Implemented       |
| LL3 | The buzzer connected to the arduino shall ring when the train is detected           |    Implemented                 |
| LL4 | The LCD display shall display the distance of the train and gate is open or close   |    Not Implemented             |

