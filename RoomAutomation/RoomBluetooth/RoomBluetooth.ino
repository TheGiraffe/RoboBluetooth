
int relay1 = 53;
int relay2 = 52;
int relay3 = 51;
int relay4 = 50;
int relay5 = 49;
int relay6 = 48;
int relay7 = 47;
int relay8 = 46;
char junk;
String inputString="";
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
  digitalWrite(relay3, HIGH);
  digitalWrite(relay4, HIGH);
  digitalWrite(relay5, HIGH);
  digitalWrite(relay6, HIGH);
  digitalWrite(relay7, HIGH);
  digitalWrite(relay8, HIGH);
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);
  pinMode(relay5, OUTPUT);
  pinMode(relay6, OUTPUT);
  pinMode(relay7, OUTPUT);
  pinMode(relay8, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  if(Serial.available()){
    while(Serial.available()){
      char inChar = (char)Serial.read();
      inputString += inChar;
      }
       Serial.println(inputString);
    while (Serial.available() > 0)  
    { junk = Serial.read() ; }      // clear the serial buffer
    if(inputString == "a"){         //in case of 'a' turn the LED on
      digitalWrite(relay2, HIGH);
      digitalWrite(relay3, HIGH);
      digitalWrite(relay4, HIGH);
      digitalWrite(relay5, HIGH);
      digitalWrite(relay6, HIGH);
      digitalWrite(relay7, HIGH);
      digitalWrite(relay8, HIGH);
      digitalWrite(relay1, LOW);  
    }else if(inputString == "b"){   //incase of 'b' turn the LED off
      digitalWrite(relay1, HIGH);
      digitalWrite(relay3, HIGH);
      digitalWrite(relay4, HIGH);
      digitalWrite(relay5, HIGH);
      digitalWrite(relay6, HIGH);
      digitalWrite(relay7, HIGH);
      digitalWrite(relay8, HIGH);
      digitalWrite(relay2, LOW);  
    }else if(inputString == "c"){   //incase of 'b' turn the LED off
      digitalWrite(relay1, HIGH);
      digitalWrite(relay2, HIGH);
      digitalWrite(relay4, HIGH);
      digitalWrite(relay5, HIGH);
      digitalWrite(relay6, HIGH);
      digitalWrite(relay7, HIGH);
      digitalWrite(relay8, HIGH);
      digitalWrite(relay3, LOW);  
    }else if(inputString == "d"){   
      digitalWrite(relay1, HIGH);
      digitalWrite(relay2, HIGH);
      digitalWrite(relay3, HIGH);
      digitalWrite(relay5, HIGH);
      digitalWrite(relay6, HIGH);
      digitalWrite(relay7, HIGH);
      digitalWrite(relay8, HIGH);
      digitalWrite(relay4, LOW);  
    }else if(inputString == "e"){   
      digitalWrite(relay1, HIGH);
      digitalWrite(relay2, HIGH);
      digitalWrite(relay3, HIGH);
      digitalWrite(relay4, HIGH);
      digitalWrite(relay6, HIGH);
      digitalWrite(relay7, HIGH);
      digitalWrite(relay8, HIGH);
      digitalWrite(relay5, LOW);  
    }else if(inputString == "f"){   
      digitalWrite(relay1, HIGH);
      digitalWrite(relay2, HIGH);
      digitalWrite(relay3, HIGH);
      digitalWrite(relay4, HIGH);
      digitalWrite(relay5, HIGH);
      digitalWrite(relay7, HIGH);
      digitalWrite(relay8, HIGH);
      digitalWrite(relay6, LOW);  
    }else if(inputString == "g"){   
      digitalWrite(relay1, HIGH);
      digitalWrite(relay2, HIGH);
      digitalWrite(relay3, HIGH);
      digitalWrite(relay4, HIGH);
      digitalWrite(relay5, HIGH);
      digitalWrite(relay6, HIGH);
      digitalWrite(relay8, HIGH);
      digitalWrite(relay7, LOW);  
    }else if(inputString == "h"){   
      digitalWrite(relay1, HIGH);
      digitalWrite(relay2, HIGH);
      digitalWrite(relay3, HIGH);
      digitalWrite(relay4, HIGH);
      digitalWrite(relay5, HIGH);
      digitalWrite(relay6, HIGH);
      digitalWrite(relay7, HIGH);
      digitalWrite(relay8, LOW);  
    }else if(inputString == "n"){   
      digitalWrite(relay1, HIGH);
      digitalWrite(relay2, HIGH);
      digitalWrite(relay3, HIGH);
      digitalWrite(relay4, HIGH);
      digitalWrite(relay5, HIGH);
      digitalWrite(relay6, HIGH);
      digitalWrite(relay7, HIGH);
      digitalWrite(relay8, HIGH);  
    }
    inputString = "";
    }
  
}
