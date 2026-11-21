/* FUN_1801e6e06 @ 1801e6e06 */

undefined1 * FUN_1801e6e06(undefined1 *param_1,longlong *param_2)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte bVar6;
  ulonglong uVar7;
  
  uVar7 = param_2[2];
  if ((uVar7 < (ulonglong)param_2[1]) && (*(char *)(*param_2 + uVar7) == '_')) {
    param_2[2] = uVar7 + 1;
    *(undefined8 *)(param_1 + 8) = 0;
LAB_1801e6e98:
    uVar3 = 0;
  }
  else {
    uVar5 = 0;
    while (uVar7 < (ulonglong)param_2[1]) {
      cVar1 = *(char *)(*param_2 + uVar7);
      if (cVar1 == '_') {
        param_2[2] = uVar7 + 1;
        if (uVar5 != 0xffffffffffffffff) {
          *(ulonglong *)(param_1 + 8) = uVar5 + 1;
          goto LAB_1801e6e98;
        }
        break;
      }
      bVar6 = cVar1 - 0x30;
      if (9 < bVar6) {
        if ((byte)(cVar1 + 0x9fU) < 0x1a) {
          bVar6 = cVar1 + 0xa9;
        }
        else {
          if (0x19 < (byte)(cVar1 + 0xbfU)) break;
          bVar6 = cVar1 - 0x1d;
        }
      }
      uVar7 = uVar7 + 1;
      param_2[2] = uVar7;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar5;
      uVar4 = SUB168(auVar2 * ZEXT816(0x3e),0);
      if ((SUB168(auVar2 * ZEXT816(0x3e),8) != 0) ||
         (uVar5 = uVar4 + bVar6, CARRY8(uVar4,(ulonglong)bVar6))) break;
    }
    param_1[1] = 0;
    uVar3 = 1;
  }
  *param_1 = uVar3;
  return param_1;
}


