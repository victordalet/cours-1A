void setup() {
  println(PGCD(71,21));
}


int PGCD(int a,int b) {
  if (b == 0) {
    return a;
  }
  return PGCD(b,a%b);
}

void beZout(int a, int b) {
  int c;
  int ua,va,vb,uc,vc;
  while (b!= 0) {
    c = a%b;
    a=b;
    b=c;
  }
}
