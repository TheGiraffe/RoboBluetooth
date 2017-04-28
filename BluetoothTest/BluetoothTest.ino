
int green = 13;
int red = 12;
int blue = 11;
char junk;
String inputString="";
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
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
    if(inputString == "g"){         //in case of 'a' turn the LED on
      digitalWrite(red, LOW);
      digitalWrite(blue, LOW);
      digitalWrite(green, HIGH);  
    }else if(inputString == "r"){   //incase of 'b' turn the LED off
      digitalWrite(green, LOW);
      digitalWrite(blue, LOW);
      digitalWrite(red, HIGH);
    }else if(inputString == "b"){   //incase of 'b' turn the LED off
      digitalWrite(green, LOW);
      digitalWrite(red, LOW);
      digitalWrite(blue, HIGH);
    }else if(inputString == "n"){   //incase of 'b' turn the LED off
      digitalWrite(green, LOW);
      digitalWrite(red, LOW);
      digitalWrite(blue, LOW);
    }
    inputString = "";
    }
  
}
