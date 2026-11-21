/* FUN_180136270 @ 180136270 */

void FUN_180136270(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_20 [16];
  
  FUN_1801ef980(local_20,param_2,"Headers",7);
  uVar1 = FUN_1801ef590(local_20,"stream_id",9,param_1 + 0x118,&DAT_18024b820);
  FUN_1801ef590(uVar1,"flags",5,param_1 + 0x11c,&DAT_18024b850);
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1801ef590(local_20,"protocol",8,param_1 + 0xd8,&PTR_LAB_18024b878);
  }
  if (*(char *)(param_1 + 0x115) != '\x02') {
    FUN_1801ef590(local_20,"stream_dep",10,param_1 + 0x110,"");
  }
  FUN_1801ef720(local_20);
  return;
}


