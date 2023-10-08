
// Maquina de Estados de Lectura
#define UNO matriz[0][0]
#define DOS matriz[0][1]
#define TRES matriz[0][2]
#define CUATRO matriz[1][0]
#define CINCO matriz[1][1]
#define SEIS matriz[1][2]
#define SIETE matriz[2][0]
#define OCHO matriz[2][1]
#define NUEVE matriz[2][2]
#define CERO matriz[3][1]

#define A matriz[0][3]
#define B matriz[1][3]
#define C matriz[2][3]
#define D matriz[3][3]

#define ASTERISCO matriz[3][0]
#define NUMERAL matriz[3][2]

// Matriz
#define FILAS 4
#define COLUMNAS 4

int filas[FILAS] = {22,23,24,25};
int columnas[COLUMNAS] = {26,27,28,29};

int matriz[FILAS][COLUMNAS];

void setup() 
{
  Serial.begin(9600);
  
  for(int i = 0; i < FILAS; i++)
  {
    pinMode(filas[i], INPUT);
  }
  for(int i = 0; i < COLUMNAS; i++)
  {
    pinMode(columnas[i], INPUT);
  }
}

void Lectura()
{
  //Numeros
  if(UNO == 0)
  {
    Serial.println("Uno presionado");
  }
  if(DOS == 0)
  {
    Serial.println("Dos presionado");
  }
  if(TRES == 0)
  {
    Serial.println("Tres presionado");
  }
  if(CUATRO == 0)
  {
    Serial.println("Cuatro presionado");
  }
  if(CINCO == 0)
  {
    Serial.println("Cinco presionado");
  }
  if(SEIS == 0)
  {
    Serial.println("Seis presionado");
  }
  if(SIETE == 0)
  {
    Serial.println("Siete presionado");
  }
  if(OCHO == 0)
  {
    Serial.println("Ocho presionado");
  }
  if(NUEVE == 0)
  {
    Serial.println("Nueve presionado");
  }
  if(CERO == 0)
  {
    Serial.println("Cero presionado");
  }

  //Letras
  if(A == 0)
  {
    Serial.println("A presionado");
  }
  if(B == 0)
  {
    Serial.println("B presionado");
  }
  if(C == 0)
  {
    Serial.println("C presionado");
  }
  if(D == 0)
  {
    Serial.println("D presionado");
  }

  //Caracteres especiales
  if(ASTERISCO == 0)
  {
    Serial.println("Asterisco presionado");
  }
  if(NUMERAL == 0)
  {
    Serial.println("Numeral presionado");
  }
}

void Matriz()
{
  for(int i = 0; i < FILAS; i++)
  {
     pinMode(filas[i], OUTPUT);
     digitalWrite(filas[i], LOW);

     for(int j = 0; j < COLUMNAS; j++)
     {
      pinMode(columnas[j], INPUT_PULLUP);
      matriz[i][j] = digitalRead(columnas[j]);
      pinMode(columnas[j], INPUT);
     }

     pinMode(filas[i], INPUT);
  }
}

void loop() 
{
  Matriz();
  Lectura();

}
