task main () {


}
float choose;
float speed;
float value;
float mot;
void motor_a(float speed,float choose,float value) {
	


		if (choose == 1) {

		nMotorEncoder[motorA]=0;
		motor[motorA]=speed;
		while(nMotorEncoder[motorA]<value);
		motor[motorA]=0;


	}
		if (choose == 2) {
		motor[motorA]=speed;
		wait1Msec(value);
		motor[motorA]=0;


	}


}
void motor_b(float speed,float choose, float value) {
	if (choose == 1) {

		nMotorEncoder[motorB]=0;
		motor[motorB]=speed;
		while(nMotorEncoder[motorB]<value);
		motor[motorB]=0;


	}
	if (choose == 2) {
		motor[motorB]=speed;
		wait1Msec(value);
		motor[motorB]=0;


	}
}
void motor_c(float speed,float choose,float value) {
	if (choose == 1) {

		nMotorEncoder[motorC]=0;
		motor[motorC]=speed;
		while(nMotorEncoder[motora]<value);
		motor[motorC]=0;


	}
	if (choose == 2) {
		motor[motorC]=speed;
		wait1Msec(value);
		motor[motorC]=0;


	}
}
float speed2;
char datchik;
float grey;
void left_krug (float speed,float speed2,float gradus,float grey, char datchik) {
	nMotorEncoder[motorC]=0;
	motor[motorB]=-45;
	motor[motorC]=45;
	while(nMotorEncoder[motorC]<gradus);
	motor[motorB]=0;
	motor[motorC]=0;
	wait1Msec(800);
	motor[motorB]=speed;
	motor[motorC]=speed2;
	while(SensorValue[datchik]>grey);
	motor[motorB]=45;
	motor[motorC]=45;
	wait1Msec(600);
	nMotorEncoder[motorB]=0;
	motor[motorB]=0;
	motor[motorC]=0;
	wait1Msec(800);
	motor[motorB]=-45;
	motor[motorC]=45;
	gradus = gradus*-1;
	while(nMotorEncoder[motorB]<gradus);



}

void right_krug (float speed,float speed2,float gradus,float grey, char datchik) {
	nMotorEncoder[motorB]=0;
	motor[motorB]=45;
	motor[motorC]=-45;
	while(nMotorEncoder[motorB]<gradus);
	motor[motorB]=0;
	motor[motorC]=0;
	wait1Msec(800);
	motor[motorB]=speed;
	motor[motorC]=speed2;
	while(SensorValue[datchik]>grey);
	motor[motorB]=45;
	motor[motorC]=45;
	wait1Msec(600);
	nMotorEncoder[motorB]=0;
	motor[motorB]=0;
	motor[motorC]=0;
	wait1Msec(800);
	motor[motorB]=45;
	motor[motorC]=-45;
	gradus = gradus*-1;
	while(nMotorEncoder[motorB]<gradus);



}




void motors_forward (float speed, float choose, float value) {

	if (choose == 1) {

		nMotorEncoder[motorB]=0;
		motor[motorB]=speed;
		motor[motorC]=speed;
		while(nMotorEncoder[motorB]<value);
		motor[motorB]=0;
		motor[motorC]=0;

	}
	if (choose == 2) {
		motor[motorB]=speed;
		motor[motorC]=speed;
		wait1Msec(value);
		motor[motorB]=0;
		motor[motorC]=0;

	}
}

float gradus;
void left (float speed, float speed2, float value) {

nMotorEncoder[motorC]=0;

motor[motorB]=speed2;
motor[motorC] = speed;

while(nMotorEncoder[motorC]<value);

motor[motorB]=0;
motor[motorC]=0;




}


void right (float speed, float gradus) {
	nMotorEncoder[motorB]=0;
	motor[motorB]=speed;
	motor[motorC]=speed;

	while(nMotorEncoder[motorB]<gradus);
	motor[motorB]=0;
	motor[motorC]=0;
}
