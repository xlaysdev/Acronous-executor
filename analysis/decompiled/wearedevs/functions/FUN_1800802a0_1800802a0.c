/* FUN_1800802a0 @ 1800802a0 */

void FUN_1800802a0(longlong param_1)

{
  longlong lVar1;
  char *pcVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  undefined *puVar26;
  char cVar27;
  char cVar28;
  ushort uVar29;
  uint uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong lVar33;
  longlong *plVar34;
  longlong lVar35;
  undefined8 *puVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  longlong lVar40;
  bool bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 unaff_XMM7_Ba;
  undefined1 unaff_XMM7_Bb;
  undefined1 unaff_XMM7_Bc;
  undefined1 unaff_XMM7_Bd;
  undefined1 unaff_XMM7_Be;
  undefined1 unaff_XMM7_Bf;
  undefined1 unaff_XMM7_Bg;
  undefined1 unaff_XMM7_Bh;
  undefined1 unaff_XMM7_Bi;
  undefined1 unaff_XMM7_Bj;
  undefined1 unaff_XMM7_Bk;
  undefined1 unaff_XMM7_Bl;
  undefined1 unaff_XMM7_Bm;
  undefined1 unaff_XMM7_Bn;
  undefined1 unaff_XMM7_Bo;
  undefined1 unaff_XMM7_Bp;
  undefined1 auVar45 [16];
  longlong local_120;
  code *local_118;
  undefined *local_110;
  longlong *local_108;
  undefined **local_100;
  undefined *local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong *local_e0;
  undefined ***local_d8;
  undefined8 local_d0;
  longlong local_c8;
  longlong local_c0;
  uint local_b4;
  longlong local_b0;
  longlong local_a8;
  undefined8 *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  
  local_80 = 0xfffffffffffffffe;
  plVar34 = *(longlong **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (plVar34 == (longlong *)0x0) {
    return;
  }
  LOCK();
  *(undefined1 *)(plVar34 + 0x10) = 1;
  UNLOCK();
  LOCK();
  lVar33 = plVar34[0xc];
  *(char *)(plVar34 + 0xc) = '\x01';
  UNLOCK();
  local_e0 = plVar34;
  if ((char)lVar33 == '\0') {
    lVar33 = plVar34[10];
    plVar34[10] = 0;
    LOCK();
    *(undefined1 *)(plVar34 + 0xc) = 0;
    UNLOCK();
    if (lVar33 != 0) {
      (**(code **)(lVar33 + 0x18))(plVar34[0xb]);
    }
  }
  LOCK();
  lVar33 = plVar34[0xf];
  *(char *)(plVar34 + 0xf) = '\x01';
  UNLOCK();
  if ((char)lVar33 == '\0') {
    lVar33 = plVar34[0xd];
    plVar34[0xd] = 0;
    LOCK();
    lVar40 = plVar34[0xf];
    *(undefined1 *)(plVar34 + 0xf) = 0;
    UNLOCK();
    if (lVar33 != 0) {
      (**(code **)(lVar33 + 8))(plVar34[0xe],(char)lVar40);
    }
  }
  LOCK();
  *local_e0 = *local_e0 + -1;
  UNLOCK();
  if (*local_e0 == 0) {
    FUN_18003ce90(&local_e0);
  }
  puVar26 = PTR_PTR_1802fb5f0;
  if (*(longlong *)PTR_DAT_1802fd448 == 0) {
    bVar42 = PTR_PTR_1802fb5f0[0x10];
    uVar30 = (uint)bVar42;
    if (((bVar42 - 1 < 2) ||
        ((bVar42 != 0 && (uVar30 = FUN_1801faaf0(PTR_PTR_1802fb5f0), (char)uVar30 != '\0')))) &&
       (cVar28 = FUN_1801601d0(*(undefined8 *)puVar26,uVar30), cVar28 != '\0')) {
      lVar33 = *(longlong *)puVar26;
      local_c8 = lVar33 + 0x30;
      local_118 = FUN_1800463d0;
      local_110 = &DAT_18020d480;
      local_108 = &local_120;
      local_100 = &local_110;
      local_f8 = &DAT_18020c968;
      local_e0 = (longlong *)0x1;
      local_d8 = &local_100;
      local_d0 = 1;
      local_120 = param_1;
      FUN_180160ae0(lVar33,&local_e0);
    }
  }
  lVar33 = *(longlong *)(param_1 + 0x30);
  if (lVar33 != 0) {
    LOCK();
    bVar41 = *(char *)(lVar33 + 0x10) == '\0';
    if (bVar41) {
      *(char *)(lVar33 + 0x10) = '\x01';
    }
    UNLOCK();
    if (!bVar41) {
      FUN_180200390(lVar33 + 0x10);
    }
    puVar26 = PTR_DAT_1802fd600;
    if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
      local_b4 = 0;
      cVar28 = *(char *)(lVar33 + 0x11);
    }
    else {
      local_b4 = FUN_180200a50();
      local_b4 = local_b4 ^ 1;
      cVar28 = *(char *)(lVar33 + 0x11);
    }
    if (cVar28 == '\0') {
      local_b0 = lVar33;
      if (*(longlong *)(lVar33 + 0xa0) != 0) {
        uVar31 = FUN_1800c93e0(lVar33 + 0xa8,param_1);
        local_f0 = local_b0 + 0x88;
        lVar33 = *(longlong *)(local_b0 + 0x88);
        plVar34 = *(longlong **)(local_b0 + 0x90);
        bVar42 = (byte)(uVar31 >> 0x39);
        auVar43 = ZEXT216(CONCAT11(bVar42,bVar42));
        auVar43 = pshuflw(auVar43,auVar43,0);
        local_98 = (longlong *)(param_1 + 0x10);
        puVar36 = (undefined8 *)0x0;
        iVar7 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                                 CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                       CONCAT13(unaff_XMM7_Bd,
                                CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
        iVar8 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                                 CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                       CONCAT13(unaff_XMM7_Bh,
                                CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
        iVar9 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                                 CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                       CONCAT13(unaff_XMM7_Bl,
                                CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
        iVar10 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                                  CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                        CONCAT13(unaff_XMM7_Bp,
                                 CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
        while( true ) {
          uVar31 = uVar31 & (ulonglong)plVar34;
          pcVar2 = (char *)(lVar33 + uVar31);
          cVar28 = *pcVar2;
          cVar11 = pcVar2[1];
          cVar12 = pcVar2[2];
          cVar13 = pcVar2[3];
          cVar14 = pcVar2[4];
          cVar15 = pcVar2[5];
          cVar16 = pcVar2[6];
          cVar17 = pcVar2[7];
          cVar18 = pcVar2[8];
          cVar19 = pcVar2[9];
          cVar20 = pcVar2[10];
          cVar21 = pcVar2[0xb];
          cVar22 = pcVar2[0xc];
          cVar23 = pcVar2[0xd];
          cVar24 = pcVar2[0xe];
          cVar25 = pcVar2[0xf];
          auVar44[0] = -(cVar28 == auVar43[0]);
          auVar44[1] = -(cVar11 == auVar43[1]);
          auVar44[2] = -(cVar12 == auVar43[2]);
          auVar44[3] = -(cVar13 == auVar43[3]);
          auVar44[4] = -(cVar14 == auVar43[4]);
          auVar44[5] = -(cVar15 == auVar43[5]);
          auVar44[6] = -(cVar16 == auVar43[6]);
          auVar44[7] = -(cVar17 == auVar43[7]);
          auVar44[8] = -(cVar18 == auVar43[0]);
          auVar44[9] = -(cVar19 == auVar43[1]);
          auVar44[10] = -(cVar20 == auVar43[2]);
          auVar44[0xb] = -(cVar21 == auVar43[3]);
          auVar44[0xc] = -(cVar22 == auVar43[4]);
          auVar44[0xd] = -(cVar23 == auVar43[5]);
          auVar44[0xe] = -(cVar24 == auVar43[6]);
          auVar44[0xf] = -(cVar25 == auVar43[7]);
          uVar29 = (ushort)(SUB161(auVar44 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar44[0xf] >> 7) << 0xf;
          uVar30 = (uint)uVar29;
          if (uVar29 != 0) {
            local_90 = plVar34;
            local_88 = puVar36;
            do {
              uVar5 = 0;
              for (uVar6 = uVar30; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                uVar5 = uVar5 + 1;
              }
              lVar40 = (uVar5 + uVar31 & (ulonglong)local_90) * -0x50;
              cVar27 = FUN_1801ae3a0(param_1,lVar33 + -0x50 + lVar40);
              if ((cVar27 != '\0') && (cVar27 = FUN_1801acfa0(local_98), cVar27 != '\0')) {
                lVar1 = lVar40 + lVar33;
                uVar31 = *(ulonglong *)(lVar33 + -8 + lVar40);
                uVar32 = 0;
                if (uVar31 != 0) goto LAB_1800805d0;
                uVar38 = 0;
                goto LAB_1800806ec;
              }
              uVar29 = (ushort)(uVar30 - 1) & (ushort)uVar30;
              uVar30 = CONCAT22((short)(uVar30 - 1 >> 0x10),uVar29);
              plVar34 = local_90;
              puVar36 = local_88;
            } while (uVar29 != 0);
          }
          auVar45[0] = -(cVar28 == (char)iVar7);
          auVar45[1] = -(cVar11 == (char)((uint)iVar7 >> 8));
          auVar45[2] = -(cVar12 == (char)((uint)iVar7 >> 0x10));
          auVar45[3] = -(cVar13 == (char)((uint)iVar7 >> 0x18));
          auVar45[4] = -(cVar14 == (char)iVar8);
          auVar45[5] = -(cVar15 == (char)((uint)iVar8 >> 8));
          auVar45[6] = -(cVar16 == (char)((uint)iVar8 >> 0x10));
          auVar45[7] = -(cVar17 == (char)((uint)iVar8 >> 0x18));
          auVar45[8] = -(cVar18 == (char)iVar9);
          auVar45[9] = -(cVar19 == (char)((uint)iVar9 >> 8));
          auVar45[10] = -(cVar20 == (char)((uint)iVar9 >> 0x10));
          auVar45[0xb] = -(cVar21 == (char)((uint)iVar9 >> 0x18));
          auVar45[0xc] = -(cVar22 == (char)iVar10);
          auVar45[0xd] = -(cVar23 == (char)((uint)iVar10 >> 8));
          auVar45[0xe] = -(cVar24 == (char)((uint)iVar10 >> 0x10));
          auVar45[0xf] = -(cVar25 == (char)((uint)iVar10 >> 0x18));
          if ((((((((((((((((SUB161(auVar45 >> 7,0) & 1) != 0 || (SUB161(auVar45 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar45 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar45 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar45 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar45 >> 0x2f,0) & 1) != 0) || (SUB161(auVar45 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar45 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar45 >> 0x47,0) & 1) != 0) || (SUB161(auVar45 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar45 >> 0x57,0) & 1) != 0) || (SUB161(auVar45 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar45 >> 0x67,0) & 1) != 0) || (SUB161(auVar45 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar45 >> 0x77,0) & 1) != 0) || auVar45[0xf] < '\0') break;
          uVar31 = (longlong)puVar36 + uVar31 + 0x10;
          puVar36 = puVar36 + 2;
        }
      }
LAB_180080743:
      if ((((char)local_b4 == '\0') && ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) != 0)
          ) && (cVar28 = FUN_180200a50(), cVar28 == '\0')) {
        *(undefined1 *)(local_b0 + 0x11) = 1;
      }
      LOCK();
      cVar28 = *(char *)(local_b0 + 0x10);
      *(char *)(local_b0 + 0x10) = '\0';
      UNLOCK();
      if (cVar28 == '\x02') {
        WakeByAddressSingle(local_b0 + 0x10);
      }
    }
    else {
      if ((((char)local_b4 == '\0') && ((*(ulonglong *)puVar26 & 0x7fffffffffffffff) != 0)) &&
         (cVar28 = FUN_180200a50(), cVar28 == '\0')) {
        *(undefined1 *)(lVar33 + 0x11) = 1;
      }
      LOCK();
      cVar28 = *(char *)(lVar33 + 0x10);
      *(char *)(lVar33 + 0x10) = '\0';
      UNLOCK();
      if (cVar28 == '\x02') {
        WakeByAddressSingle(lVar33 + 0x10);
      }
    }
  }
  return;
LAB_1800805d0:
  if (*(ulonglong *)(lVar1 + -8) <= uVar32) {
                    /* WARNING: Subroutine does not return */
    FUN_180201b60("Out of bounds accessC:\\Users\\burne\\.rustup\\toolchains\\stable-x86_64-pc-windows-msvc\\lib/rustlib/src/rust\\library\\alloc\\src\\collections\\vec_deque\\mod.rs"
                  ,0x14,&DAT_18020cf28);
  }
  uVar38 = 0;
  if (*(ulonglong *)(lVar1 + -0x20) <= uVar32 + *(longlong *)(lVar1 + -0x10)) {
    uVar38 = *(ulonglong *)(lVar1 + -0x20);
  }
  if (*(char *)(*(longlong *)
                 (*(longlong *)(lVar1 + -0x18) +
                 ((*(longlong *)(lVar1 + -0x10) - uVar38) + uVar32) * 8) + 0x80) == '\0')
  goto code_r0x00018008060c;
  uVar38 = uVar32 + 1;
  if (uVar38 < uVar31) {
    do {
      while( true ) {
        uVar37 = uVar38;
        if (*(ulonglong *)(lVar1 + -8) <= uVar37) {
                    /* WARNING: Subroutine does not return */
          FUN_180201b60("Out of bounds accessC:\\Users\\burne\\.rustup\\toolchains\\stable-x86_64-pc-windows-msvc\\lib/rustlib/src/rust\\library\\alloc\\src\\collections\\vec_deque\\mod.rs"
                        ,0x14,&DAT_18020cf40);
        }
        uVar38 = *(ulonglong *)(lVar1 + -0x20);
        if (uVar37 + *(longlong *)(lVar1 + -0x10) < uVar38) {
          uVar38 = 0;
        }
        if (*(char *)(*(longlong *)
                       (*(longlong *)(lVar1 + -0x18) +
                       ((*(longlong *)(lVar1 + -0x10) - uVar38) + uVar37) * 8) + 0x80) == '\0')
        break;
        uVar38 = uVar37 + 1;
        if (uVar31 <= uVar37 + 1) goto LAB_1800806e9;
      }
      if (*(ulonglong *)(lVar1 + -8) <= uVar32) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0(&DAT_18020cf58,0x20,&DAT_18020cf78);
      }
      if (*(ulonglong *)(lVar1 + -8) <= uVar37) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0(&DAT_18020cf90,0x20,&DAT_18020cfb0);
      }
      lVar33 = *(longlong *)(lVar1 + -0x10);
      uVar38 = *(ulonglong *)(lVar1 + -0x20);
      lVar40 = *(longlong *)(lVar1 + -0x18);
      uVar39 = uVar38;
      if (lVar33 + uVar32 < uVar38) {
        uVar39 = 0;
      }
      lVar35 = (lVar33 + uVar32) - uVar39;
      if (lVar33 + uVar37 < uVar38) {
        uVar38 = 0;
      }
      lVar33 = (lVar33 - uVar38) + uVar37;
      uVar4 = *(undefined8 *)(lVar40 + lVar35 * 8);
      *(undefined8 *)(lVar40 + lVar35 * 8) = *(undefined8 *)(lVar40 + lVar33 * 8);
      *(undefined8 *)(lVar40 + lVar33 * 8) = uVar4;
      uVar38 = uVar37 + 1;
      uVar32 = uVar32 + 1;
    } while (uVar38 < uVar31);
LAB_1800806e9:
    uVar38 = uVar37 + 1;
  }
LAB_1800806ec:
  if (uVar38 == uVar32) {
LAB_1800806f5:
    uVar31 = *(ulonglong *)(lVar1 + -8);
  }
  else {
    uVar31 = *(ulonglong *)(lVar1 + -8);
    if (uVar32 < uVar31) {
      uVar38 = *(ulonglong *)(lVar1 + -0x20);
      uVar37 = uVar38;
      if (*(ulonglong *)(lVar1 + -0x10) < uVar38) {
        uVar37 = 0;
      }
      lVar33 = *(ulonglong *)(lVar1 + -0x10) - uVar37;
      uVar37 = uVar38 - lVar33;
      local_98 = (longlong *)(uVar31 - uVar37);
      bVar41 = local_98 != (longlong *)0x0;
      if (uVar31 < uVar37) {
        local_98 = (longlong *)0x0;
      }
      lVar40 = *(longlong *)(lVar1 + -0x18);
      uVar39 = lVar33 + uVar31;
      if (uVar31 >= uVar37 && bVar41) {
        uVar39 = uVar38;
      }
      uVar39 = uVar39 - lVar33;
      *(ulonglong *)(lVar1 + -8) = uVar32;
      lVar35 = uVar32 - uVar39;
      if (uVar32 < uVar39 || lVar35 == 0) {
        local_a8 = uVar39 - uVar32;
        local_88 = (undefined8 *)(lVar40 + lVar33 * 8 + uVar32 * 8);
        local_90 = (longlong *)0x0;
        local_c0 = lVar40;
        while (local_90 != (longlong *)local_a8) {
          local_a0 = local_88 + (longlong)local_90;
          lVar33 = local_88[(longlong)local_90];
          local_90 = (longlong *)((longlong)local_90 + 1);
          LOCK();
          *(undefined1 *)(lVar33 + 0x80) = 1;
          UNLOCK();
          LOCK();
          cVar28 = *(char *)(lVar33 + 0x60);
          *(char *)(lVar33 + 0x60) = '\x01';
          UNLOCK();
          if (cVar28 == '\0') {
            lVar40 = *(longlong *)(lVar33 + 0x50);
            *(undefined8 *)(lVar33 + 0x50) = 0;
            LOCK();
            uVar3 = *(undefined1 *)(lVar33 + 0x60);
            *(undefined1 *)(lVar33 + 0x60) = 0;
            UNLOCK();
            if (lVar40 != 0) {
              (**(code **)(lVar40 + 8))(*(undefined8 *)(lVar33 + 0x58),uVar3);
            }
          }
          LOCK();
          cVar28 = *(char *)(lVar33 + 0x78);
          *(char *)(lVar33 + 0x78) = '\x01';
          UNLOCK();
          if (cVar28 == '\0') {
            lVar40 = *(longlong *)(lVar33 + 0x68);
            *(undefined8 *)(lVar33 + 0x68) = 0;
            local_e8 = lVar33;
            if (lVar40 != 0) {
              (**(code **)(lVar40 + 0x18))(*(undefined8 *)(lVar33 + 0x70));
            }
            LOCK();
            *(undefined1 *)(local_e8 + 0x78) = 0;
            UNLOCK();
          }
          plVar34 = (longlong *)*local_a0;
          LOCK();
          *plVar34 = *plVar34 + -1;
          UNLOCK();
          if (*plVar34 == 0) {
            FUN_18003ce90();
          }
        }
        local_90 = (longlong *)0x0;
        while (local_90 != local_98) {
          local_88 = (undefined8 *)(local_c0 + (longlong)local_90 * 8);
          puVar36 = *(undefined8 **)(local_c0 + (longlong)local_90 * 8);
          local_90 = (longlong *)((longlong)local_90 + 1);
          LOCK();
          *(undefined1 *)(puVar36 + 0x10) = 1;
          UNLOCK();
          LOCK();
          cVar28 = *(char *)(puVar36 + 0xc);
          *(char *)(puVar36 + 0xc) = '\x01';
          UNLOCK();
          if (cVar28 == '\0') {
            lVar33 = puVar36[10];
            puVar36[10] = 0;
            LOCK();
            uVar3 = *(undefined1 *)(puVar36 + 0xc);
            *(undefined1 *)(puVar36 + 0xc) = 0;
            UNLOCK();
            if (lVar33 != 0) {
              (**(code **)(lVar33 + 8))(puVar36[0xb],uVar3);
            }
          }
          LOCK();
          cVar28 = *(char *)(puVar36 + 0xf);
          *(char *)(puVar36 + 0xf) = '\x01';
          UNLOCK();
          if (cVar28 == '\0') {
            lVar33 = puVar36[0xd];
            puVar36[0xd] = 0;
            local_a0 = puVar36;
            if (lVar33 != 0) {
              (**(code **)(lVar33 + 0x18))(puVar36[0xe]);
            }
            LOCK();
            *(undefined1 *)(local_a0 + 0xf) = 0;
            UNLOCK();
          }
          plVar34 = (longlong *)*local_88;
          LOCK();
          *plVar34 = *plVar34 + -1;
          UNLOCK();
          if (*plVar34 == 0) {
            FUN_18003ce90();
          }
        }
      }
      else {
        local_98 = (longlong *)((longlong)local_98 - lVar35);
        local_88 = (undefined8 *)(lVar40 + lVar35 * 8);
        local_90 = (longlong *)0x0;
        while (local_90 != local_98) {
          local_a0 = local_88 + (longlong)local_90;
          lVar33 = local_88[(longlong)local_90];
          local_90 = (longlong *)((longlong)local_90 + 1);
          LOCK();
          *(undefined1 *)(lVar33 + 0x80) = 1;
          UNLOCK();
          LOCK();
          cVar28 = *(char *)(lVar33 + 0x60);
          *(char *)(lVar33 + 0x60) = '\x01';
          UNLOCK();
          if (cVar28 == '\0') {
            lVar40 = *(longlong *)(lVar33 + 0x50);
            *(undefined8 *)(lVar33 + 0x50) = 0;
            LOCK();
            uVar3 = *(undefined1 *)(lVar33 + 0x60);
            *(undefined1 *)(lVar33 + 0x60) = 0;
            UNLOCK();
            if (lVar40 != 0) {
              (**(code **)(lVar40 + 8))(*(undefined8 *)(lVar33 + 0x58),uVar3);
            }
          }
          LOCK();
          cVar28 = *(char *)(lVar33 + 0x78);
          *(char *)(lVar33 + 0x78) = '\x01';
          UNLOCK();
          if (cVar28 == '\0') {
            lVar40 = *(longlong *)(lVar33 + 0x68);
            *(undefined8 *)(lVar33 + 0x68) = 0;
            local_a8 = lVar33;
            if (lVar40 != 0) {
              (**(code **)(lVar40 + 0x18))(*(undefined8 *)(lVar33 + 0x70));
            }
            LOCK();
            *(undefined1 *)(local_a8 + 0x78) = 0;
            UNLOCK();
          }
          plVar34 = (longlong *)*local_a0;
          LOCK();
          *plVar34 = *plVar34 + -1;
          UNLOCK();
          if (*plVar34 == 0) {
            FUN_18003ce90();
          }
        }
      }
      goto LAB_1800806f5;
    }
  }
  if ((uVar31 == 0) && (FUN_1800a2740(&local_e0,local_f0,param_1), !SBORROW8(0,(longlong)local_e0)))
  {
    local_98 = local_e0;
    FUN_18007f440(&local_e0);
    if (local_98 != (longlong *)0x0) {
      thunk_FUN_1801d3330(local_d8,(longlong)local_98 << 3,8);
    }
  }
  goto LAB_180080743;
code_r0x00018008060c:
  uVar32 = uVar32 + 1;
  if (uVar31 == uVar32) goto LAB_1800806f5;
  goto LAB_1800805d0;
}


