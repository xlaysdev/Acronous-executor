/* FUN_180152420 @ 180152420 */

int FUN_180152420(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong local_188;
  undefined1 local_180 [292];
  int local_5c [7];
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  uVar5 = (ulonglong)*(uint *)(param_1 + 1);
  if (uVar5 < *(ulonglong *)(lVar1 + 0x10)) {
    lVar2 = *(longlong *)(*(longlong *)(lVar1 + 8) + uVar5 * 0x148);
    if (lVar2 != 2) {
      puVar6 = (undefined8 *)(*(longlong *)(lVar1 + 8) + uVar5 * 0x148);
      uVar3 = *(undefined8 *)(lVar1 + 0x20);
      memcpy(local_180,puVar6 + 1,0x140);
      *puVar6 = 2;
      puVar6[1] = uVar3;
      *(longlong *)(lVar1 + 0x18) = *(longlong *)(lVar1 + 0x18) + -1;
      *(ulonglong *)(lVar1 + 0x20) = uVar5;
      local_188 = lVar2;
      if (local_5c[0] != *(int *)((longlong)param_1 + 0xc)) {
        FUN_1801fa418(0,local_5c,(longlong)param_1 + 0xc,0);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      FUN_18008f310(&local_188);
      return local_5c[0];
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_180201b60("invalid key",0xb,&PTR_s_C__Users_burne__cargo_registry_s_180257ad8);
}


