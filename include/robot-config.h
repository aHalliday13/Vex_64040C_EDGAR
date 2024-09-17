using namespace vex;

extern brain Brain;

// VEXcode devices
extern controller Controller1;
extern inertial inertialSensor;
extern digital_out frontHook;
extern motor frontMogo;
extern motor ringLift;
extern motor LeftDriveSmartA;
extern motor LeftDriveSmartB;
extern motor LeftDriveSmartC;
extern motor RightDriveSmartA;
extern motor RightDriveSmartB;
extern motor RightDriveSmartC;
extern digital_out rearHook;
extern digital_out autonHook;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );