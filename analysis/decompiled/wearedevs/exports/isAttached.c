/* isAttached @ 18002a5d0 */

undefined8 isAttached(void)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  BOOL BVar7;
  HWND pHVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  LPCSTR pCVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 (*pauVar16) [16];
  longlong lVar17;
  undefined8 local_3e8;
  longlong local_3e0;
  LPCSTR pCStack_3d8;
  undefined4 local_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined1 local_3b8 [192];
  code *local_2f8;
  longlong local_2e0;
  undefined8 local_2d8;
  ulonglong local_2d0;
  longlong local_2c0;
  undefined1 (*local_2b8) [16];
  ushort local_2a8;
  longlong local_2a0;
  longlong local_280;
  LPCSTR pCStack_278;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined1 local_120 [200];
  undefined1 *local_58;
  undefined8 local_48;
  
                    /* 0x2a5d0  5  isAttached */
  local_58 = local_3b8;
  local_48 = 0xfffffffffffffffe;
  FUN_1801ed660(&local_280,"Robloxsrc\\game.rs",6);
  if (!SBORROW8(0,local_280)) {
    local_3d0 = local_270;
    uStack_3cc = uStack_26c;
    uStack_3c8 = uStack_268;
    uStack_3c4 = uStack_264;
    local_3e0 = local_280;
    pCStack_3d8 = pCStack_278;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_3e0,&PTR_LAB_180205870,
                  &DAT_1802057f0);
  }
  lVar5 = CONCAT44(uStack_26c,local_270);
  pCVar12 = pCStack_278;
  pHVar8 = FindWindowA((LPCSTR)0x0,pCStack_278);
  iVar11 = (int)pCVar12;
  if (pHVar8 == (HWND)0x0) {
    local_3e0 = FUN_1801b48e0();
    pCStack_3d8 = (LPCSTR)CONCAT44(pCStack_3d8._4_4_,iVar11);
    if (iVar11 == 0) {
      if (local_3e0 != 0) goto LAB_18002a684;
    }
    else if (local_3e0 != 0) {
      FUN_180111960(&local_3e0);
    }
    BVar7 = IsWindowVisible((HWND)0x0);
    if (BVar7 == 0) goto LAB_18002a835;
  }
LAB_18002a684:
  FUN_1801b8600(local_120);
  FUN_1801b8590(&local_280,local_120,"RobloxPlayerBeta.exe",0x14);
  memcpy(&local_3e0,&local_280,0x160);
  uVar6 = local_2d0;
  uVar10 = local_2d8;
  if (local_2a0 == 0) {
    iVar11 = 0;
    local_2a0 = 0;
  }
  else {
    uVar13 = (uint)local_2a8;
    iVar11 = 0;
    lVar15 = local_2c0;
    pauVar16 = local_2b8;
    lVar17 = local_2a0;
    do {
      while( true ) {
        if ((short)uVar13 == 0) {
          do {
            auVar1 = *pauVar16;
            lVar15 = lVar15 + -0x1600;
            pauVar16 = pauVar16 + 1;
            uVar13 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
          } while (uVar13 == 0xffff);
          uVar13 = ~uVar13;
          local_2c0 = lVar15;
          local_2b8 = pauVar16;
        }
        uVar3 = 0;
        for (uVar4 = uVar13; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar13 = uVar13 - 1 & uVar13;
        local_2a8 = (ushort)uVar13;
        lVar14 = (ulonglong)uVar3 * -0x160;
        lVar17 = lVar17 + -1;
        uVar2 = *(ulonglong *)(lVar15 + -0x138 + lVar14);
        local_3e8 = 1;
        local_2a0 = lVar17;
        if ((uVar6 <= uVar2) &&
           (lVar9 = (*local_2f8)(&local_3e0,&local_3e8,*(undefined8 *)(lVar15 + -0x140 + lVar14),
                                 uVar2,uVar10,uVar6), lVar9 == 1)) break;
        if (lVar17 == 0) goto joined_r0x00018002a7d5;
      }
      iVar11 = *(int *)(lVar15 + lVar14 + -0x78);
    } while (lVar17 != 0);
  }
joined_r0x00018002a7d5:
  if ((local_2e0 != 0) && (local_2d0 != 0)) {
    thunk_FUN_1801d3330(local_2d8,local_2d0,1);
  }
  FUN_1800296a0(local_120);
  if (iVar11 != 0) {
    *pCStack_278 = '\0';
    if (lVar5 != 0) {
      thunk_FUN_1801d3330(pCStack_278,lVar5,1);
    }
    uVar10 = FUN_180035e50();
    return uVar10;
  }
LAB_18002a835:
  *pCStack_278 = '\0';
  if (lVar5 != 0) {
    thunk_FUN_1801d3330(pCStack_278,lVar5,1);
  }
  return 0;
}


