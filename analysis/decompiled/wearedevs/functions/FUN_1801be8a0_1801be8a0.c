/* FUN_1801be8a0 @ 1801be8a0 */

void FUN_1801be8a0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_b8 [24];
  longlong local_a0;
  undefined4 *local_98;
  undefined4 *local_90;
  undefined8 local_88;
  undefined4 *local_80;
  undefined8 local_78;
  longlong local_70;
  longlong *local_68;
  code *local_60;
  undefined8 local_58;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_180027490();
    local_90 = (undefined4 *)thunk_FUN_1801d32d0(0x1e,1);
    if (local_90 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(1,0x1e);
    }
    *(undefined8 *)((longlong)local_90 + 0xe) = 0x4920255c296c6174;
    *(undefined8 *)((longlong)local_90 + 0x16) = 0x656d695420656c64;
    *local_90 = 0x6f72505c;
    local_90[1] = 0x73736563;
    local_90[2] = 0x5f28726f;
    local_90[3] = 0x61746f54;
    local_68 = (longlong *)0x1e;
    local_58 = 0x1e;
    local_60 = (code *)local_90;
    FUN_180027490();
    local_98 = (undefined4 *)thunk_FUN_1801d32d0(5,1);
    if (local_98 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(1,5);
    }
    local_a0 = param_1 + 0x88;
    *(undefined1 *)(local_98 + 1) = 0x30;
    *local_98 = 0x5f746f74;
    local_88 = 5;
    local_78 = 5;
    local_80 = local_98;
    FUN_1801bf590(&local_68,local_a0,param_1 + 0x18,&local_88);
    FUN_1801b6e40(param_1,param_3);
    if (*(longlong *)(param_1 + 0x10) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x10) * 0x70;
      lVar2 = *(longlong *)(param_1 + 8) + 0x48;
      lVar3 = 0;
      do {
        local_68 = &local_70;
        local_60 = FUN_1801ee720;
        local_70 = lVar3;
        FUN_1801ec780(&local_88,&DAT_180286d06,&local_68);
        local_68 = &local_70;
        local_60 = FUN_1801ee720;
        local_49 = 1;
        FUN_1801ec780(local_b8,&DAT_180286d22,&local_68);
        local_49 = 0;
        FUN_1801bf590(&local_88,local_a0,lVar2,local_b8);
        lVar2 = lVar2 + 0x70;
        lVar3 = lVar3 + 1;
        lVar1 = lVar1 + -0x70;
      } while (lVar1 != 0);
    }
  }
  return;
}


