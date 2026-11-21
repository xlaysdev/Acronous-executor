/* FUN_1800ad8a0 @ 1800ad8a0 */

char * FUN_1800ad8a0(char *param_1,int *param_2,undefined8 *param_3,longlong param_4,
                    undefined8 param_5)

{
  int *piVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  char cVar13;
  uint uVar14;
  undefined8 uVar15;
  int *local_88;
  char local_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 local_60;
  undefined7 uStack_5f;
  int ***local_58;
  int ***local_50;
  int **local_48;
  undefined1 *local_40;
  int ****local_38;
  undefined *local_30;
  
  puVar12 = PTR_PTR_1802fd0a8;
  puVar11 = PTR_PTR_1802fd0a0;
  if ((*(byte *)(param_3 + 7) & 1) == 0) {
    if (param_2[0x10] != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("assertion failed: self.remote.is_none()C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\h2-0.4.18\\src\\proto\\settings.rs"
                    ,0x27,&DAT_180211198);
    }
    uVar15 = *param_3;
    uVar5 = param_3[1];
    uVar6 = param_3[2];
    uVar7 = param_3[3];
    uVar8 = param_3[4];
    uVar9 = param_3[5];
    uVar10 = *(undefined8 *)((longlong)param_3 + 0x34);
    *(undefined8 *)(param_2 + 0x1b) = *(undefined8 *)((longlong)param_3 + 0x2c);
    *(undefined8 *)(param_2 + 0x1d) = uVar10;
    *(undefined8 *)(param_2 + 0x18) = uVar8;
    *(undefined8 *)(param_2 + 0x1a) = uVar9;
    *(undefined8 *)(param_2 + 0x14) = uVar6;
    *(undefined8 *)(param_2 + 0x16) = uVar7;
    *(undefined8 *)(param_2 + 0x10) = uVar15;
    *(undefined8 *)(param_2 + 0x12) = uVar5;
  }
  else {
    if (*param_2 != 1) {
      if (*(ulonglong *)PTR_DAT_1802fd448 < 2) {
        bVar3 = PTR_PTR_1802fd0a8[0x10];
        uVar14 = (uint)bVar3;
        if (((bVar3 - 1 < 2) ||
            ((bVar3 != 0 && (uVar14 = FUN_1801faaf0(PTR_PTR_1802fd0a8), (char)uVar14 != '\0')))) &&
           (cVar13 = FUN_1801601d0(*(undefined8 *)puVar12,uVar14), cVar13 != '\0')) {
          lVar4 = *(longlong *)puVar12;
          lVar2 = lVar4 + 0x30;
          local_48 = (int **)0x1802111d3;
          local_40 = (undefined1 *)0x89;
          local_58 = &local_48;
          local_50 = (int ***)&DAT_180210a98;
          local_80 = '\x01';
          uStack_7f = 0;
          uStack_78 = SUB81(&local_58,0);
          uStack_77 = (undefined7)((ulonglong)&local_58 >> 8);
          uStack_70 = 1;
          uStack_6f = 0;
          uStack_68 = (undefined1)lVar2;
          uStack_67 = (undefined7)((ulonglong)lVar2 >> 8);
          FUN_180160ae0(lVar4,&local_80);
        }
      }
      param_1[0] = '\x01';
      param_1[1] = '\x01';
      param_1[4] = '\x01';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      *(undefined ***)(param_1 + 8) = &PTR_LAB_180211218;
      param_1[0x10] = '\x01';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      param_1[0x20] = '\0';
      param_1[0x21] = '\0';
      param_1[0x22] = '\0';
      param_1[0x23] = '\0';
      param_1[0x24] = '\0';
      param_1[0x25] = '\0';
      param_1[0x26] = '\0';
      param_1[0x27] = '\0';
      return param_1;
    }
    piVar1 = param_2 + 1;
    local_88 = piVar1;
    if (*(ulonglong *)PTR_DAT_1802fd448 < 2) {
      bVar3 = PTR_PTR_1802fd0a0[0x10];
      uVar14 = (uint)bVar3;
      if (((bVar3 - 1 < 2) ||
          ((bVar3 != 0 && (uVar14 = FUN_1801faaf0(PTR_PTR_1802fd0a0), (char)uVar14 != '\0')))) &&
         (cVar13 = FUN_1801601d0(*(undefined8 *)puVar11,uVar14), cVar13 != '\0')) {
        lVar4 = *(longlong *)puVar11;
        lVar2 = lVar4 + 0x30;
        local_48 = &local_88;
        local_40 = &LAB_18003a2a0;
        local_58 = (int ***)&DAT_1802111b0;
        local_50 = &local_48;
        local_38 = &local_58;
        local_30 = &DAT_180210a98;
        local_80 = '\x01';
        uStack_7f = 0;
        uStack_78 = SUB81(&local_38,0);
        uStack_77 = (undefined7)((ulonglong)&local_38 >> 8);
        uStack_70 = 1;
        uStack_6f = 0;
        uStack_68 = (undefined1)lVar2;
        uStack_67 = (undefined7)((ulonglong)lVar2 >> 8);
        FUN_180160ae0(lVar4,&local_80);
      }
    }
    if ((char)param_2[9] != '\0') {
      if (0xffbfff < param_2[10] - 0x4000U) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: DEFAULT_MAX_FRAME_SIZE as usize <= val && val <= MAX_MAX_FRAME_SIZE as usizeC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\h2-0.4.18\\src\\codec\\framed_read.rs"
                      ,0x5e,&DAT_180210f58);
      }
      *(ulonglong *)(param_4 + 0x10) = (ulonglong)(uint)param_2[10];
      uVar15 = FUN_180140860(*(undefined8 *)(param_4 + 0x3b0));
      *(undefined8 *)(param_4 + 0x3b8) = uVar15;
    }
    if ((char)param_2[0xb] != '\0') {
      uVar14 = param_2[0xc];
      *(ulonglong *)(param_4 + 0x3b0) = (ulonglong)uVar14;
      uVar15 = FUN_180140860((ulonglong)uVar14,*(undefined8 *)(param_4 + 0x10));
      *(undefined8 *)(param_4 + 0x3b8) = uVar15;
    }
    if (*piVar1 == 1) {
      FUN_180144510(param_4 + 0x1f8,param_2[2]);
    }
    FUN_18008cfd0(&local_80,param_5,local_88);
    if (local_80 != '\x03') {
      *(ulonglong *)(param_1 + 0x20) = CONCAT71(uStack_5f,local_60);
      *(ulonglong *)(param_1 + 0x11) = CONCAT17(uStack_68,uStack_6f);
      *(ulonglong *)(param_1 + 0x19) = CONCAT17(local_60,uStack_67);
      *(ulonglong *)(param_1 + 1) = CONCAT17(uStack_78,uStack_7f);
      *(ulonglong *)(param_1 + 9) = CONCAT17(uStack_70,uStack_77);
      *param_1 = local_80;
      return param_1;
    }
    *param_2 = 2;
  }
  *param_1 = '\x03';
  return param_1;
}


