## High Level TestPlan
| ID  |                    Description                                               |         Status          |  Expected output      |
| --  | -----------                                                                  |  ------------           |-----------            |
| HL1 | The system shall be able to detect the train                                 |  Implemented            | sensor shall detects the vehicle/object|
| HL2 | It shall automatically open the railway gate according to vehicle detection  |  Implemented            | servo motor shall open as a gate |
| HL3 | It shall automatically close the railway gate according to vehicle detection |  Partially Implemented  | servo motor shall close if no vehicle detected|
| HL3 | Buzzer shall ring if there is detection of the train                         |  Implemented            | The buzzer shall ring when vehicle detected |
| HL4 | LCD display shall be used to display the results                             |  Not Implemented        | The LCD shall display the distance and gate condition|

##  Low Level TestPlan
| ID  |                    Description                                                    |       Status                   |  Actual Output |                                     
| --  | -----------                                                                         |    ------------              | ----------   |                                       
| LL1 | With the ultrasonic sensor the system shall be able to detect the train           |     Implemented                |  The sensor detects the vehicle |
| LL2 | After the detection the railway gate open and close based the detection of train|    Partially Implemented       |After detection the servo motor automatically turns on|
| LL3 | The buzzer connected to the arduino shall ring when the train is detected       |    Implemented            | The buzzer rings after the detection of the vehicle |
| LL4 | The LCD display shall display  distance of the train and gate is open or close|    Not Implemented          | the LCD does not diplay any results  |

