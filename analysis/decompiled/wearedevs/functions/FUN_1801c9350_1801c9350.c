/* FUN_1801c9350 @ 1801c9350 */

void FUN_1801c9350(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *local_78;
  ulonglong uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  if (*param_1 == 0) {
    local_58 = param_2 & 0xffffffffffffff80;
    uVar1 = *(ulonglong *)(local_58 + 0x810);
    if (0x40 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(0,uVar1,0x40,&PTR_s_C__Users_burne__cargo_registry_s_180288700);
    }
    if (uVar1 != 0) {
      puVar2 = (undefined8 *)(local_58 + 0x10);
      puVar3 = puVar2 + uVar1 * 4;
      do {
        local_78 = (code *)*puVar2;
        uStack_70 = puVar2[1];
        local_68 = *(undefined4 *)(puVar2 + 2);
        uStack_64 = *(undefined4 *)((longlong)puVar2 + 0x14);
        uStack_60 = *(undefined4 *)(puVar2 + 3);
        uStack_5c = *(undefined4 *)((longlong)puVar2 + 0x1c);
        *puVar2 = FUN_180027490;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        (*local_78)(&uStack_70);
        puVar2 = puVar2 + 4;
      } while (puVar2 != puVar3);
    }
    thunk_FUN_1801d3330(local_58,0x900,0x80);
  }
  else {
    local_78 = FUN_1801c86b0;
    uStack_70 = param_2;
    FUN_1801c87f0(*param_1,&local_78,param_1);
  }
  return;
}


