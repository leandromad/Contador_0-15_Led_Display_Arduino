//DECLARA LEDS DISPLAY
int a = 3;//Correspondente ao LED a
int b = 4;//Correspondente ao LED b
int c = 5;//Correspondente ao LED c
int d = 6;//Correspondente ao LED d
int e = 7;//Correspondente ao LED e
int f = 9;//Correspondente ao LED f
int g = 8;//Correspondente ao LED g

//DECLARA OS PARAMETROS DE INICIO, PARAR, ZERAR E FLAG
int inicio = 0;
int para = 0;
int zera = 0;
int flag = 0;
int cont = 0;

//DECLARA LEDS LIGAR, PARAR E ZERAR
int LedVerde = 2, LedAmarelo = 1, LedVermelho = 0;

void setup(){

  ////////// DECLARA ENTRADAS E SAÍDAS ////////////////
  pinMode(LedVermelho, OUTPUT);
  pinMode(LedAmarelo, OUTPUT);
  pinMode(LedVerde, OUTPUT);
 //
 //
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
 //
 //
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
 //
 //
  pinMode(13, INPUT);
  pinMode(12, INPUT);
  pinMode(11, INPUT);
 //
 //

 ////////// TESTA LEDS E DISPLAY ANTES DE INICIAR A ROTINA //////////
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(A0, HIGH);
  digitalWrite(A1, HIGH);
  digitalWrite(A2, HIGH);
  digitalWrite(A3, HIGH);
  delay(500);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(A0, LOW);
  digitalWrite(A1, LOW);
  digitalWrite(A2, LOW);
  digitalWrite(A3, LOW);
  delay(1000);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(0, HIGH);
}

// FUNÇÕES PARA CADA NÚMERO

void zero() {
  //Numero 0 no display 7 segmentos
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
      
  // 0 binario nos led vermelhos
  digitalWrite(A0, LOW);
  digitalWrite(A1, LOW);
  digitalWrite(A2, LOW);
  digitalWrite(A3, LOW);
}

void um() {
  //Numero 1 no display 7 segmentos
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);

  // 1 binario nos led vermelhos
  digitalWrite(A0, HIGH);
  digitalWrite(A1, LOW);
  digitalWrite(A2, LOW);
  digitalWrite(A3, LOW);
}

void dois() {
  // Numero 2 no display 7 segmentos
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
        
  //Numero 2 binario nos led vermelhos
  digitalWrite(A0, LOW);
  digitalWrite(A1, HIGH);
  digitalWrite(A2, LOW);
  digitalWrite(A3, LOW);
}

void tres() {
  //Numero 3 no display 7 segmentos
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  
  //Numero 3 binario nos led vermelhos
  digitalWrite(A0, HIGH);
  digitalWrite(A1, HIGH);
  digitalWrite(A2, LOW);
  digitalWrite(A3, LOW);
}

void quatro() {
  //Numero 4 no display 7 segmentos
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  
  //Numero 4 binario nos led vermelhos
  digitalWrite(A0, LOW);
  digitalWrite(A1, LOW);
  digitalWrite(A2, HIGH);
  digitalWrite(A3, LOW);
}

void cinco() {
  //Numero 5 no display 7 segmentos
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  
  //Numero 5 binario nos leds vermelhos
  digitalWrite(A0, HIGH);
  digitalWrite(A1, LOW);
  digitalWrite(A2, HIGH);
  digitalWrite(A3, LOW);
}

void seis() {
  //Numero 6 no display 7 segmentos
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  
  //Numero 6 binario nos leds vermelhos
  digitalWrite(A0, LOW);
  digitalWrite(A1, HIGH);
  digitalWrite(A2, HIGH);
  digitalWrite(A3, LOW);
}

void sete() {
  //Numero 7 no display 7 segmentos
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  
  //Numero 7 binario nos leds vermelhos
  digitalWrite(A0, HIGH);
  digitalWrite(A1, HIGH);
  digitalWrite(A2, HIGH);
  digitalWrite(A3, LOW);
}

void oito() {
  //Numero 8 no display 7 segmentos
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  
  //Numero 8 binario nos leds vermelhos
  digitalWrite(A0, LOW);
  digitalWrite(A1, LOW);
  digitalWrite(A2, LOW);
  digitalWrite(A3, HIGH);
}

