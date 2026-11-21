/* FUN_18002d000 @ 18002d000 */

ulonglong FUN_18002d000(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = -param_1;
  if (SBORROW8(0,param_1)) {
    uVar3 = (uint)param_2 & 3;
    uVar4 = (ulonglong)uVar3;
    if (uVar3 == 1) {
      uVar1 = *(undefined8 *)(param_2 + -1);
      puVar2 = *(undefined8 **)(param_2 + 7);
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(uVar1);
      }
      if (puVar2[1] != 0) {
        thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
      }
      uVar4 = thunk_FUN_1801d3330(param_2 + -1,0x18,8);
      return uVar4;
    }
  }
  else if (param_1 != 0) {
    uVar4 = thunk_FUN_1801d3330(param_2,param_1,1);
    return uVar4;
  }
  return uVar4;
}


