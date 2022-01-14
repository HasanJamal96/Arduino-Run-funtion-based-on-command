struct func{ 
  String cmd; 
  void (*fn)();
};


void on();
void off();


func test[] = {
  { "ON",  on }, //command, name of function
  { "OFF", off},
};


void setup(){
  Serial.begin(115200);
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);

}


void loop(){
  String COMMAND = "ON";
  
  for(int i=0; i<2; i++){
    if(COMMAND == test[i].cmd)
	  test[i].fn();
  }
}

void on(){
  Serial.println("LED ON");
   digitalWrite(13, HIGH); // switch OFF LED
  }

void off(){
   Serial.println("LED OFF");
    digitalWrite(13, LOW); // switch OFF LED
  }
