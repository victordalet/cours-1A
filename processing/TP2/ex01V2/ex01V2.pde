size(800,800);
background(#FFD800);
stroke(255,0,0);

for (int i = 0 ; i*30+40<800 ;i++) {
  for (int j = 0 ; j*30+40<800;j++){
    noFill();
    circle(20+j*30,20+i*30,20);
    circle(30+j*30,20+i*30,20);
    circle(20+j*30,30+i*30,20);
    circle(30+j*30,30+i*30,20);  
  }
}
