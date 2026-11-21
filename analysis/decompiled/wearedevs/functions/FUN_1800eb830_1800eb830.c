/* FUN_1800eb830 @ 1800eb830 */

undefined8 FUN_1800eb830(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  *(undefined8 *)(param_1 + 0x30) = param_2;
  lVar5 = *param_3;
  uVar4 = FUN_1800bc100(param_1,lVar5,param_3[1]);
  if ((uVar4 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    uVar6 = 0;
  }
  else {
    cVar3 = FUN_1800ed360(lVar5);
    *(undefined8 *)(param_1 + 0x30) = 0;
    uVar6 = 1;
    if ((cVar3 == '\r') && (uVar6 = 2, ((uint)lVar5 & 3) == 1)) {
      uVar1 = *(undefined8 *)(lVar5 + -1);
      puVar2 = *(undefined8 **)(lVar5 + 7);
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(uVar1);
      }
      if (puVar2[1] != 0) {
        thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
      }
      thunk_FUN_1801d3330(lVar5 + -1,0x18,8);
    }
  }
  return uVar6;
}


