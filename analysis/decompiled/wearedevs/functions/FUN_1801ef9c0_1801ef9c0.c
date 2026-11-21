/* FUN_1801ef9c0 @ 1801ef9c0 */

undefined8
FUN_1801ef9c0(undefined8 param_1,longlong param_2,int param_3,longlong param_4,undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_3 != 0x110000) {
    cVar1 = (**(code **)(param_2 + 0x20))(param_1,param_3);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  if (param_4 == 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001801efa0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(param_2 + 0x18))(param_1,param_4,param_5);
  return uVar2;
}


