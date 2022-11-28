size(800,500);
background(#CCCCCC);
stroke(0,0,0);
int tiles = (int) random(5,50);
int joint_thickness = (int) random(2,8);

for (int i = 0 ; i*tiles+(2*i*joint_thickness)<500 ;i++) {
  for (int j = 0 ; j*tiles+(2*j*joint_thickness)<800;j++){
    noFill();
    rect(20+j*20,20+i*20,20+j*20,20+i*20,20+j*20,20+i*20)  ;}
}
