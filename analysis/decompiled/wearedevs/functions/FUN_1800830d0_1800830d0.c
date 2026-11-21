/* FUN_1800830d0 @ 1800830d0 */

void FUN_1800830d0(undefined8 param_1)

{
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  char local_10;
  
  FUN_180054ff0(&local_30,param_1,&DAT_18020d618);
  if (local_10 != '\x02') {
    (**(code **)(local_30 + 0x20))(local_18,local_28,local_20);
  }
  FUN_180054ff0(&local_30,param_1,&DAT_18020d638);
  if (local_10 != '\x02') {
    (**(code **)(local_30 + 0x20))(local_18,local_28,local_20);
  }
  FUN_180054ff0(&local_30,param_1,&DAT_18020d658);
  if (local_10 != '\x02') {
    (**(code **)(local_30 + 0x20))(local_18,local_28,local_20);
  }
  FUN_180054ff0(&local_30,param_1,&DAT_18020d678);
  if (local_10 == '\x02') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001800831ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(local_30 + 0x20))(local_18,local_28,local_20);
  return;
}


