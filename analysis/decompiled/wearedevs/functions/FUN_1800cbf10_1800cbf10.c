/* FUN_1800cbf10 @ 1800cbf10 */

void FUN_1800cbf10(ulonglong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  code *pcVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  ulonglong unaff_RBX;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  bool bVar19;
  longlong *local_d8;
  longlong *plStack_d0;
  ulonglong *local_c8;
  ulonglong uStack_c0;
  undefined2 uStack_8a;
  longlong *local_70;
  longlong *plStack_68;
  ulonglong *local_60;
  ulonglong uStack_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  plVar4 = (longlong *)param_2[4];
  LOCK();
  lVar1 = *plVar4;
  *plVar4 = *plVar4 + 1;
  UNLOCK();
  if (*plVar4 != 0 && SCARRY8(lVar1,1) == *plVar4 < 0) {
    plVar5 = (longlong *)param_2[5];
    puVar6 = (ulonglong *)param_2[6];
    LOCK();
    lVar1 = *plVar5;
    *plVar5 = *plVar5 + 1;
    UNLOCK();
    if (*plVar5 != 0 && SCARRY8(lVar1,1) == *plVar5 < 0) {
      local_50 = *param_2;
      bVar19 = local_50 != 1;
      local_70 = plVar4;
      plStack_68 = plVar5;
      local_60 = puVar6;
      if (!bVar19) {
        unaff_RBX = FUN_1801010f0(param_2 + 1);
      }
      uVar17 = (ulonglong)!bVar19;
      uVar13 = FUN_180101140(param_2 + 2);
      puVar6 = local_60;
      plVar11 = plStack_68;
      plVar5 = local_70;
      uVar8 = param_2[3];
      plVar4 = (longlong *)param_2[0xe];
      LOCK();
      lVar1 = *plVar4;
      *plVar4 = *plVar4 + 1;
      UNLOCK();
      if (*plVar4 != 0 && SCARRY8(lVar1,1) == *plVar4 < 0) {
        uVar9 = param_2[8];
        uVar18 = uVar17;
        if ((int)uVar9 != 1000000000) {
          uVar18 = param_2[7];
        }
        uVar10 = param_2[0x11];
        uVar2 = *(undefined1 *)((longlong)param_2 + 0x89);
        uVar3 = *(undefined1 *)((longlong)param_2 + 0x8a);
        uVar12 = 2;
        puVar15 = local_60;
        uVar16 = param_2[0xe];
        if ((char)param_2[0xd] != '\x02') {
          puVar15 = param_2 + 0xc;
          local_50 = param_2[0xe];
          (**(code **)param_2[9])(&local_70,puVar15,param_2[10],param_2[0xb]);
          uVar12 = (undefined1)param_2[0xd];
          local_c8 = local_60;
          uStack_c0 = uStack_58;
          local_d8 = local_70;
          plStack_d0 = plStack_68;
          uVar16 = local_50;
        }
        plVar4 = (longlong *)param_2[0xf];
        if (plVar4 == (longlong *)0x0) {
          uVar14 = 0;
        }
        else {
          LOCK();
          lVar1 = *plVar4;
          *plVar4 = *plVar4 + 1;
          UNLOCK();
          if (*plVar4 == 0 || SCARRY8(lVar1,1) != *plVar4 < 0) goto LAB_1800cc0ce;
          uVar14 = param_2[0xf];
          puVar15 = (ulonglong *)param_2[0x10];
        }
        param_1[6] = (ulonglong)puVar6;
        param_1[4] = (ulonglong)plVar5;
        param_1[5] = (ulonglong)plVar11;
        param_1[2] = uVar13;
        param_1[3] = CONCAT26(uStack_8a,(int6)uVar8);
        *param_1 = uVar17;
        param_1[1] = unaff_RBX;
        param_1[0xe] = uVar16;
        *(char *)(param_1 + 0x11) = (char)uVar10;
        param_1[7] = uVar18;
        *(int *)(param_1 + 8) = (int)uVar9;
        *(undefined1 *)((longlong)param_1 + 0x89) = uVar2;
        *(undefined1 *)((longlong)param_1 + 0x8a) = uVar3;
        param_1[9] = (ulonglong)local_d8;
        param_1[10] = (ulonglong)plStack_d0;
        param_1[0xb] = (ulonglong)local_c8;
        param_1[0xc] = uStack_c0;
        *(undefined1 *)(param_1 + 0xd) = uVar12;
        param_1[0xf] = uVar14;
        param_1[0x10] = (ulonglong)puVar15;
        return;
      }
    }
  }
LAB_1800cc0ce:
                    /* WARNING: Does not return */
  pcVar7 = (code *)invalidInstructionException();
  (*pcVar7)();
}


