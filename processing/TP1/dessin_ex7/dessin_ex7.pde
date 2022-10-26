size(500,500);
int val = 0;
int new_val = 0;
int val_h = 0;
int new_val_h = 0;
while (val<500){
  new_val = (int)random(5,30);
  line(val,val,val+new_val,val);
  line(val+new_val,val,val+new_val,val+new_val);
  line(val+new_val,val+new_val,val,val+new_val);
  line(val,val+new_val,val,val);
  /*------------------------*/
  line(val_h,new_val_h+val_h,val,new_val+val);
  line(new_val_h+val_h,val_h,new_val+val,val);
  val_h = val;
  new_val_h = new_val;
  val+=new_val;
}
