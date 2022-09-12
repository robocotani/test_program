// Arduino Nano 動作確認用
// 本体チップLED「L」を点滅(1Hz)
// 動作確認済み

int delay_time = 500;
int LED_PIN = 13;

void setup() {

  // プログラム情報表示
  Serial.begin(9600);
  Serial.println("Program : LED_test");
  
  // LEDピン定義
  pinMode(LED_PIN,OUTPUT);
  
}

void loop() {

  // LED点滅
  digitalWrite(LED_PIN,HIGH);
  delay(delay_time);
  digitalWrite(LED_PIN,LOW);
  delay(delay_time);
  
}
