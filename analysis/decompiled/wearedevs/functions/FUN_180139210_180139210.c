/* FUN_180139210 @ 180139210 */

void FUN_180139210(longlong param_1,undefined8 param_2)

{
  undefined1 local_20 [16];
  
  FUN_1801ef980(local_20,param_2,"GoAway",6);
  FUN_1801ef590(local_20,"error_code",10,param_1 + 0x24,&DAT_18024df00);
  FUN_1801ef590(local_20,"last_stream_id",0xe,param_1 + 0x20,&DAT_18024dea0);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1801ef590(local_20,"debug_data",10,param_1,&PTR_LAB_18024df30);
  }
  FUN_1801ef720(local_20);
  return;
}


