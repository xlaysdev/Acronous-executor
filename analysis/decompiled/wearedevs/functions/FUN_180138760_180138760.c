/* FUN_180138760 @ 180138760 */

void FUN_180138760(uint *param_1)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  uint **local_b0;
  undefined1 *local_a8;
  undefined *local_a0;
  uint ***local_98;
  undefined **local_90;
  undefined *local_88;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  uint *local_28;
  uint *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (3 < *param_1) {
    local_28 = param_1;
    if ((*(longlong *)PTR_DAT_1802fd448 == 0) &&
       (((uVar3 = (uint)DAT_1802fc508, uVar3 - 1 < 2 ||
         ((uVar3 != 0 && (uVar3 = FUN_1801faaf0(&PTR_DAT_1802fc4f8), (char)uVar3 != '\0')))) &&
        (cVar1 = FUN_1801601d0(PTR_DAT_1802fc4f8,uVar3), cVar1 != '\0')))) {
      uStack_38 = PTR_DAT_1802fc4f8 + 0x30;
      local_b0 = &local_28;
      local_a8 = &LAB_180139000;
      local_a0 = &DAT_18024d8c0;
      local_98 = &local_b0;
      local_90 = &local_a0;
      local_88 = &DAT_18024c458;
      local_50 = 1;
      uStack_48 = &local_90;
      local_40 = 1;
      FUN_180160ae0(PTR_DAT_1802fc4f8,&local_50);
    }
    uVar2 = FUN_1801d6710(0xb,
                          "stream closed because of a broken pipeevent C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\h2-0.4.18\\src\\proto\\streams\\state.rs:165"
                          ,0x26);
    FUN_18014f8d0(&local_50,uVar2);
    local_58 = local_30;
    local_68 = (undefined4)local_40;
    uStack_64 = local_40._4_4_;
    uStack_60 = (undefined4)uStack_38;
    uStack_5c = uStack_38._4_4_;
    local_78 = (undefined4)local_50;
    uStack_74 = local_50._4_4_;
    uStack_70 = (undefined4)uStack_48;
    uStack_6c = uStack_48._4_4_;
    local_20 = param_1;
    FUN_180132bb0(param_1);
    *local_20 = 1;
    *(ulonglong *)(local_20 + 1) = CONCAT44(local_78,uStack_7c);
    *(ulonglong *)(local_20 + 3) = CONCAT44(uStack_70,uStack_74);
    *(ulonglong *)(local_20 + 5) = CONCAT44(local_68,uStack_6c);
    *(ulonglong *)(local_20 + 7) = CONCAT44(uStack_60,uStack_64);
    *(ulonglong *)(local_20 + 8) = CONCAT44(uStack_5c,uStack_60);
    *(undefined8 *)(local_20 + 10) = local_58;
  }
  return;
}


