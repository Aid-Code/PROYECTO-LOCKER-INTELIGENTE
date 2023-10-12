String lectura;
const String pass = "AidenEstuvoAqui";

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Escriba su contraseña por favor");

  lectura = Serial.readString();

  while(lectura == pass)
  {
    Bienvenido();
  }
}

void Bienvenido()
{
  Serial.println("Bienvenido");
}
