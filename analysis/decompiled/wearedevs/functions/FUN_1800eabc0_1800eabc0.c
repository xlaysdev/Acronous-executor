/* FUN_1800eabc0 @ 1800eabc0 */

undefined8 FUN_1800eabc0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  
  *(undefined8 *)(param_1 + 0x38) = param_2;
  lVar4 = FUN_1800bbef0();
  if (lVar4 == 0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    cVar3 = FUN_1800ed360(lVar4);
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (cVar3 == '\r') {
      if (((uint)lVar4 & 3) != 1) {
        return 1;
      }
      uVar1 = *(undefined8 *)(lVar4 + -1);
      puVar2 = *(undefined8 **)(lVar4 + 7);
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(uVar1);
      }
      if (puVar2[1] != 0) {
        thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
      }
      thunk_FUN_1801d3330(lVar4 + -1,0x18,8);
      return 1;
    }
  }
  return 0;
}


