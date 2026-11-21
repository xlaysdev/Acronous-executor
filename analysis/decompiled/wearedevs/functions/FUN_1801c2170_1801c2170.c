/* FUN_1801c2170 @ 1801c2170 */

void FUN_1801c2170(longlong *param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  
  uVar9 = param_3 - param_2;
  uVar11 = 0;
  if (param_2 <= param_3) {
    uVar11 = uVar9;
  }
  if (param_2 <= param_3 && uVar9 != 0) {
    if ((ulonglong)(*param_1 - param_1[2]) < uVar11) {
      FUN_1801f6a80(param_1,param_1[2],uVar11,8,0x20);
    }
    lVar7 = param_1[5];
    if ((ulonglong)(param_1[3] - lVar7) < uVar11) {
      FUN_1801f6a80(param_1 + 3,lVar7,uVar11,8,0x10);
      lVar7 = param_1[5];
    }
    lVar12 = param_1[2];
    lVar1 = lVar7 * 0x10 + param_1[4];
    lVar10 = lVar12 * 0x20 + param_1[1];
    lVar8 = 0;
    do {
      FUN_1801c6b30(&local_88);
      plVar6 = (longlong *)CONCAT44(uStack_84,local_88);
      LOCK();
      lVar4 = *plVar6;
      *plVar6 = *plVar6 + 1;
      UNLOCK();
      if (*plVar6 == 0 || SCARRY8(lVar4,1) != *plVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      local_58 = local_78;
      local_68 = local_88;
      uStack_64 = uStack_84;
      uStack_60 = uStack_80;
      uStack_5c = uStack_7c;
      puVar2 = (undefined8 *)(lVar10 + 0x10 + lVar8 * 2);
      *puVar2 = local_78;
      puVar2[1] = CONCAT71(uStack_6f,uStack_70);
      puVar3 = (undefined4 *)(lVar10 + lVar8 * 2);
      *puVar3 = local_88;
      puVar3[1] = uStack_84;
      puVar3[2] = uStack_80;
      puVar3[3] = uStack_7c;
      lVar12 = lVar12 + 1;
      param_1[2] = lVar12;
      *(longlong **)(lVar1 + lVar8) = plVar6;
      *(undefined1 *)(lVar1 + 8 + lVar8) = uStack_70;
      lVar7 = lVar7 + 1;
      param_1[5] = lVar7;
      lVar8 = lVar8 + 0x10;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}


