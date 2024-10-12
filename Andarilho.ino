
/*==================== PROGRAM ==============================
 * Programa:ArdarilhoArduino.ino 
 * Data de Criacao: sex 04 out 2024 10:28
 * Data de atualizacao: sex 04 out 2024 10:28
 * Autores:
 * Jefferson Bezerra dos Santos,
 * Izabelly Euginia
 * Maria Antônia 
 * Theves 
 * Descricao:  Projeto sustentavel Wall E 
 *===========================================================
 */
#include <Arduino.h>
#include <Servo.h>

Servo headServo;     // Criacao do objeto cabeca 
Servo armServoRigh;  // Cracao  do objeto braco direito 
Servo armServoLeft;  // Criacao do objeto braco esquerdo 

/* ================ MACROS & CONST ========================== */
//Configuracao da cabeca
#define PORTHEAD 9
#define TIMEHEAD 5000

//Configuracao dos bracos  
#define PORTARMRIGHT 10
#define PORTARMLEFTH 4
#define TIMEARM 1000

// Configuracao ultrassonico,  os olhos do robô
#define TRIG  12
#define ECHO  11

// Calculo da distancia do ultrassonico 
unsigned long int tempo;
unsigned long int distancia;

// Configuracao dos motores  
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
    headServo.attach(PORTHEAD);         // Diz que o objeto servo está ligado a PORTHEAD 
    armServoRigh.attach(PORTARMRIGHT);  // Diz que o objeto servo está ligado a PORTARMRIGHT  
    armServoLeft.attach(PORTARMLEFTH);  // Diz que o objeto servo está ligado a  PORTARMLEFTH 

    pinMode(leftLeg, OUTPUT);           // Definindo leftLeg como saida
    pinMode(rightLeg, OUTPUT);          // Definininod rightLeg como saida


    pinMode(TRIG, OUTPUT);             // Definindo TRIG como saida  
    pinMode(ECHO, INPUT);              // Definindo ECHO como saida
    
}
/*----------End of function-----------------*/



/*=================== FUNCTION SETUP () ======================
 * Function: loop()
 * Description: Put code for loop
 * ==========================================================
 */
void loop() {

    digitalWrite(TRIG, HIGH);             // Definindo TRIG como ligada 
    delay(10);                            // Espera de 10 millisegundos
    digitalWrite(TRIG, LOW);              // Definindo TRIG como desligado  
    tempo = pulseIn(ECHO, HIGH, 23529);   // Calculando o tempo do ultrassônico  
    distancia = tempo/58;                 // Calculando a distância    
    delay(100);                           // Espera 100 millisegundos  

    if (distancia <= 30){                            // Controle  baseado na distancia 
        motorMovimentation(leftLeg, rightLeg,  500); // Controla a movimentacao do motor baseado nos motores 
        headMoviment(TIMEHEAD);                      // Movimentacao da cabeca 
        armMovimentRight(TIMEARM);                   // Movimentacao do braco direito
        armMovimentLeft(TIMEARM);                    // Movimentacao do braco esquerdo
    }
}

/*----------End of function-----------------*/


/*======================= FUNCTION ==========================
 * Function: head_moviment  
 * Description: Control the moviment of robo  
 *===========================================================
 */

void headMoviment(int time){
    headServo.write(110); // Comando para mandar o servo para posição 110
    delay(time);          // Espera de time ms
    headServo.write(50);  // Comando para mandar o servo para posição 50
    delay(time);          // Espera de time ms
    headServo.write(110); // Comando para mandar o servo para posição 110
    delay(time);          // Espera de time ms
    headServo.write(110); // Comando para mandar o servo para posição 110
    headServo.write(160); // Comando para mandar o servo para posição 160
    delay(time);          // Espera de time ms


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
