/* FUN_1800555b0 @ 1800555b0 */

void FUN_1800555b0(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong local_90;
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  char *local_50;
  undefined8 local_48;
  ulonglong local_40;
  ulonglong local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_40 = *(ulonglong *)(param_1 + 0x1a0);
  local_20 = param_2;
  if (0x8000000000000001 < local_40) {
    local_90 = param_1 + 0x1a0;
    local_88 = FUN_180114980;
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_180209280,&local_90,&PTR_s_C__Users_burne__cargo_registry_s_180209330);
  }
  uVar1 = param_2[2];
  if (local_40 == 0x8000000000000001) {
    local_90 = *(ulonglong *)(param_1 + 0x1a8);
    if (local_90 < uVar1) {
      *(undefined8 *)(param_1 + 0x1a8) = 0;
      uVar1 = 1;
    }
    else {
      *(ulonglong *)(param_1 + 0x1a8) = local_90 - uVar1;
      uVar1 = 0;
    }
  }
  else {
    local_38 = uVar1;
    FUN_180119840(&local_90);
    local_30 = local_88;
    local_28 = uStack_80;
    uVar1 = 2;
  }
  local_88 = (code *)*local_20;
  uStack_80 = *(undefined4 *)(local_20 + 1);
  uStack_7c = *(undefined4 *)((longlong)local_20 + 0xc);
  local_78 = *(undefined4 *)(local_20 + 2);
  uStack_74 = *(undefined4 *)((longlong)local_20 + 0x14);
  uStack_70 = *(undefined4 *)(local_20 + 3);
  uStack_6c = *(undefined4 *)((longlong)local_20 + 0x1c);
  local_60 = local_30;
  local_58 = local_28;
  local_54 = local_24;
  local_50 = 
  "\r\nC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\hyper-util-0.1.20\\src\\client\\legacy\\connect\\proxy\\tunnel.rs"
  ;
  local_48 = 2;
  local_68 = local_90;
  local_90 = uVar1;
  FUN_1800693c0(param_1 + 0x10,&local_90);
  if ((*(longlong *)(param_1 + 0x1a0) == -0x7fffffffffffffff) &&
     (*(longlong *)(param_1 + 0x1a8) == 0)) {
    *(ulonglong *)(param_1 + 0x1a0) = (ulonglong)*(byte *)(param_1 + 0x1b8) | 0x8000000000000004;
  }
  return;
}


