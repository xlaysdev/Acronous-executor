/* FUN_1801b6870 @ 1801b6870 */

void FUN_1801b6870(undefined8 *param_1,undefined8 *param_2,void *param_3)

{
  undefined1 auVar1 [16];
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong *puVar5;
  uint uVar6;
  uint uVar7;
  BOOL BVar8;
  ulonglong uVar9;
  _FILETIME _Var10;
  undefined4 uVar11;
  LPFILETIME lpCreationTime;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ushort uVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  LPFILETIME in_stack_fffffffffffffca8;
  undefined1 local_340 [80];
  longlong local_2f0;
  longlong local_2e8;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined4 local_1e0;
  undefined1 local_98 [32];
  longlong local_78;
  _FILETIME local_70;
  undefined8 *local_68;
  _FILETIME local_60;
  _FILETIME local_58;
  undefined1 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  LOCK();
  *(longlong *)*param_2 = *(longlong *)*param_2 + 1;
  UNLOCK();
  local_68 = param_1;
  memcpy(local_340,param_3,0x150);
  local_78 = local_2f0;
  plVar2 = *(longlong **)param_2[1];
  if (plVar2[3] != 0) {
    uVar9 = FUN_1801bb830(plVar2 + 4,&local_78);
    lVar3 = *plVar2;
    bVar16 = (byte)(uVar9 >> 0x39);
    auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
    auVar17 = pshuflw(auVar17,auVar17,0);
    lVar13 = 0;
    while( true ) {
      uVar9 = uVar9 & plVar2[1];
      auVar1 = *(undefined1 (*) [16])(lVar3 + uVar9);
      auVar19[0] = -(auVar1[0] == auVar17[0]);
      auVar19[1] = -(auVar1[1] == auVar17[1]);
      auVar19[2] = -(auVar1[2] == auVar17[2]);
      auVar19[3] = -(auVar1[3] == auVar17[3]);
      auVar19[4] = -(auVar1[4] == auVar17[4]);
      auVar19[5] = -(auVar1[5] == auVar17[5]);
      auVar19[6] = -(auVar1[6] == auVar17[6]);
      auVar19[7] = -(auVar1[7] == auVar17[7]);
      auVar19[8] = -(auVar1[8] == auVar17[0]);
      auVar19[9] = -(auVar1[9] == auVar17[1]);
      auVar19[10] = -(auVar1[10] == auVar17[2]);
      auVar19[0xb] = -(auVar1[0xb] == auVar17[3]);
      auVar19[0xc] = -(auVar1[0xc] == auVar17[4]);
      auVar19[0xd] = -(auVar1[0xd] == auVar17[5]);
      auVar19[0xe] = -(auVar1[0xe] == auVar17[6]);
      auVar19[0xf] = -(auVar1[0xf] == auVar17[7]);
      uVar15 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe | (ushort)(auVar19[0xf] >> 7) << 0xf;
      uVar14 = (uint)uVar15;
      while (uVar15 != 0) {
        uVar6 = 0;
        for (uVar7 = uVar14; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        lVar12 = (uVar6 + uVar9 & plVar2[1]) * -0x160;
        if (*(longlong *)(lVar3 + -0x160 + lVar12) == local_2f0) {
          lVar13 = lVar12 + lVar3;
          lVar4 = *(longlong *)(lVar3 + -0x60 + lVar12);
          if (lVar4 != 0) {
            local_60.dwLowDateTime = 0;
            local_60.dwHighDateTime = 0;
            local_58.dwLowDateTime = 0;
            local_58.dwHighDateTime = 0;
            in_stack_fffffffffffffca8 = &local_58;
            lpCreationTime = &local_60;
            BVar8 = GetProcessTimes(*(HANDLE *)(lVar4 + 0x10),lpCreationTime,
                                    in_stack_fffffffffffffca8,in_stack_fffffffffffffca8,
                                    in_stack_fffffffffffffca8);
            uVar11 = SUB84(lpCreationTime,0);
            if (BVar8 == 0) {
              local_1e8 = FUN_1801c9650();
              local_1f0 = 1;
              _Var10 = local_60;
              local_1e0 = uVar11;
              if (local_1e8 != 0) {
                local_70 = local_60;
                FUN_180111960(&local_1e8);
                _Var10 = local_70;
              }
            }
            else {
              _Var10 = local_60;
            }
            if ((ulonglong)_Var10 / 10000000 - 0x2b6109100 != *(longlong *)(lVar13 + -0x38))
            goto LAB_1801b6aba;
          }
          local_1e8 = CONCAT71(local_1e8._1_7_,*(undefined1 *)((undefined8 *)param_2[2] + 1));
          local_1f0 = *(undefined8 *)param_2[2];
          FUN_1801bbf70(lVar12 + lVar3 + -0x158,&local_1f0,*(undefined8 *)param_2[3],
                        *(undefined8 *)param_2[4],
                        (ulonglong)in_stack_fffffffffffffca8 & 0xffffffffffffff00,local_340);
          *(ulonglong *)(lVar13 + -0x158) = (ulonglong)(local_2e8 != 0);
          *(longlong *)(lVar13 + -0x150) = local_2e8;
          *local_68 = 2;
          return;
        }
        uVar15 = (ushort)(uVar14 - 1) & (ushort)uVar14;
        uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar15);
      }
      auVar18[0] = -(auVar1[0] == -1);
      auVar18[1] = -(auVar1[1] == -1);
      auVar18[2] = -(auVar1[2] == -1);
      auVar18[3] = -(auVar1[3] == -1);
      auVar18[4] = -(auVar1[4] == -1);
      auVar18[5] = -(auVar1[5] == -1);
      auVar18[6] = -(auVar1[6] == -1);
      auVar18[7] = -(auVar1[7] == -1);
      auVar18[8] = -(auVar1[8] == -1);
      auVar18[9] = -(auVar1[9] == -1);
      auVar18[10] = -(auVar1[10] == -1);
      auVar18[0xb] = -(auVar1[0xb] == -1);
      auVar18[0xc] = -(auVar1[0xc] == -1);
      auVar18[0xd] = -(auVar1[0xd] == -1);
      auVar18[0xe] = -(auVar1[0xe] == -1);
      auVar18[0xf] = -(auVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar18 >> 0x3f,0) & 1) != 0) || (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar18 >> 0x5f,0) & 1) != 0) || (SUB161(auVar18 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar18 >> 0x6f,0) & 1) != 0) || (SUB161(auVar18 >> 0x77,0) & 1) != 0) ||
          auVar18[0xf] < '\0') break;
      uVar9 = uVar9 + lVar13 + 0x10;
      lVar13 = lVar13 + 0x10;
    }
  }
LAB_1801b6aba:
  FUN_1801bf480(local_98,local_340,local_2f0);
  puVar5 = (ulonglong *)param_2[4];
  uVar9 = *puVar5;
  FUN_1801bbc00(&local_1f0,local_2f0,(ulonglong)(local_2e8 != 0),local_2e8,uVar9,local_98);
  local_50 = (undefined1)((_FILETIME *)param_2[2])[1].dwLowDateTime;
  local_58 = *(_FILETIME *)param_2[2];
  FUN_1801bbf70(&local_1f0,&local_58,*(undefined8 *)param_2[3],*puVar5,uVar9 & 0xffffffffffffff00,
                local_340);
  memcpy(local_68,&local_1f0,0x158);
  return;
}


