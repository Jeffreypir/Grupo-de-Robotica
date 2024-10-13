
/*==================== PROGRAM ==============================
 * Program: Animatronico.ino
 * Date of Create: 13/10/2024
 * Update in: 13/10/2024
 * Author:Jefferson Bezerra dos Santos
 * Description: Animatronic Arduino
 *===========================================================
 */
// Library of project 
#include <Arduino.h>
#include <Servo.h> 

// Declaration of Eyes of animatronic
Servo lefthEye;
Servo righEye;

/* ==================== MACROS ============================ */
//Definition of time 
#define TIME 1000
/// Movimentation of Eyes
#define LEFTHEYE 10
#define RIGHEYE   9

// Configuration of Eyes
#define TRIG  12
#define ECHO  11

/* ================== End of macro =========================*/


/* ==================== VARIABLES ============================ */

// Calculate of distance ultrassonic
unsigned long int tempo;
unsigned long int distancia;

/* ================== End of variables =========================*/


/* ================ PROTOTYPE OF FUNCTIONS ================ */

/* ================== End of prototype =====================*/


/*=================== FUNCTION SETUP () ======================
 * Function: setup()
 * Description: Put setup configuration 
 * ==========================================================
 */
void setup() {
    lefthEye.attach(LEFTHEYE);  // Definition of port of Lefth Eye 
    righEye.attach(RIGHEYE);    // Definition of port of Right Eye

    pinMode(ECHO, INPUT);      // Input of Ultrassonic 
    pinMode(TRIG, OUTPUT);     // Output of Ultrassonic 
  



}
/*----------End of function-----------------*/



/*=================== FUNCTION SETUP () ======================
 * Function: loop()
 * Description: Put code for loop
 * ==========================================================
 */
void loop() {
    
    digitalWrite(TRIG, HIGH); // Port Trig in HIGH
    delay(10); // Delay of 10 ms
    digitalWrite(TRIG, LOW);
    tempo = pulseIn(ECHO, HIGH, 23529); // Time of Ultrassonic 
    distancia = tempo/58; // Distance of Ultrassonic 
    delay(100);  // Delay of 100 ms 

    if (distancia <= 30){ // If distance less than or equal, then movimentation of Eyes
       //Movimentation of Eyes 
        lefthEye.write(70);
        righEye.write(70);
        delay(TIME);
        //Movimentation of Eyes
        lefthEye.write(-70);
        righEye.write(-70);
        delay(TIME;
    }
}

/*----------End of function-----------------*/


