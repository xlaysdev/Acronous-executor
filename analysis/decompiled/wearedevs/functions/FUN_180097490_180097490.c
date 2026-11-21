/* FUN_180097490 @ 180097490 */

void FUN_180097490(ulonglong *param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = 0;
  if (1 < *param_1) {
    lVar3 = *param_1 - 2;
  }
  if (lVar3 == 0) {
    FUN_18007aaf0();
    if ((char)param_1[0x12] != '\x03') {
      FUN_18000adf0(param_1 + 0x12);
      return;
    }
  }
  else if (lVar3 == 1) {
    uVar1 = param_1[1];
    puVar2 = (undefined8 *)param_1[2];
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(uVar1);
    }
    if (puVar2[1] != 0) {
      thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
      return;
    }
  }
  return;
}


