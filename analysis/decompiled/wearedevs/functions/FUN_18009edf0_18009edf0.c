/* FUN_18009edf0 @ 18009edf0 */

void FUN_18009edf0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  plVar2 = (longlong *)*param_1;
  pcVar3 = (code *)param_1[1];
  if ((pcVar3 != (code *)0x0) && (lVar4 = plVar2[1], lVar4 != -1)) {
    lVar5 = param_1[2];
    lVar8 = -lVar5;
    uVar7 = 0xfffffffffffffff0;
    do {
      if (SBORROW1('\0',*(char *)(*plVar2 + 0x10 + uVar7))) {
        uVar6 = plVar2[1];
        *(undefined1 *)(*plVar2 + 0x10 + uVar7) = 0xff;
        *(undefined1 *)(*plVar2 + 0x10 + (uVar6 & uVar7)) = 0xff;
        (*pcVar3)(*plVar2 + lVar8);
        plVar2[3] = plVar2[3] + -1;
      }
      lVar8 = lVar8 - lVar5;
      lVar1 = uVar7 - lVar4;
      uVar7 = uVar7 + 1;
    } while (lVar1 != -0x10);
  }
  uVar7 = plVar2[1];
  uVar6 = (uVar7 + 1 & 0xfffffffffffffff8) - (uVar7 + 1 >> 3);
  if (uVar7 < 8) {
    uVar6 = uVar7;
  }
  plVar2[2] = uVar6 - plVar2[3];
  return;
}


