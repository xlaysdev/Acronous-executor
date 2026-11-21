/* FUN_1801f2cc0 @ 1801f2cc0 */

void FUN_1801f2cc0(uint *param_1,ulonglong param_2,uint3 param_3)

{
  uint uVar1;
  char cVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined2 uStack_2e;
  undefined2 local_2c;
  undefined1 uStack_2a;
  char cStack_29;
  char cStack_28;
  char cStack_27;
  char cStack_26;
  char cStack_25;
  undefined2 local_24;
  undefined2 local_22;
  undefined1 uStack_20;
  char cStack_1f;
  char cStack_1e;
  char cStack_1d;
  char cStack_1c;
  char cStack_1b;
  undefined2 local_1a;
  
  uVar5 = (uint)param_2;
  switch(param_2 & 0xffffffff) {
  case 0:
    *(undefined2 *)param_1 = 0x305c;
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 0xb:
  case 0xc:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
switchD_1801f2ce3_caseD_1:
    if ((((byte)param_3 & 0x2ff < uVar5) == 0) ||
       (cVar2 = FUN_1801f3180(param_2 & 0xffffffff), cVar2 == '\0')) {
LAB_1801f2e1d:
      cVar2 = FUN_1801f3290(param_2 & 0xffffffff);
      if (cVar2 != '\0') {
        *param_1 = uVar5;
        uVar4 = 0x81;
        cVar2 = -0x80;
        goto LAB_1801f2efd;
      }
      uVar1 = 0x1f;
      if ((uVar5 | 1) != 0) {
        for (; (uVar5 | 1) >> uVar1 == 0; uVar1 = uVar1 - 1) {
        }
      }
      uVar3 = (ulonglong)((uVar1 ^ 0x1c) >> 2);
      uStack_2a = 0;
      local_2c = 0;
      cStack_29 = "0123456789abcdef"[uVar5 >> 0x14];
      cStack_28 = "0123456789abcdef"[uVar5 >> 0x10 & 0xf];
      cStack_27 = "0123456789abcdef"[uVar5 >> 0xc & 0xf];
      cStack_26 = "0123456789abcdef"[uVar5 >> 8 & 0xf];
      cStack_25 = "0123456789abcdef"[uVar5 >> 4 & 0xf];
      local_24 = CONCAT11(0x7d,"0123456789abcdef"[uVar5 & 0xf]);
      *(undefined2 *)((longlong)&uStack_2e + uVar3) = 0x755c;
      *(undefined1 *)((longlong)&local_2c + uVar3) = 0x7b;
      *(undefined2 *)(param_1 + 2) = local_24;
      *(ulonglong *)param_1 =
           CONCAT17(cStack_25,
                    CONCAT16(cStack_26,
                             CONCAT15(cStack_27,
                                      CONCAT14(cStack_28,
                                               CONCAT13(cStack_29,CONCAT12(uStack_2a,local_2c))))));
    }
    else {
      uVar1 = 0x1f;
      if ((uVar5 | 1) != 0) {
        for (; (uVar5 | 1) >> uVar1 == 0; uVar1 = uVar1 - 1) {
        }
      }
      uVar3 = (ulonglong)((uVar1 ^ 0x1c) >> 2);
      uStack_20 = 0;
      local_22 = 0;
      cStack_1f = "0123456789abcdef"[param_2 >> 0x14 & 0xfff];
      cStack_1e = "0123456789abcdef"[(uint)(param_2 >> 0x10) & 0xf];
      cStack_1d = "0123456789abcdef"[uVar5 >> 0xc & 0xf];
      cStack_1c = "0123456789abcdef"[uVar5 >> 8 & 0xf];
      cStack_1b = "0123456789abcdef"[uVar5 >> 4 & 0xf];
      local_1a = CONCAT11(0x7d,"0123456789abcdef"[uVar5 & 0xf]);
      *(undefined2 *)((longlong)&local_24 + uVar3) = 0x755c;
      *(undefined1 *)((longlong)&local_22 + uVar3) = 0x7b;
      *(undefined2 *)(param_1 + 2) = local_1a;
      *(ulonglong *)param_1 =
           CONCAT17(cStack_1b,
                    CONCAT16(cStack_1c,
                             CONCAT15(cStack_1d,
                                      CONCAT14(cStack_1e,
                                               CONCAT13(cStack_1f,CONCAT12(uStack_20,local_22))))));
    }
    cVar2 = (char)uVar3 + -2;
    uVar4 = 10;
    goto LAB_1801f2efd;
  case 9:
    *(undefined2 *)param_1 = 0x745c;
    break;
  case 10:
    *(undefined2 *)param_1 = 0x6e5c;
    break;
  case 0xd:
    *(undefined2 *)param_1 = 0x725c;
    break;
  case 0x22:
    if (param_3 < 0x10000) goto LAB_1801f2e1d;
    *(undefined2 *)param_1 = 0x225c;
    break;
  case 0x27:
    if ((param_3 & 0x100) == 0) goto LAB_1801f2e1d;
    *(undefined2 *)param_1 = 0x275c;
    break;
  default:
    if (uVar5 != 0x5c) goto switchD_1801f2ce3_caseD_1;
    *(undefined2 *)param_1 = 0x5c5c;
  }
  *(undefined8 *)((longlong)param_1 + 2) = 0;
  uVar4 = 2;
  cVar2 = '\0';
LAB_1801f2efd:
  *(char *)(param_1 + 3) = cVar2;
  *(undefined1 *)((longlong)param_1 + 0xd) = uVar4;
  return;
}


