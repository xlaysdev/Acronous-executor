/* FUN_1800c8610 @ 1800c8610 */

void FUN_1800c8610(ulonglong *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  cVar1 = (char)param_1[0x19];
  if (cVar1 == '\0') {
    uVar2 = param_1[0x17];
    puVar3 = (undefined8 *)param_1[0x18];
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(uVar2);
    }
    if (puVar3[1] != 0) {
      thunk_FUN_1801d3330(uVar2,puVar3[1],puVar3[2]);
    }
    FUN_18000adf0(param_1 + 0xc);
  }
  else {
    if (cVar1 == '\x03') {
      uVar2 = param_1[0x1a];
      puVar3 = (undefined8 *)param_1[0x1b];
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)(uVar2);
      }
      if (puVar3[1] != 0) {
        thunk_FUN_1801d3330(uVar2,puVar3[1],puVar3[2]);
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_1800c7fa0(param_1 + 0x1d);
    }
    FUN_18000adf0(param_1 + 0xc);
  }
  lVar4 = 2;
  if (2 < *param_1) {
    lVar4 = *param_1 - 3;
  }
  if (lVar4 == 0) {
    return;
  }
  if (lVar4 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001800c872b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[1] + 0x20))(param_1[4],param_1[2],param_1[3]);
    return;
  }
  FUN_18000b470(param_1);
  return;
}


