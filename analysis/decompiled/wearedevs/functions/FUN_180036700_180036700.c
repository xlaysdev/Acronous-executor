/* FUN_180036700 @ 180036700 */

void FUN_180036700(ulonglong *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  longlong local_28;
  undefined8 local_20;
  undefined8 *local_18;
  
  uVar1 = *param_1;
  uVar3 = 0xf;
  if ((longlong)uVar1 < 0) {
    uVar3 = uVar1 ^ 0x8000000000000000;
  }
  switch(uVar3) {
  case 0:
  case 2:
  case 4:
    puVar2 = (undefined1 *)param_1[1];
    uVar1 = param_1[2];
    *puVar2 = 0;
    if (uVar1 != 0) {
      thunk_FUN_1801d3330(puVar2,uVar1,1);
      return;
    }
    break;
  case 6:
    uVar1 = param_1[1];
    if (((uint)uVar1 & 3) == 1) {
      local_28 = uVar1 - 1;
      local_20 = *(undefined8 *)(uVar1 - 1);
      local_18 = *(undefined8 **)(uVar1 + 7);
      if ((code *)*local_18 != (code *)0x0) {
        (*(code *)*local_18)(local_20);
      }
LAB_18003687a:
      if (local_18[1] != 0) {
        thunk_FUN_1801d3330(local_20,local_18[1],local_18[2]);
      }
      thunk_FUN_1801d3330(local_28,0x18,8);
      return;
    }
    break;
  case 8:
    uVar1 = param_1[1];
    if (((uint)uVar1 & 3) == 1) {
      local_28 = uVar1 - 1;
      local_20 = *(undefined8 *)(uVar1 - 1);
      local_18 = *(undefined8 **)(uVar1 + 7);
      if ((code *)*local_18 != (code *)0x0) {
        (*(code *)*local_18)(local_20);
      }
      goto LAB_18003687a;
    }
    break;
  case 10:
    uVar1 = param_1[1];
    if (((uint)uVar1 & 3) == 1) {
      local_28 = uVar1 - 1;
      local_20 = *(undefined8 *)(uVar1 - 1);
      local_18 = *(undefined8 **)(uVar1 + 7);
      if ((code *)*local_18 != (code *)0x0) {
        (*(code *)*local_18)(local_20);
      }
      goto LAB_18003687a;
    }
    break;
  case 0xc:
    uVar1 = param_1[1];
    if (((uint)uVar1 & 3) == 1) {
      local_28 = uVar1 - 1;
      local_20 = *(undefined8 *)(uVar1 - 1);
      local_18 = *(undefined8 **)(uVar1 + 7);
      if ((code *)*local_18 != (code *)0x0) {
        (*(code *)*local_18)(local_20);
      }
      goto LAB_18003687a;
    }
    break;
  case 0xf:
    if (uVar1 != 0) {
      thunk_FUN_1801d3330(param_1[1],uVar1,1);
      return;
    }
  }
  return;
}


