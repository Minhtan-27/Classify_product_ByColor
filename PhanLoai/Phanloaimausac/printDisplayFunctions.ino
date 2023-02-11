void showData(void)
{
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Red Color");
  lcd.setCursor(14,0);
  lcd.print("SL:");
  lcd.setCursor(17,0);
  lcd.print(r);
  lcd.setCursor(0,1);
  lcd.print("Green Color");
  lcd.setCursor(14,1);
  lcd.print("SL:");
  lcd.setCursor(17,1);
  lcd.print(g);
  lcd.setCursor(0,2);
  lcd.print("Blue Color");
  lcd.setCursor(14,2);
  lcd.print("SL:");
  lcd.setCursor(17,2);
  lcd.print(b);
  
}
void printData(void)
{
  Serial.print("red= ");
  Serial.print(red);
  Serial.print("green= ");
  Serial.print(grn);
  Serial.print("blue= ");
  Serial.print(blu);
  Serial.print ("-");
  Serial.print (color);
  Serial.print("-");
  Serial.print(m);
  Serial.print("-");
  Serial.print(n);
  Serial.print("-");
  Serial.print("SL:");
  Serial.print(r);
  Serial.print("-");
  Serial.print(b);
  Serial.print("-");
  Serial.println(g);
}
