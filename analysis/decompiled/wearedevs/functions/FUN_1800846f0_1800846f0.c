/* FUN_1800846f0 @ 1800846f0 */

ulonglong FUN_1800846f0(longlong param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined8 unaff_RBX;
  undefined7 uVar4;
  ulonglong uVar3;
  undefined1 local_79;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined *local_28;
  undefined8 local_20;
  
  cVar2 = FUN_1800b83a0();
  puVar1 = PTR_DAT_1802fd518;
  uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (cVar2 == '\0') {
    if (4 < *(ulonglong *)PTR_DAT_1802fd518) {
      local_48 = 5;
      local_40 = &DAT_18020d714;
      local_38 = 0xe;
      local_28 = &DAT_18020d722;
      local_20 = 0x21;
      local_78 = 0;
      local_70 = &DAT_18020d714;
      local_68 = 0xe;
      local_60 = 0;
      local_58 = 
      "C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\reqwest-0.12.28\\src\\retry.rs"
      ;
      local_50 = 0x60;
      local_30 = 0xe700000001;
      FUN_1801905c0(&local_79,&local_78);
    }
    uVar3 = CONCAT71(uVar4,2);
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_180100c90(*(longlong *)(param_1 + 0x18) + 0x10);
    }
  }
  else {
    if (4 < *(ulonglong *)PTR_DAT_1802fd518) {
      local_48 = 5;
      local_40 = &DAT_18020d714;
      local_38 = 0xe;
      local_28 = &DAT_18020d732;
      local_20 = 0x19;
      local_78 = 0;
      local_70 = &DAT_18020d714;
      local_68 = 0xe;
      local_60 = 0;
      local_58 = 
      "C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\reqwest-0.12.28\\src\\retry.rs"
      ;
      local_50 = 0x60;
      local_30 = 0xee00000001;
      FUN_1801905c0(&local_79,&local_78);
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      cVar2 = FUN_180100cb0(*(longlong *)(param_1 + 0x18) + 0x10);
      if (cVar2 == '\0') {
        uVar3 = CONCAT71(uVar4,2);
        if (3 < *(ulonglong *)puVar1) {
          local_48 = 4;
          local_40 = &DAT_18020d714;
          local_38 = 0xe;
          local_28 = &DAT_18020d73e;
          local_20 = 0x59;
          local_78 = 0;
          local_70 = &DAT_18020d714;
          local_68 = 0xe;
          local_60 = 0;
          local_58 = 
          "C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\reqwest-0.12.28\\src\\retry.rs"
          ;
          local_50 = 0x60;
          local_30 = 0xf300000001;
          FUN_1801905c0(&local_79,&local_78);
        }
        goto LAB_180084878;
      }
    }
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    uVar3 = CONCAT71(uVar4,1);
  }
LAB_180084878:
  return uVar3 & 0xffffffff;
}


