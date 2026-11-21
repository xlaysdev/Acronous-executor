/* FUN_1801c86b0 @ 1801c86b0 */

void FUN_1801c86b0(ulonglong *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  local_58 = *param_1 & 0xffffffffffffff80;
  uVar1 = *(ulonglong *)(local_58 + 0x810);
  if (0x40 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_180201a30(0,uVar1,0x40,&PTR_s_C__Users_burne__cargo_registry_s_180288700);
  }
  if (uVar1 != 0) {
    puVar3 = (undefined8 *)(local_58 + 0x10);
    puVar4 = puVar3 + uVar1 * 4;
    do {
      pcVar2 = (code *)*puVar3;
      uStack_70 = *(undefined4 *)(puVar3 + 1);
      uStack_6c = *(undefined4 *)((longlong)puVar3 + 0xc);
      local_68 = *(undefined4 *)(puVar3 + 2);
      uStack_64 = *(undefined4 *)((longlong)puVar3 + 0x14);
      uStack_60 = *(undefined4 *)(puVar3 + 3);
      uStack_5c = *(undefined4 *)((longlong)puVar3 + 0x1c);
      *puVar3 = FUN_180027490;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      (*pcVar2)(&uStack_70);
      puVar3 = puVar3 + 4;
    } while (puVar3 != puVar4);
  }
  thunk_FUN_1801d3330(local_58,0x900,0x80);
  return;
}


