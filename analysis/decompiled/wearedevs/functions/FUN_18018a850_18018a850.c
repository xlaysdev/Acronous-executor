/* FUN_18018a850 @ 18018a850 */

void FUN_18018a850(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  longlong local_b0;
  undefined1 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  longlong local_80;
  uint local_6c;
  longlong local_68;
  longlong local_60;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVar3 = *(longlong *)(param_1 + 8);
  local_68 = lVar3 + -0x38;
  lVar1 = lVar3 + 0x88;
  LOCK();
  bVar5 = *(char *)(lVar3 + 0x88) == '\0';
  if (bVar5) {
    *(char *)(lVar3 + 0x88) = '\x01';
  }
  UNLOCK();
  if (!bVar5) {
    FUN_180200390(lVar1);
  }
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_6c = 0;
    cVar2 = *(char *)(lVar3 + 0x89);
  }
  else {
    local_6c = FUN_180200a50();
    local_6c = local_6c ^ 1;
    cVar2 = *(char *)(lVar3 + 0x89);
  }
  if (cVar2 != '\0') {
    local_a8 = (undefined1)local_6c;
    local_b0 = lVar1;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_b0,&PTR_FUN_180266128,
                  &PTR_s_C__Users_burne__cargo_registry_s_1802660a8);
  }
  lVar4 = *(longlong *)(lVar3 + 0xa0);
  local_88 = *(undefined8 *)(lVar3 + 0xc0);
  local_98 = *(undefined4 *)(lVar3 + 0xb0);
  uStack_94 = *(undefined4 *)(lVar3 + 0xb4);
  uStack_90 = *(undefined4 *)(lVar3 + 0xb8);
  uStack_8c = *(undefined4 *)(lVar3 + 0xbc);
  *(undefined8 *)(lVar3 + 0xa0) = 0;
  local_80 = lVar1;
  local_60 = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00018018a91c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_180266230 + *(int *)(&DAT_180266230 + lVar4 * 4)))
            (lVar3 + 0xa0,&DAT_180266230,lVar3 + 0xb0,*(undefined8 *)(lVar3 + 0xa8));
  return;
}


