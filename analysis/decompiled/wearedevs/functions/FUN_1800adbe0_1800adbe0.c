/* FUN_1800adbe0 @ 1800adbe0 */

char * FUN_1800adbe0(char *param_1,int *param_2,longlong param_3,longlong param_4,undefined8 param_5
                    )

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined *puVar17;
  longlong lVar18;
  int *piVar19;
  int *local_1d0;
  char **local_1c8;
  undefined *local_1c0;
  char *local_1b8;
  undefined8 *local_1b0;
  undefined8 local_1a8;
  undefined1 *local_1a0;
  int iStack_198;
  int iStack_194;
  undefined8 local_190;
  int local_188;
  uint local_184;
  int local_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  undefined1 local_170;
  undefined4 local_168;
  int iStack_164;
  undefined8 uStack_160;
  int iStack_158;
  int iStack_154;
  undefined8 uStack_150;
  int iStack_148;
  int local_144;
  int iStack_140;
  int iStack_13c;
  int iStack_138;
  ulonglong local_134;
  undefined1 local_12c;
  
  uVar15 = param_2[0x10];
  if (uVar15 == 2) {
LAB_1800adc09:
    param_2[0x10] = 2;
    if (*param_2 == 0) {
      piVar19 = param_2 + 1;
      local_1d0 = piVar19;
      if ((*(int *)(param_4 + 0x128) != 4) ||
         ((ulonglong)(*(longlong *)(param_4 + 0x180) - *(longlong *)(param_4 + 0x178)) <
          *(ulonglong *)(param_4 + 0x1a0))) {
        uVar16 = FUN_18005ccd0(param_4 + 0x48);
        if ((uVar16 & 1) == 0) {
          if (param_3 != 0) {
LAB_1800ade1c:
            FUN_18014f8d0(param_1);
            return param_1;
          }
          if ((*(int *)(param_4 + 0x128) == 4) &&
             (*(ulonglong *)(param_4 + 0x1a0) <=
              (ulonglong)(*(longlong *)(param_4 + 0x180) - *(longlong *)(param_4 + 0x178))))
          goto LAB_1800adf3e;
        }
        goto LAB_1800ade0e;
      }
LAB_1800adf3e:
      local_12c = (undefined1)param_2[0xf];
      iStack_164 = param_2[1];
      uStack_160._0_4_ = param_2[2];
      uStack_160._4_4_ = param_2[3];
      iStack_158 = param_2[4];
      iStack_154 = param_2[5];
      uStack_150._0_4_ = param_2[6];
      uStack_150._4_4_ = param_2[7];
      iStack_148 = param_2[8];
      local_144 = param_2[9];
      iStack_140 = param_2[10];
      iStack_13c = param_2[0xb];
      iStack_138 = param_2[0xc];
      local_134 = *(ulonglong *)(param_2 + 0xd);
      local_168._0_1_ = 4;
      cVar13 = FUN_18005b0b0(param_4 + 0x48,&local_168);
      puVar17 = PTR_PTR_1802fd0b8;
      if (cVar13 != '\r') {
        local_168 = CONCAT31(local_168._1_3_,cVar13);
        puVar17 = &DAT_180211348;
LAB_1800ae108:
                    /* WARNING: Subroutine does not return */
        FUN_180201bc0("invalid settings frame",0x16,&local_168,&DAT_180211688,puVar17);
      }
      if (*(longlong *)PTR_DAT_1802fd448 == 0) {
        bVar1 = PTR_PTR_1802fd0b8[0x10];
        uVar15 = (uint)bVar1;
        if (((bVar1 - 1 < 2) ||
            ((bVar1 != 0 && (uVar15 = FUN_1801faaf0(PTR_PTR_1802fd0b8), (char)uVar15 != '\0')))) &&
           (cVar13 = FUN_1801601d0(*(undefined8 *)puVar17,uVar15), cVar13 != '\0')) {
          lVar5 = *(longlong *)puVar17;
          uStack_150 = lVar5 + 0x30;
          local_1a8 = &local_1d0;
          local_1a0 = &LAB_18003a2a0;
          local_1b8 = &DAT_180211360;
          local_1b0 = &local_1a8;
          local_1c8 = &local_1b8;
          local_1c0 = &DAT_180210a98;
          local_168 = 1;
          iStack_164 = 0;
          uStack_160 = &local_1c8;
          iStack_158 = 1;
          iStack_154 = 0;
          FUN_180160ae0(lVar5,&local_168);
          piVar19 = local_1d0;
        }
      }
      iVar12 = piVar19[0xe];
      uVar6 = *(undefined8 *)piVar19;
      uVar7 = *(undefined8 *)(piVar19 + 2);
      uVar8 = *(undefined8 *)(piVar19 + 4);
      uVar9 = *(undefined8 *)(piVar19 + 6);
      uVar10 = *(undefined8 *)(piVar19 + 8);
      uVar11 = *(undefined8 *)(piVar19 + 10);
      uVar4 = *(undefined8 *)(piVar19 + 0xc);
      *param_2 = 1;
      *(undefined8 *)(param_2 + 1) = uVar6;
      *(undefined8 *)(param_2 + 3) = uVar7;
      *(undefined8 *)(param_2 + 5) = uVar8;
      *(undefined8 *)(param_2 + 7) = uVar9;
      *(undefined8 *)(param_2 + 9) = uVar10;
      *(undefined8 *)(param_2 + 0xb) = uVar11;
      *(undefined8 *)(param_2 + 0xd) = uVar4;
      *(char *)(param_2 + 0xf) = (char)iVar12;
    }
    *param_1 = '\x03';
  }
  else {
    local_170 = (undefined1)param_2[0x1e];
    iVar12 = param_2[0x11];
    local_1a0 = *(undefined1 **)(param_2 + 0x12);
    iStack_198 = param_2[0x14];
    iStack_194 = param_2[0x15];
    local_190 = *(undefined8 *)(param_2 + 0x16);
    iVar2 = param_2[0x18];
    uVar3 = param_2[0x19];
    local_180 = param_2[0x1a];
    iStack_17c = param_2[0x1b];
    iStack_178 = param_2[0x1c];
    iStack_174 = param_2[0x1d];
    local_1a8 = (int **)CONCAT44(iVar12,uVar15);
    lVar5 = param_4 + 0x48;
    local_188 = iVar2;
    local_184 = uVar3;
    if ((*(int *)(param_4 + 0x128) == 4) &&
       (*(ulonglong *)(param_4 + 0x1a0) <=
        (ulonglong)(*(longlong *)(param_4 + 0x180) - *(longlong *)(param_4 + 0x178)))) {
LAB_1800adcd8:
      iStack_164 = 0;
      uStack_160._4_4_ = 0;
      iStack_154 = 0;
      uStack_150._4_4_ = 0;
      local_144 = 0;
      iStack_13c = 0;
      local_134 = local_134 & 0xffffffff00000000;
      local_12c = 1;
      local_168 = CONCAT31(local_168._1_3_,4);
      cVar13 = FUN_18005b0b0(lVar5,&local_168);
      if (cVar13 != '\r') {
        local_168 = CONCAT31(local_168._1_3_,cVar13);
        puVar17 = &DAT_180211258;
        goto LAB_1800ae108;
      }
      uStack_160 = (char ***)CONCAT44(uStack_160._4_4_,(int)uStack_160);
      uStack_150 = CONCAT44(uStack_150._4_4_,(int)uStack_150);
      if (*(longlong *)PTR_DAT_1802fd448 == 0) {
        bVar1 = PTR_PTR_1802fd0b0[0x10];
        uVar14 = (uint)bVar1;
        if (bVar1 - 1 < 2) {
LAB_1800ade7e:
          cVar13 = FUN_1801601d0(*(undefined8 *)PTR_PTR_1802fd0b0,uVar14);
          uStack_160 = (char ***)CONCAT44(uStack_160._4_4_,(int)uStack_160);
          uStack_150 = CONCAT44(uStack_150._4_4_,(int)uStack_150);
          if (cVar13 != '\0') {
            uStack_150 = *(longlong *)PTR_PTR_1802fd0b0 + 0x30;
            local_1b8 = "ACK sent; applying settings";
            local_1b0 = (undefined8 *)0x37;
            local_1c8 = &local_1b8;
            local_1c0 = &DAT_180210a98;
            local_168 = 1;
            iStack_164 = 0;
            uStack_160 = &local_1c8;
            iStack_158 = 1;
            iStack_154 = 0;
            FUN_180160ae0(*(longlong *)PTR_PTR_1802fd0b0,&local_168);
          }
        }
        else {
          uStack_160 = (char ***)CONCAT44(uStack_160._4_4_,(int)uStack_160);
          uStack_150 = CONCAT44(uStack_150._4_4_,(int)uStack_150);
          if (bVar1 != 0) {
            uVar14 = FUN_1801faaf0(PTR_PTR_1802fd0b0);
            if ((char)uVar14 != '\0') goto LAB_1800ade7e;
          }
        }
      }
      bVar1 = *(byte *)(param_2 + 0x1f);
      *(undefined1 *)(param_2 + 0x1f) = 1;
      FUN_18008d460(&local_168,param_5,&local_1a8,bVar1 ^ 1);
      if ((char)local_168 != '\x03') {
        *(ulonglong *)(param_1 + 0x20) = CONCAT44(local_144,iStack_148);
        *(ulonglong *)(param_1 + 0x11) =
             CONCAT17((undefined1)uStack_150,CONCAT43(iStack_154,iStack_158._1_3_));
        *(ulonglong *)(param_1 + 0x19) =
             CONCAT17((undefined1)iStack_148,(int7)((ulonglong)uStack_150 >> 8));
        *(ulonglong *)(param_1 + 1) =
             CONCAT17((undefined1)uStack_160,CONCAT43(iStack_164,local_168._1_3_));
        *(ulonglong *)(param_1 + 9) =
             CONCAT17((undefined1)iStack_158,(int7)((ulonglong)uStack_160 >> 8));
        *param_1 = (char)local_168;
        return param_1;
      }
      if ((uVar15 & 1) != 0) {
        FUN_1801489a0(lVar5,iVar12);
      }
      if ((char)iVar2 != '\0') {
        if (0xffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_180201ec0("assertion failed: val <= frame::MAX_MAX_FRAME_SIZE as usizeC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\h2-0.4.18\\src\\codec\\framed_write.rs"
                        ,0x3b,&DAT_180211330);
        }
        *(uint *)(param_4 + 0x1a8) = uVar3;
      }
      goto LAB_1800adc09;
    }
    lVar18 = param_3;
    uVar16 = FUN_18005ccd0(lVar5);
    if ((uVar16 & 1) == 0) {
      if (lVar18 != 0) goto LAB_1800ade1c;
      if ((*(int *)(param_4 + 0x128) == 4) &&
         (*(ulonglong *)(param_4 + 0x1a0) <=
          (ulonglong)(*(longlong *)(param_4 + 0x180) - *(longlong *)(param_4 + 0x178))))
      goto LAB_1800adcd8;
    }
LAB_1800ade0e:
    *param_1 = '\x04';
  }
  return param_1;
}


