/* FUN_1801cab00 @ 1801cab00 */

undefined8 FUN_1801cab00(longlong *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_39 [41];
  
  uVar5 = *param_2;
  if (*param_1 == 0) {
    uVar3 = FUN_1801d2a90(param_1[1],auStack_39 + 1);
  }
  else {
    if ((int)*param_1 != 1) {
      if (0x7fefffffffffffff < (param_1[1] & 0x7fffffffffffffffU)) {
        lVar4 = FUN_1801cbac0(uVar5,&DAT_180288998,4);
        if (lVar4 == 0) {
          return 0;
        }
        uVar5 = FUN_1801ff6a0(lVar4);
        return uVar5;
      }
      puVar1 = auStack_39 + 1;
      lVar4 = FUN_1801d2cf0(param_1[1] & 0x7fffffffffffffffU,puVar1);
      lVar4 = FUN_1801cbac0(uVar5,puVar1,lVar4 - (longlong)puVar1);
      goto joined_r0x0001801cabe4;
    }
    lVar4 = param_1[1];
    lVar6 = -lVar4;
    if (-lVar4 < 0) {
      lVar6 = lVar4;
    }
    uVar2 = FUN_1801d2a90(lVar6,auStack_39 + 1);
    uVar3 = uVar2;
    if (lVar4 < 0) {
      uVar3 = uVar2 - 1;
      if (0x13 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar3,0x14,&PTR_s_C__Users_burne__cargo_registry_s_180288a20);
      }
      auStack_39[uVar2] = 0x2d;
    }
  }
  lVar4 = FUN_1801cbac0(uVar5,auStack_39 + uVar3 + 1,0x14 - uVar3);
joined_r0x0001801cabe4:
  if (lVar4 == 0) {
    return 0;
  }
  uVar5 = FUN_1801ff6a0(lVar4);
  return uVar5;
}


