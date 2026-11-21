/* FUN_1801f52d0 @ 1801f52d0 */

undefined8 FUN_1801f52d0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1801ee880();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_180294648,2);
    if (cVar1 == '\0') {
      uVar2 = FUN_1801ee880(param_1 + 8,param_2);
      return uVar2;
    }
  }
  return 1;
}


