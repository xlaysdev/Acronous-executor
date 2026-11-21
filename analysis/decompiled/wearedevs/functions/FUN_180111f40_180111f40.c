/* FUN_180111f40 @ 180111f40 */

ulonglong FUN_180111f40(byte *param_1,byte *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 local_32;
  undefined8 uStack_2a;
  byte local_22;
  byte local_21;
  uint local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_22 = param_1[0x11];
  local_32 = *(undefined8 *)(param_1 + 1);
  uStack_2a = *(undefined8 *)(param_1 + 9);
  local_21 = *param_2;
  local_20 = *(uint *)(param_2 + 1);
  uStack_1c = *(undefined4 *)(param_2 + 5);
  uStack_18 = *(undefined4 *)(param_2 + 9);
  uStack_14 = *(undefined4 *)(param_2 + 0xd);
  if ((*param_1 & 1) == 0) {
    uVar2 = 0;
    if ((local_21 & 1) == 0) {
      local_32._4_1_ = (byte)((ulonglong)local_32 >> 0x20);
      uVar3 = -1 << (-local_32._4_1_ & 0x1f);
      uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      if (0x1f < 0x20 - local_32._4_1_) {
        uVar3 = 0;
      }
      uVar3 = uVar3 & (uint)local_32;
      if ((uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) <=
          (local_20 >> 0x18 | (local_20 & 0xff0000) >> 8 | (local_20 & 0xff00) << 8 |
          local_20 << 0x18)) {
        uVar3 = 0xffffffff >> (local_32._4_1_ & 0x1f);
        uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
        if (0x1f < local_32._4_1_) {
          uVar3 = 0;
        }
        uVar3 = uVar3 | (uint)local_32;
        uVar1 = local_20 >> 0x18 | (local_20 & 0xff0000) >> 8 | (local_20 & 0xff00) << 8 |
                local_20 << 0x18;
        return (ulonglong)
               CONCAT31((int3)(uVar1 >> 8),
                        uVar1 <= (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                                 uVar3 << 0x18));
      }
    }
  }
  else {
    if ((local_21 & 1) == 0) {
      return 0;
    }
    uVar2 = FUN_180112010(&local_32,&local_20);
  }
  return uVar2;
}


