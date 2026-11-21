/* FUN_1801ce5d0 @ 1801ce5d0 */

longlong FUN_1801ce5d0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_2 + 8);
  lVar4 = *(longlong *)(param_2 + 0x10);
  uVar1 = *param_1;
  lVar2 = FUN_1801cbac0(uVar1,"[",1);
  if (lVar2 != 0) {
LAB_1801ce68d:
    lVar3 = FUN_1801ff6a0(lVar2);
    return lVar3;
  }
  if (lVar4 == 0) {
LAB_1801ce665:
    lVar2 = FUN_1801cbac0(uVar1,"]",1);
    if (lVar2 != 0) goto LAB_1801ce68d;
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1801cee30(lVar3,param_1);
    if (lVar2 == 0) {
      lVar4 = lVar4 * 0x20;
      do {
        lVar4 = lVar4 + -0x20;
        lVar3 = lVar3 + 0x20;
        if (lVar4 == 0) goto LAB_1801ce665;
        lVar2 = FUN_1801cbac0(uVar1,",",1);
        if (lVar2 != 0) goto LAB_1801ce68d;
        lVar2 = FUN_1801cee30(lVar3,param_1);
      } while (lVar2 == 0);
    }
  }
  return lVar2;
}


