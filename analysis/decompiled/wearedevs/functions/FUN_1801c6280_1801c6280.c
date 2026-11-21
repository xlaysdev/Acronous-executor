/* FUN_1801c6280 @ 1801c6280 */

void FUN_1801c6280(undefined8 *param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  lVar10 = uVar4 - uVar3;
  if (uVar3 <= uVar4 && lVar10 != 0) {
    lVar11 = *(longlong *)(param_2 + 0x10);
    lVar12 = *(longlong *)(param_2 + 0x28);
    if (*(char *)*param_1 == '\0') {
      lVar7 = lVar12 * 0x10 + *(longlong *)(param_2 + 0x20);
      lVar8 = *(longlong *)(param_2 + 8) + lVar11 * 0x20;
      lVar9 = 0;
      do {
        FUN_1801c6ca0(&local_88);
        plVar6 = (longlong *)CONCAT44(uStack_84,local_88);
        LOCK();
        lVar2 = *plVar6;
        *plVar6 = *plVar6 + 1;
        UNLOCK();
        if (*plVar6 == 0 || SCARRY8(lVar2,1) != *plVar6 < 0) goto LAB_1801c63d6;
        local_58 = local_78;
        uStack_54 = uStack_74;
        uStack_50 = uStack_70;
        uStack_4c = uStack_6c;
        local_68 = local_88;
        uStack_64 = uStack_84;
        uStack_60 = uStack_80;
        uStack_5c = uStack_7c;
        puVar1 = (undefined4 *)(lVar8 + 0x10 + lVar9 * 2);
        *puVar1 = local_78;
        puVar1[1] = uStack_74;
        puVar1[2] = uStack_70;
        puVar1[3] = uStack_6c;
        puVar1 = (undefined4 *)(lVar8 + lVar9 * 2);
        *puVar1 = local_88;
        puVar1[1] = uStack_84;
        puVar1[2] = uStack_80;
        puVar1[3] = uStack_7c;
        lVar11 = lVar11 + 1;
        *(longlong *)(param_2 + 0x10) = lVar11;
        *(longlong **)(lVar7 + lVar9) = plVar6;
        *(undefined1 *)(lVar7 + 8 + lVar9) = (undefined1)uStack_70;
        lVar12 = lVar12 + 1;
        *(longlong *)(param_2 + 0x28) = lVar12;
        lVar9 = lVar9 + 0x10;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    else {
      lVar10 = lVar12 * 0x10 + *(longlong *)(param_2 + 0x20);
      lVar7 = *(longlong *)(param_2 + 8) + lVar11 * 0x20;
      lVar9 = uVar4 - uVar3;
      lVar8 = 0;
      do {
        FUN_1801c6b30(&local_88);
        plVar6 = (longlong *)CONCAT44(uStack_84,local_88);
        LOCK();
        lVar2 = *plVar6;
        *plVar6 = *plVar6 + 1;
        UNLOCK();
        if (*plVar6 == 0 || SCARRY8(lVar2,1) != *plVar6 < 0) {
LAB_1801c63d6:
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        local_58 = local_78;
        uStack_54 = uStack_74;
        uStack_50 = uStack_70;
        uStack_4c = uStack_6c;
        local_68 = local_88;
        uStack_64 = uStack_84;
        uStack_60 = uStack_80;
        uStack_5c = uStack_7c;
        puVar1 = (undefined4 *)(lVar7 + 0x10 + lVar8 * 2);
        *puVar1 = local_78;
        puVar1[1] = uStack_74;
        puVar1[2] = uStack_70;
        puVar1[3] = uStack_6c;
        puVar1 = (undefined4 *)(lVar7 + lVar8 * 2);
        *puVar1 = local_88;
        puVar1[1] = uStack_84;
        puVar1[2] = uStack_80;
        puVar1[3] = uStack_7c;
        lVar11 = lVar11 + 1;
        *(longlong *)(param_2 + 0x10) = lVar11;
        *(longlong **)(lVar10 + lVar8) = plVar6;
        *(undefined1 *)(lVar10 + 8 + lVar8) = (undefined1)uStack_70;
        lVar12 = lVar12 + 1;
        *(longlong *)(param_2 + 0x28) = lVar12;
        lVar8 = lVar8 + 0x10;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
  }
  return;
}


