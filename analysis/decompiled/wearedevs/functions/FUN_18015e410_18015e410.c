/* FUN_18015e410 @ 18015e410 */

void FUN_18015e410(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  plVar2 = (longlong *)*param_1;
  lVar3 = plVar2[1];
  if (lVar3 != -1) {
    pcVar4 = (code *)param_1[1];
    if (pcVar4 == (code *)0x0) {
      uVar7 = 0xfffffffffffffff0;
      do {
        if (SBORROW1('\0',*(char *)(*plVar2 + 0x10 + uVar7))) {
          uVar6 = plVar2[1];
          *(undefined1 *)(*plVar2 + 0x10 + uVar7) = 0xff;
          *(undefined1 *)(*plVar2 + 0x10 + (uVar6 & uVar7)) = 0xff;
          plVar2[3] = plVar2[3] + -1;
        }
        lVar5 = uVar7 - lVar3;
        uVar7 = uVar7 + 1;
      } while (lVar5 != -0x10);
    }
    else {
      lVar5 = param_1[2];
      lVar8 = -lVar5;
      uVar7 = 0xfffffffffffffff0;
      do {
        if (SBORROW1('\0',*(char *)(*plVar2 + 0x10 + uVar7))) {
          uVar6 = plVar2[1];
          *(undefined1 *)(*plVar2 + 0x10 + uVar7) = 0xff;
          *(undefined1 *)(*plVar2 + 0x10 + (uVar6 & uVar7)) = 0xff;
          (*pcVar4)(*plVar2 + lVar8);
          plVar2[3] = plVar2[3] + -1;
        }
        lVar8 = lVar8 - lVar5;
        lVar1 = uVar7 - lVar3;
        uVar7 = uVar7 + 1;
      } while (lVar1 != -0x10);
    }
  }
  uVar7 = plVar2[1];
  uVar6 = (uVar7 + 1 & 0xfffffffffffffff8) - (uVar7 + 1 >> 3);
  if (uVar7 < 8) {
    uVar6 = uVar7;
  }
  plVar2[2] = uVar6 - plVar2[3];
  return;
}


