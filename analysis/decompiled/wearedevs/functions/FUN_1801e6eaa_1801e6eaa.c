/* FUN_1801e6eaa @ 1801e6eaa */

longlong * FUN_1801e6eaa(longlong *param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar2 = param_2[2];
  lVar3 = *param_2;
  uVar4 = param_2[1];
  lVar7 = -1;
  uVar5 = uVar2;
  do {
    uVar6 = uVar5;
    if (uVar4 <= uVar6) goto LAB_1801e6f32;
    cVar1 = *(char *)(lVar3 + uVar6);
    param_2[2] = uVar6 + 1;
    lVar7 = lVar7 + 1;
    uVar5 = uVar6 + 1;
  } while ((byte)(cVar1 + 0x9fU) < 6 || (byte)(cVar1 - 0x30U) < 10);
  if (cVar1 == '_') {
    if (uVar6 < uVar2) goto LAB_1801e6f1e;
    if (uVar2 != 0) {
      if (uVar2 < uVar4) {
        if (*(char *)(lVar3 + uVar2) < -0x40) {
LAB_1801e6f1e:
                    /* WARNING: Subroutine does not return */
          FUN_1802018d0(lVar3);
        }
      }
      else if (uVar2 != uVar4) goto LAB_1801e6f1e;
    }
    *param_1 = lVar3 + uVar2;
    param_1[1] = lVar7;
  }
  else {
LAB_1801e6f32:
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 0;
  }
  return param_1;
}


