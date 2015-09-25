#include <gpsposition.h>
#include <Time.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  GPSPosition p;
  char lat[12] = {0};
  int err = 0;
  
  if ((err = p.setLatitude((const char *) "45.065670")) < 0)
  {
    Serial.print("Error: invalid form!!  ");
    Serial.println(err);
  }
  else
  {
    Serial.print("latitude: ");
    Serial.println(p.latitude());
  }

  if ((err = p.setLongitude((const char *) "7.658086")) < 0)
  {
    Serial.print("Error: invalid form!!  ");
    Serial.println(err);
  }
  else
  {
    Serial.print("longitude: ");
    Serial.println(p.longitude());
  }


  if ((err = p.setAltitude((const char *) "253")) < 0)
  {
    Serial.print("Error: invalid form!!  ");
    Serial.println(err);
  }
  else
  {
    Serial.print("altitude: ");
    Serial.println(p.altitude());
  }

}

void loop() {
  // put your main code here, to run repeatedly: 
  
}