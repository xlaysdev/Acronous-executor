/* FUN_180050ac0 @ 180050ac0 */

ulonglong FUN_180050ac0(undefined8 *param_1)

{
  longlong lVar1;
  uint *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  longlong local_50;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined1 local_38 [16];
  uint local_28;
  uint uStack_24;
  undefined8 local_20;
  undefined1 local_18 [16];
  undefined8 local_8;
  
  puVar2 = (uint *)(*(code *)*param_1)(0);
  if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1802008b0(&PTR_s_C__Users_burne__rustup_toolchain_180208dc8);
  }
  local_28 = *puVar2;
  uStack_24 = puVar2[1];
  local_20 = *(undefined8 *)(puVar2 + 2);
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x28) == '\x01') {
    local_50 = *(longlong *)(lVar1 + 0x20) + 1;
  }
  else {
    *(undefined1 *)(lVar1 + 0x28) = 1;
    local_50 = 1;
  }
  *(longlong *)(lVar1 + 0x20) = local_50;
  local_48 = local_28 ^ 0x70736575;
  uStack_44 = uStack_24 ^ 0x736f6d65;
  uStack_40 = local_28 ^ 0x6e657261;
  uStack_3c = uStack_24 ^ 0x6c796765;
  auVar8._8_4_ = (int)local_20;
  auVar8._0_8_ = local_20;
  auVar8._12_4_ = (int)((ulonglong)local_20 >> 0x20);
  local_38 = auVar8 ^ (undefined1  [16])s_modnarodsetybdet_180204b80;
  local_18 = (undefined1  [16])0x0;
  local_8 = 0;
  FUN_1800271e0(&local_48,&local_50,8);
  uVar7 = local_18._0_8_ << 0x38 | local_18._8_8_;
  uVar4 = local_38._8_8_ ^ uVar7;
  uVar3 = CONCAT44(uStack_44,local_48) + local_38._0_8_;
  uVar6 = CONCAT44(uStack_3c,uStack_40) + uVar4;
  uVar5 = (local_38._0_8_ << 0xd | (ulonglong)local_38._0_8_ >> 0x33) ^ uVar3;
  uVar4 = (uVar4 << 0x10 | uVar4 >> 0x30) ^ uVar6;
  uVar6 = uVar6 + uVar5;
  uVar3 = (uVar3 << 0x20 | uVar3 >> 0x20) + uVar4;
  uVar5 = (uVar5 << 0x11 | uVar5 >> 0x2f) ^ uVar6;
  uVar4 = (uVar4 << 0x15 | uVar4 >> 0x2b) ^ uVar3;
  uVar3 = (uVar3 ^ uVar7) + uVar5;
  uVar6 = ((uVar6 << 0x20 | uVar6 >> 0x20) ^ 0xff) + uVar4;
  uVar5 = (uVar5 << 0xd | uVar5 >> 0x33) ^ uVar3;
  uVar4 = (uVar4 << 0x10 | uVar4 >> 0x30) ^ uVar6;
  uVar6 = uVar6 + uVar5;
  uVar3 = (uVar3 << 0x20 | uVar3 >> 0x20) + uVar4;
  uVar5 = (uVar5 << 0x11 | uVar5 >> 0x2f) ^ uVar6;
  uVar4 = (uVar4 << 0x15 | uVar4 >> 0x2b) ^ uVar3;
  uVar3 = uVar3 + uVar5;
  uVar6 = (uVar6 << 0x20 | uVar6 >> 0x20) + uVar4;
  uVar5 = (uVar5 << 0xd | uVar5 >> 0x33) ^ uVar3;
  uVar4 = (uVar4 << 0x10 | uVar4 >> 0x30) ^ uVar6;
  uVar6 = uVar6 + uVar5;
  uVar3 = (uVar3 << 0x20 | uVar3 >> 0x20) + uVar4;
  uVar5 = (uVar5 << 0x11 | uVar5 >> 0x2f) ^ uVar6;
  uVar4 = (uVar4 << 0x15 | uVar4 >> 0x2b) ^ uVar3;
  uVar6 = (uVar6 << 0x20 | uVar6 >> 0x20) + uVar4;
  uVar5 = (uVar5 << 0xd | uVar5 >> 0x33) ^ uVar3 + uVar5;
  uVar3 = (uVar4 << 0x10 | uVar4 >> 0x30) ^ uVar6;
  uVar6 = uVar6 + uVar5;
  return (uVar6 << 0x20 | uVar6 >> 0x20) ^ (uVar5 << 0x11 | uVar5 >> 0x2f) ^
         (uVar3 << 0x15 | uVar3 >> 0x2b) ^ uVar6;
}


