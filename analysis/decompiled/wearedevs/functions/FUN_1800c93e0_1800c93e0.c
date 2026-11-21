/* FUN_1800c93e0 @ 1800c93e0 */

ulonglong FUN_1800c93e0(undefined1 (*param_1) [16],longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  longlong local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  
  local_58 = *param_1;
  auVar11._0_8_ = local_58._0_8_;
  auVar11._8_4_ = local_58._0_4_;
  auVar11._12_4_ = local_58._4_4_;
  local_78 = auVar11 ^ (undefined1  [16])s_uespemosarenegyl_180204b70;
  auVar12._0_8_ = local_58._8_8_;
  auVar12._8_4_ = local_58._8_4_;
  auVar12._12_4_ = local_58._12_4_;
  local_68 = auVar12 ^ (undefined1  [16])s_modnarodsetybdet_180204b80;
  local_48 = (undefined1  [16])0x0;
  local_38 = 0;
  FUN_1800465c0(param_2,local_78);
  lVar2 = *(longlong *)(param_2 + 0x20);
  local_80 = lVar2;
  FUN_1800271e0(local_78,&local_80,8);
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x18);
    lVar10 = 0;
    do {
      bVar1 = *(byte *)(lVar3 + lVar10);
      local_80 = CONCAT71(local_80._1_7_,((byte)(bVar1 + 0xbf) < 0x1a) << 5 | bVar1);
      FUN_1800271e0(local_78,&local_80,1);
      lVar10 = lVar10 + 1;
    } while (lVar2 != lVar10);
  }
  uVar9 = local_48._0_8_ << 0x38 | local_48._8_8_;
  uVar5 = local_68._8_8_ ^ uVar9;
  uVar4 = local_78._0_8_ + local_68._0_8_;
  uVar7 = (local_68._0_8_ << 0xd | (ulonglong)local_68._0_8_ >> 0x33) ^ uVar4;
  uVar6 = (uVar5 << 0x10 | uVar5 >> 0x30) ^ local_78._8_8_ + uVar5;
  uVar8 = local_78._8_8_ + uVar5 + uVar7;
  uVar4 = (uVar4 << 0x20 | uVar4 >> 0x20) + uVar6;
  uVar7 = (uVar7 << 0x11 | uVar7 >> 0x2f) ^ uVar8;
  uVar5 = (uVar6 << 0x15 | uVar6 >> 0x2b) ^ uVar4;
  uVar4 = (uVar4 ^ uVar9) + uVar7;
  uVar8 = ((uVar8 << 0x20 | uVar8 >> 0x20) ^ 0xff) + uVar5;
  uVar6 = (uVar7 << 0xd | uVar7 >> 0x33) ^ uVar4;
  uVar5 = (uVar5 << 0x10 | uVar5 >> 0x30) ^ uVar8;
  uVar8 = uVar8 + uVar6;
  uVar4 = (uVar4 << 0x20 | uVar4 >> 0x20) + uVar5;
  uVar6 = (uVar6 << 0x11 | uVar6 >> 0x2f) ^ uVar8;
  uVar5 = (uVar5 << 0x15 | uVar5 >> 0x2b) ^ uVar4;
  uVar4 = uVar4 + uVar6;
  uVar7 = (uVar8 << 0x20 | uVar8 >> 0x20) + uVar5;
  uVar6 = (uVar6 << 0xd | uVar6 >> 0x33) ^ uVar4;
  uVar5 = (uVar5 << 0x10 | uVar5 >> 0x30) ^ uVar7;
  uVar7 = uVar7 + uVar6;
  uVar4 = (uVar4 << 0x20 | uVar4 >> 0x20) + uVar5;
  uVar6 = (uVar6 << 0x11 | uVar6 >> 0x2f) ^ uVar7;
  uVar5 = (uVar5 << 0x15 | uVar5 >> 0x2b) ^ uVar4;
  uVar7 = (uVar7 << 0x20 | uVar7 >> 0x20) + uVar5;
  uVar6 = (uVar6 << 0xd | uVar6 >> 0x33) ^ uVar4 + uVar6;
  uVar4 = (uVar5 << 0x10 | uVar5 >> 0x30) ^ uVar7;
  uVar7 = uVar7 + uVar6;
  return (uVar7 << 0x20 | uVar7 >> 0x20) ^ (uVar6 << 0x11 | uVar6 >> 0x2f) ^
         (uVar4 << 0x15 | uVar4 >> 0x2b) ^ uVar7;
}


