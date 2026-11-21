/* FUN_1800c90a0 @ 1800c90a0 */

ulonglong FUN_1800c90a0(undefined1 (*param_1) [16],longlong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulonglong local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined8 local_18;
  
  local_38 = *param_1;
  auVar9._0_8_ = local_38._0_8_;
  auVar9._8_4_ = local_38._0_4_;
  auVar9._12_4_ = local_38._4_4_;
  local_58 = auVar9 ^ (undefined1  [16])s_uespemosarenegyl_180204b70;
  auVar10._0_8_ = local_38._8_8_;
  auVar10._8_4_ = local_38._8_4_;
  auVar10._12_4_ = local_38._12_4_;
  local_48 = auVar10 ^ (undefined1  [16])s_modnarodsetybdet_180204b80;
  local_28 = (undefined1  [16])0x0;
  local_18 = 0;
  param_2 = (longlong *)*param_2;
  lVar6 = *param_2;
  local_60 = (ulonglong)(lVar6 != 0);
  FUN_1800271e0(local_58,&local_60,8);
  if (lVar6 == 0) {
    local_60 = (ulonglong)*(byte *)(param_2 + 1);
    puVar4 = &local_60;
    lVar6 = 8;
  }
  else {
    puVar4 = (ulonglong *)param_2[1];
    lVar6 = param_2[2];
  }
  FUN_1800271e0(local_58,puVar4,lVar6);
  uVar8 = local_28._0_8_ << 0x38 | local_28._8_8_;
  uVar2 = local_48._8_8_ ^ uVar8;
  uVar1 = local_58._0_8_ + local_48._0_8_;
  uVar5 = (local_48._0_8_ << 0xd | (ulonglong)local_48._0_8_ >> 0x33) ^ uVar1;
  uVar3 = (uVar2 << 0x10 | uVar2 >> 0x30) ^ local_58._8_8_ + uVar2;
  uVar7 = local_58._8_8_ + uVar2 + uVar5;
  uVar1 = (uVar1 << 0x20 | uVar1 >> 0x20) + uVar3;
  uVar5 = (uVar5 << 0x11 | uVar5 >> 0x2f) ^ uVar7;
  uVar2 = (uVar3 << 0x15 | uVar3 >> 0x2b) ^ uVar1;
  uVar1 = (uVar1 ^ uVar8) + uVar5;
  uVar7 = ((uVar7 << 0x20 | uVar7 >> 0x20) ^ 0xff) + uVar2;
  uVar3 = (uVar5 << 0xd | uVar5 >> 0x33) ^ uVar1;
  uVar2 = (uVar2 << 0x10 | uVar2 >> 0x30) ^ uVar7;
  uVar7 = uVar7 + uVar3;
  uVar1 = (uVar1 << 0x20 | uVar1 >> 0x20) + uVar2;
  uVar3 = (uVar3 << 0x11 | uVar3 >> 0x2f) ^ uVar7;
  uVar2 = (uVar2 << 0x15 | uVar2 >> 0x2b) ^ uVar1;
  uVar1 = uVar1 + uVar3;
  uVar5 = (uVar7 << 0x20 | uVar7 >> 0x20) + uVar2;
  uVar3 = (uVar3 << 0xd | uVar3 >> 0x33) ^ uVar1;
  uVar2 = (uVar2 << 0x10 | uVar2 >> 0x30) ^ uVar5;
  uVar5 = uVar5 + uVar3;
  uVar1 = (uVar1 << 0x20 | uVar1 >> 0x20) + uVar2;
  uVar3 = (uVar3 << 0x11 | uVar3 >> 0x2f) ^ uVar5;
  uVar2 = (uVar2 << 0x15 | uVar2 >> 0x2b) ^ uVar1;
  uVar5 = (uVar5 << 0x20 | uVar5 >> 0x20) + uVar2;
  uVar3 = (uVar3 << 0xd | uVar3 >> 0x33) ^ uVar1 + uVar3;
  uVar1 = (uVar2 << 0x10 | uVar2 >> 0x30) ^ uVar5;
  uVar5 = uVar5 + uVar3;
  return (uVar5 << 0x20 | uVar5 >> 0x20) ^ (uVar3 << 0x11 | uVar3 >> 0x2f) ^
         (uVar1 << 0x15 | uVar1 >> 0x2b) ^ uVar5;
}


