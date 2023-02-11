
void getColor()
{
  readRGB();

  if (red < 10 && grn < 10 && blu < 10) color = "WHITE";
  else if (red > 50 && red < 80 && grn > 70 && grn < 100 && blu > 50 && blu < 80) color = "BLACK";
  else if (red < 30 && red < grn && red < blu)
  {
    color = "RED"; r++;
  }
  else if ( red <=30 &&grn < 30 && grn < (red + 5) && grn < blu)
  {
    color = "GREEN"; g++;
  }
  else if (blu < 10 && blu < red && blu < grn)
  { 
  color = "BLUE"; 
  b++;
  }
  else  color = "NO_COLOR";
}
void readRGB()
{
  red = 0;
  grn = 0;
  blu = 0;
  int n = 10;
  for (int i = 0; i < n; ++i)
  {
    //read red component
    digitalWrite(s2, LOW);
    digitalWrite(s3, LOW);
    red = red + pulseIn(outPin, LOW);

    //read green component
    digitalWrite(s2, HIGH);
    digitalWrite(s3, HIGH);
    grn = grn + pulseIn(outPin, LOW);

    //let's read blue component
    digitalWrite(s2, LOW);
    digitalWrite(s3, HIGH);
    blu = blu + pulseIn(outPin, LOW);
  }
  red = red / n;
  grn = grn / n;
  blu = blu / n;
}
void servo1()  //servo red
{
  if (red < 30 && red < grn && red < blu)
  {
    svo1.write(50);
    delay(2000);
    svo1.write(0);
    m = 1;
  }
  else
    m = 0;
}
void servo2() //servo green
{
  if(red <=30 && grn < 30 && grn < (red + 5) && grn < blu)
  {
    svo2.write(130);
    delay(2000);
    svo2.write(180);
    n=1;
    
  }
  else
  n=0;
}
