/* FUN_1801a4cc0 @ 1801a4cc0 */

void FUN_1801a4cc0(longlong *param_1,undefined8 param_2)

{
  longlong *local_8;
  
  if (*param_1 == 0) {
    FUN_1801f0c50(param_2,"CapacityOverflow",0x10);
    return;
  }
  local_8 = param_1;
  FUN_1801f0450(param_2,"AllocErr",8,"layout",6,&local_8,&DAT_180282070);
  return;
}


