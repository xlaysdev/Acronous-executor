/* FUN_1800a0e40 @ 1800a0e40 */

undefined8 * FUN_1800a0e40(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 (*_Src) [16];
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 (*pauVar7) [16];
  longlong lVar8;
  ulonglong uVar9;
  ulonglong _Size;
  ulonglong uVar10;
  undefined1 (*pauVar11) [16];
  longlong lVar12;
  undefined1 (*pauVar13) [16];
  uint uVar14;
  undefined *local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  longlong lStack_80;
  
  uStack_90 = param_2[1];
  if (uStack_90 == 0) {
    local_88 = 0;
    lStack_80 = 0;
    local_98 = &DAT_18020ffa0;
    uStack_90 = 0;
    goto LAB_1800a104a;
  }
  if (uStack_90 + 1 >> 0x3b == 0) {
    uVar9 = (uStack_90 + 1) * 0x20;
    _Size = uStack_90 + 0x11;
    uVar10 = uVar9 + _Size;
    if (0x7ffffffffffffff0 < uVar10 || CARRY8(uVar9,_Size)) goto LAB_1800a0ea8;
    if (uVar10 != 0) {
      FUN_180027490();
      lVar12 = thunk_FUN_1801d32d0(uVar10,0x10);
      if (lVar12 != 0) goto LAB_1800a0f16;
      uStack_90 = FUN_1801ec3f0(1,0x10,uVar10);
      goto LAB_1800a0eaf;
    }
    lVar12 = 0x10;
LAB_1800a0f16:
    local_98 = (undefined *)(lVar12 + uVar9);
    if (uStack_90 < 8) {
    }
  }
  else {
LAB_1800a0ea8:
    uStack_90 = FUN_1801ec3c0(1);
LAB_1800a0eaf:
    _Size = uStack_90 + 0x11;
    local_98 = (undefined *)0x0;
  }
  _Src = (undefined1 (*) [16])*param_2;
  pauVar7 = _Src;
  memcpy(local_98,_Src,_Size);
  lStack_80 = param_2[3];
  if (lStack_80 != 0) {
    pauVar11 = _Src + 1;
    auVar1 = *_Src;
    uVar14 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
    lVar12 = lStack_80;
    pauVar13 = _Src;
    do {
      if ((short)uVar14 == 0) {
        do {
          auVar1 = *pauVar11;
          pauVar13 = pauVar13 + -0x20;
          pauVar11 = pauVar11 + 1;
          uVar14 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
        } while (uVar14 == 0xffff);
        uVar14 = ~uVar14;
      }
      iVar2 = 0;
      for (uVar3 = uVar14; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        iVar2 = iVar2 + 1;
      }
      lVar8 = (longlong)pauVar13 - (ulonglong)(uint)(iVar2 << 5);
      uVar4 = *(undefined8 *)(lVar8 + -0x20);
      uVar5 = *(undefined8 *)(lVar8 + -0x18);
      uVar6 = FUN_1800e5580(lVar8 + -0x10);
      uVar14 = uVar14 - 1 & uVar14;
      lVar8 = (longlong)_Src - lVar8;
      *(undefined8 *)(local_98 + (-0x20 - lVar8)) = uVar4;
      *(undefined8 *)(local_98 + (-0x18 - lVar8)) = uVar5;
      *(undefined8 *)(local_98 + (-0x10 - lVar8)) = uVar6;
      *(undefined1 (**) [16])(local_98 + (-8 - lVar8)) = pauVar7;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  local_88 = param_2[2];
LAB_1800a104a:
  param_1[2] = local_88;
  param_1[3] = lStack_80;
  *param_1 = local_98;
  param_1[1] = uStack_90;
  return param_1;
}


