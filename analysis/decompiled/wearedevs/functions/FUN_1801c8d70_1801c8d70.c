/* FUN_1801c8d70 @ 1801c8d70 */

void FUN_1801c8d70(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  longlong lVar5;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  uVar3 = *(ulonglong *)(param_1 + 0x810);
  if (0x40 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_180201a30(0,uVar3,0x40,&PTR_s_C__Users_burne__cargo_registry_s_180288700);
  }
  if (uVar3 != 0) {
    lVar5 = 0;
    do {
      puVar1 = (undefined8 *)(param_1 + 0x10 + lVar5);
      pcVar4 = (code *)*puVar1;
      uStack_60 = *(undefined4 *)(puVar1 + 1);
      uStack_5c = *(undefined4 *)((longlong)puVar1 + 0xc);
      puVar2 = (undefined4 *)(param_1 + 0x20 + lVar5);
      local_58 = *puVar2;
      uStack_54 = puVar2[1];
      uStack_50 = puVar2[2];
      uStack_4c = puVar2[3];
      puVar1 = (undefined8 *)(param_1 + 0x10 + lVar5);
      *puVar1 = FUN_180027490;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(param_1 + 0x20 + lVar5);
      *puVar1 = 0;
      puVar1[1] = 0;
      (*pcVar4)(&uStack_60);
      lVar5 = lVar5 + 0x20;
    } while (uVar3 * 0x20 != lVar5);
  }
  return;
}


