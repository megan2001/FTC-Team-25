#pragma config(Hubs,  S1, HTMotor,  none,     none,     none)
#pragma config(Hubs,  S2, HTMotor,  none,     none,     none)
#pragma config(Sensor, S3,     IRseeker,       sensorHiTechnicIRSeeker600)
#pragma config(Motor,  mtr_S1_C1_1,     motor1,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     motor2,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S2_C1_1,     motor3,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S2_C1_2,     motor4,        tmotorTetrix, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "sensors\drivers\hitechnic-irseeker-v2.h"
#include "ir_utils.h"

typedef enum dir_
{	right,
	left,
	center,
} direction;

direction get_dir_to_beacon(void)
{
	int segment;

	segment = HTIRS2readACDir(IRSeeker);

	switch (segment) {
	case 1:
	case 2:
	case 3:
	case 4:
		return left;
		break;
	case 5:
		return center;
		break;
	case 6:
	case 7:
	case 8:
	case 9:
		return right;
	 	break;
	}
}

direction get_dir_to_beacon();
{
	switch (segment){
	case left:
		return nxtDisplayTextLine( 5 , "turning left" )
		break;
	case right:
		return nxtDisplayTextLine( 5 , "turning right" )
		break;
	case center:
		return nxtDisplayTextLine( 5 , "moving foward" )
		break;
	}
}

task main()
{
}