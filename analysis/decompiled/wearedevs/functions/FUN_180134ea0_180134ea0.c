/* FUN_180134ea0 @ 180134ea0 */

void FUN_180134ea0(longlong param_1,byte *param_2)

{
  byte bVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 *local_30;
  byte *local_28;
  longlong *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  bVar1 = *param_2;
  local_20 = (longlong *)CONCAT44(local_20._4_4_,(uint)bVar1);
  local_28 = param_2;
  if (bVar1 == 1) {
    if (param_2[1] != 0) {
      pcVar3 = "http";
      goto LAB_180134f0b;
    }
LAB_180134f4c:
    uVar4 = 4;
    uStack_48 = "http";
LAB_180134f53:
    local_50 = &PTR_LAB_18024b6e8;
    uStack_38 = 0;
    local_40 = uVar4;
  }
  else {
    if (bVar1 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("internal error: entered unreachable codeC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\http-1.5.0\\src\\uri\\scheme.rs"
                    ,0x28,&DAT_18024b6c0);
    }
    pcVar3 = *(char **)(*(longlong *)(param_2 + 8) + 8);
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x10);
    if (lVar2 == 5) {
LAB_180134f0b:
      uVar4 = 5;
      if ((char)*(int *)((longlong)pcVar3 + 4) == 's' && *(int *)pcVar3 == 0x70747468) {
        uStack_48 = "http";
        goto LAB_180134f53;
      }
    }
    else if ((lVar2 == 4) && (*(int *)pcVar3 == 0x70747468)) goto LAB_180134f4c;
    FUN_1801b3ac0(&local_50);
  }
  local_30 = (undefined4 *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x18) + 0x20))
              (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
               *(undefined8 *)(param_1 + 0x28));
  }
  local_30[4] = (undefined4)local_40;
  local_30[5] = local_40._4_4_;
  local_30[6] = (undefined4)uStack_38;
  local_30[7] = uStack_38._4_4_;
  *local_30 = (undefined4)local_50;
  local_30[1] = local_50._4_4_;
  local_30[2] = (undefined4)uStack_48;
  local_30[3] = uStack_48._4_4_;
  if ((byte)local_20 < 2) {
    return;
  }
  local_20 = *(longlong **)(local_28 + 8);
  (**(code **)(*local_20 + 0x20))(local_20[3],local_20[1],local_20[2]);
  thunk_FUN_1801d3330(local_20,0x20,8);
  return;
}


