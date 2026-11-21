/* FUN_180038d20 @ 180038d20 */

void FUN_180038d20(undefined1 *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined8 local_28 [3];
  
  lVar2 = *param_2;
  uVar3 = *(ulonglong *)(lVar2 + 0x20);
  if (*(ulonglong *)(lVar2 + 0x28) < uVar3) {
    uVar7 = *(ulonglong *)(lVar2 + 0x28);
    do {
      uVar6 = uVar7 + 1;
      bVar1 = *(byte *)(*(longlong *)(lVar2 + 0x18) + -1 + uVar6);
      if ((0x20 < (ulonglong)bVar1) || ((0x100002600U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
        if (bVar1 == 0x7d) {
          param_1[1] = 0;
          goto LAB_180038e1b;
        }
        if ((char)param_2[1] != '\0') {
          *(undefined1 *)(param_2 + 1) = 0;
          if (bVar1 == 0x22) goto LAB_180038e17;
          local_28[0] = 0x11;
          goto LAB_180038d87;
        }
        if (bVar1 != 0x2c) {
          local_28[0] = 8;
          goto LAB_180038d87;
        }
        *(ulonglong *)(lVar2 + 0x28) = uVar6;
        if (uVar3 <= uVar6) goto LAB_180038e03;
        uVar7 = uVar7 + 2;
        goto LAB_180038ddd;
      }
      *(ulonglong *)(lVar2 + 0x28) = uVar6;
      uVar7 = uVar6;
    } while (uVar6 != uVar3);
  }
  local_28[0] = 3;
LAB_180038d87:
  uVar5 = FUN_1801f6b20(lVar2,local_28);
  *(undefined8 *)(param_1 + 8) = uVar5;
  uVar4 = 1;
LAB_180038e1d:
  *param_1 = uVar4;
  return;
LAB_180038ddd:
  bVar1 = *(byte *)(*(longlong *)(lVar2 + 0x18) + -1 + uVar7);
  uVar6 = (ulonglong)bVar1;
  if (0x22 < uVar6) {
LAB_180038e26:
    if (bVar1 == 0x7d) {
      local_28[0] = 0x15;
    }
    else {
      local_28[0] = 0x11;
    }
    goto LAB_180038d87;
  }
  if ((0x100002600U >> (uVar6 & 0x3f) & 1) != 0) {
    *(ulonglong *)(lVar2 + 0x28) = uVar7;
    bVar8 = uVar7 == uVar3;
    uVar7 = uVar7 + 1;
    if (bVar8) goto LAB_180038e03;
    goto LAB_180038ddd;
  }
  if (uVar6 != 0x22) goto LAB_180038e26;
LAB_180038e17:
  param_1[1] = 1;
LAB_180038e1b:
  uVar4 = 0;
  goto LAB_180038e1d;
LAB_180038e03:
  local_28[0] = 5;
  goto LAB_180038d87;
}


