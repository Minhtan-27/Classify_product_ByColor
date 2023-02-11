#include <Stepper.h>
//Khai báo các chân để điều khiển Step...tạo đối tượng myStepper
int stepsPerRevolution =200;
Stepper myStepper(stepsPerRevolution, 8,9,10,11);            
 
void setup() {  
  myStepper.setSpeed(60); 
  Serial.begin(9600);
}
 
void loop() {
  Serial.println("Quay ngược chiều kim đồng hồ");
  myStepper.step(-50);
  
}