void nove() {
  //Numero 9 no display 7 segmentos
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  
  //Numero 9 binario nos leds vermelhos
  digitalWrite(A0, HIGH);
  digitalWrite(A1, LOW);
  digitalWrite(A2, LOW);
  digitalWrite(A3, HIGH);
}

void dez() {
  //Numero 10(Letra A) no display 7 segmentos
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  
  //Numero 10 binario nos leds vermelhos
  digitalWrite(A0, LOW);
  digitalWrite(A1, HIGH);
  digitalWrite(A2, LOW);
  digitalWrite(A3, HIGH);
}

void onze() {
  //Numero 11(Letra B) no display 7 segmentos
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  
  //Numero 11 binario nos leds vermelhos
  digitalWrite(A0, HIGH);
  digitalWrite(A1, HIGH);
  digitalWrite(A2, LOW);
  digitalWrite(A3, HIGH);
}

void doze() {
  //Numero 12(Letra C) no display 7 segmentos
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  
  //Numero 12 binario nos leds vermelhos
  digitalWrite(A0, LOW);
  digitalWrite(A1, LOW);
  digitalWrite(A2, HIGH);
  digitalWrite(A3, HIGH);
}

void treze() {
  //Numero 13(Letra D) no display 7 segmentos
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  
  //Numero 13 binario nos leds vermelhos
  digitalWrite(A0, HIGH);
  digitalWrite(A1, LOW);
  digitalWrite(A2, HIGH);
  digitalWrite(A3, HIGH);
}

void catorze() {
  //Numero 14(Letra E) no display 7 segmentos
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  
  //Numero 14 binario nos leds vermelhos
  digitalWrite(A0, LOW);
  digitalWrite(A1, HIGH);
  digitalWrite(A2, HIGH);
  digitalWrite(A3, HIGH);
}

void quinze() {
  //Numero 14(Letra E) no display 7 segmentos
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  
  //Numero 15 binario nos leds vermelhos
  digitalWrite(A0, HIGH);
  digitalWrite(A1, HIGH);
  digitalWrite(A2, HIGH);
  digitalWrite(A3, HIGH);
} 

/////////// CONTAGEM ////////////
void contagem() {
  delay(1000);
  cont = cont +1;
  if(cont == 16){
     cont=0;
  }
}

/////////// INICIO ROTINA ///////////
void loop()
{
  //Leitura dos botões
  inicio = digitalRead(13);
  para = digitalRead(12);
  zera = digitalRead(11);
  
 if(para == 1){
    flag = 0;
    digitalWrite(0, LOW);
    digitalWrite(1, HIGH);
    digitalWrite(2, LOW);
  }
  
  //Configura botão zerar
  if(zera == 1){
    digitalWrite(0, HIGH);
    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    cont = 0;
    flag = 0;
    zero();
    digitalWrite(0, HIGH);
  }
  
  //Configura botão inicio
  if(inicio==1 || flag==1){
    flag=1;
    digitalWrite(2, HIGH);
    digitalWrite(1, LOW);
    digitalWrite(0, LOW);
    //Numero 0
    if(cont == 0){
       zero();  
    } 

    contagem();
        
    // Numero 1
    if(cont == 1){ 
       um();
    }  
        
    //Numero 2
    if(cont == 2){
       dois();
    }  
        
    //Numero 3
    if(cont == 3){
       tres();
    }
        
    //Numero 4
    if(cont == 4){
       quatro();
    }
        
    //Numero 5
    if(cont == 5){
       cinco();
    }
        
    //Numero 6
    if(cont == 6){
       seis();
    }
    
    //Numero 7
    if(cont == 7){
       sete();
    }
        
    //Numero 8
    if(cont == 8){
       oito();
    }
        
    //Numero 9
    if(cont == 9){
       nove(); 
    }
        
    //Numero 10
    if(cont == 10){
       dez();
    }
        
    //Numero 11
    if(cont == 11){
       onze();
    }
        
    //Numero 12
    if(cont == 12){
       doze();
    }
        
    //Numero 13
    if(cont == 13){
       treze();
    }
        
    //Numero 14
    if(cont == 14){
      catorze(); 
    }
          
    //Numero 15
    if(cont == 15){
      quinze();
    }
    
  }
 }
