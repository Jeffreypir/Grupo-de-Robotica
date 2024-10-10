
/*==================== PROGRAM ==============================
 * Program:ArdarilhoArduino.ino 
 * Date of Create: sex 04 out 2024 10:28
 * Update in: sex 04 out 2024 10:28
 * Authors:
 * Jefferson Bezerra dos Santos,
 * Izabelly 
 * Wingredi 
 * Lorena  
 *
 * Description:   
 *===========================================================
 */
#include <Arduino.h>
#include <Servo.h>

Servo headServo;     // Create object head    
Servo armServoRigh;  // Create object arm 
Servo armServoLeft;  // Create  object arm

/* ================ MACROS & CONST ========================== */
//Configuration of Head
#define PORTHEAD 9
#define TIMEHEAD 5000

//Configuration of Arm 
#define PORTARMRIGHT 10
#define PORTARMLEFTH 4
#define TIMEARM 1000

// Configuration of Eyes
#define TRIG  12
#define ECHO  11

// Calculate of distance ultrassonic
unsigned long int tempo;
unsigned long int distancia;

// Configuration of motors 
unsigned int leftLeg = 5;
unsigned int rightLeg = 6;
/* ======================== End  ===========================*/



/* ================ PROTOTYPE OF FUNCTIONS ================ */
void headMoviment(int time);
void armMovimentRight(int time);
void armMovimentLeft(int time);
void motorMovimentation(int motor1, int motor2, int time);
/* ================== End of prototype =====================*/



/*=================== FUNCTION SETUP () ======================
 * Function: setup()
 * Description: Put setup configuration 
 * ==========================================================
 */
void setup() {
    headServo.attach(PORTHEAD);  // Diz que o objeto "myservo" está ligado ao pino 9
    armServoRigh.attach(PORTARMRIGHT);  // Diz que o objeto "myservo" está ligado ao pino 9 
    armServoLeft.attach(PORTARMLEFTH);  // Diz que o objeto "myservo" está ligado ao pino 9 

    pinMode(leftLeg, OUTPUT);
    pinMode(rightLeg, OUTPUT);

    //pinMode(motor, OUTPUT);

    pinMode(TRIG, OUTPUT);
    pinMode(ECHO, INPUT);



    Serial.begin(9600);
   
    

}
/*----------End of function-----------------*/



/*=================== FUNCTION SETUP () ======================
 * Function: loop()
 * Description: Put code for loop
 * ==========================================================
 */
void loop() {

    digitalWrite(TRIG, HIGH);
    delay(10);
    digitalWrite(TRIG, LOW);
    tempo = pulseIn(ECHO, HIGH, 23529);
    distancia = tempo/58;
    delay(100);

    Serial.println(distancia);

    if (distancia <= 30){
        motorMovimentation(leftLeg, rightLeg,  500);
        headMoviment(TIMEHEAD);
        armMovimentRight(TIMEARM);  
        armMovimentLeft(TIMEARM);  
    }
}

/*----------End of function-----------------*/


/*======================= FUNCTION ==========================
 * Function: head_moviment  
 * Description: Control the moviment of robo  
 *===========================================================
 */

void headMoviment(int time){
    headServo.write(110); // Comando para mandar o servo para posição 0
    delay(time);          // Espera de 500 ms
    headServo.write(50);  // Comando para mandar o servo para posição 0
    delay(time);          // Espera de 500 ms
    headServo.write(110); // Comando para mandar o servo para posição 0
    delay(time);          // Espera de 500 ms
    headServo.write(110); // Comando para mandar o servo para posição 0
    headServo.write(160); // Comando para mandar o servo para posição 0
    delay(time);          // Espera de 500 ms


}/*---------End of function-------------*/


/*======================= FUNCTION ==========================
 * Function: armMovimentRight() 
 * Description: Movimentation of arm robotic  
 *===========================================================
 */

void armMovimentRight(int time){
    armServoRigh.write(40); // Comando para mandar o servo para posição 0
    delay(time);        // Espera de 500 ms
    armServoRigh.write(90); // Comando para mandar o servo para posição 0
    delay(time);        // Espera de 500 ms
    armServoRigh.write(130);// Comando para mandar o servo para posição 0
    delay(time);        // Espera de 500 ms

}/*---------End of function-------------*/

/*======================= FUNCTION ==========================
 * Function: armMovimentLeft
 * Description: Movimentation of arm robotic  
 *===========================================================
 */

void armMovimentLeft(int time){
    armServoLeft.write(180); // Comando para mandar o servo para posição 0
    delay(time);        // Espera de 500 ms
    armServoLeft.write(90); // Comando para mandar o servo para posição 0
    delay(time);        // Espera de 500 ms
    armServoLeft.write(0); // Comando para mandar o servo para posição 0
    delay(2*time);        // Espera de 500 ms

}/*---------End of function-------------*/


/*======================= FUNCTION ==========================
 * Function: motor 
 * Description: Movimentation of motor 
 *===========================================================
 */

void motorMovimentation(int motor1,  int motor2, int time){
    digitalWrite(motor1, HIGH);
    digitalWrite(motor2, HIGH);
    delay(time);
    digitalWrite(motor1, LOW);
    digitalWrite(motor2, LOW);
    delay(time);
    digitalWrite(motor2, HIGH);
    delay(200);
    digitalWrite(motor2, LOW);
}/*---------End of function-------------*/
