
/*==================== PROGRAM ==============================
 * Program: <+name+>
 * Date of Create: <+date+>
 * Update in: <+update+>
 * Author:Jefferson Bezerra dos Santos
 * Description: <+description+>
 *===========================================================
 */
#include <Arduino.h>
#include <Servo.h> 

Servo lefthEye;
Servo righEye;

/* ==================== MACROS ============================ */

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
    lefthEye.attach(LEFTHEYE);
    righEye.attach(RIGHEYE);

    pinMode(TRIG, OUTPUT);
    pinMode(ECHO, INPUT);



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

    if (distancia <= 30){
        lefthEye.write(70);
        righEye.write(70);
        delay(1000);
        lefthEye.write(-70);
        righEye.write(-70);
        delay(1000);
    }
}

/*----------End of function-----------------*/


