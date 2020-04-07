# Electronic-Clutch-for-Single-Phase-Induction-Motor

Introduction:
· In this project, instead of using centrifugal clutch for changeover from starting
winding to running winding we are going to use electronic clutch for single phase
induction motor. 
· This electronic clutch is made up of contactless tachometer and arduino board as 
a control circuit and SSR. 
· Arduino board is used to check RPM of motor at a given time and to switch the motor
winding at appropriate speed. Normal changeover speed is around 75-80 % of the motor 
running speed.

Working Principal:
· It is microcontroller based system. In this system the contactless tachometer is formed
  using IR led and IR phototransistor. 
. During starting condition the starting winding of motor is considered in circuit. So first
  of all the SSR is turned on so that the starting winding is now in parallel with running
  winding and fully operational. 
· The real time speed of the induction motor is checked continuously and displayed on LCD with
  the help of contactless tachometer.
· The normal changeover speed is around 75-80% of the normal speed of motor. Here we are going 
  to use single phase induction motor with 1400 RPM for demonstration purpose. So the changeover 
  speed will be around 1000 RPM.
· When the motor RPM will be greater than 1000 RPM the SSR will be made turned OFF and starting 
  winding will be cut off from the circuit. The controller continues to check RPM of motor at runtime.
· Whenever the RPM falls below 1000 RPM it again turns ON the SSR to increase speed of the motor to 
  normal speed.

Advantages
· High accuracy as compared to previous mechanical systems.
· We can adjust the changeover speed of winding according to the load
  condition.
· We can avoid chances of burning of motor.
