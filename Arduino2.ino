// تعريف المنافذ
const int redLED = 8;
const int yellowLED = 9;
const int greenLED = 10;

void setup() {
  // إعداد المنافذ كإخراج
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop() {
  // تشغيل الضوء الأحمر
  digitalWrite(redLED, HIGH);
  digitalWrite(yellowLED, LOW);
  digitalWrite(greenLED, LOW);
  delay(5000); // الضوء الأحمر لمدة 5 ثوانٍ

  // تشغيل الضوء الأصفر
  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, HIGH);
  digitalWrite(greenLED, LOW);
  delay(2000); // الضوء الأصفر لمدة 2 ثانية

  // تشغيل الضوء الأخضر
  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(greenLED, HIGH);
  delay(5000); // الضوء الأخضر لمدة 5 ثوانٍ

  // تشغيل الضوء الأصفر مرة أخرى قبل العودة إلى الأحمر
  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, HIGH);
  digitalWrite(greenLED, LOW);
  delay(2000); // الضوء الأصفر لمدة 2 ثانية
}
