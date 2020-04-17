

//#include "shyamlalpins.h"


void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  inIt();
  IRinIT();
  ledInit();

}

void loop()
{
    forward(210,210);
       //printCalibrated();
     // digitalWrite(13,HIGH);
    //  receive();
    // calculateError();
    // pid();
    //grid();
    //printVal();
    // lineFollowing(turnDirection);
}

//577.00,487.00,429.00,578.00,331.00,719.00,
//101.00,95.00,92.00,93.00,90.00,317.00,







