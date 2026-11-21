/* FUN_180188cf0 @ 180188cf0 */

void FUN_180188cf0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  bool bVar5;
  longlong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  longlong local_80;
  uint local_64;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar3 = *(longlong *)(param_1 + 8);
  local_50 = lVar3 + -0x60;
  lVar1 = lVar3 + 0x60;
  LOCK();
  bVar5 = *(char *)(lVar3 + 0x60) == '\0';
  if (bVar5) {
    *(char *)(lVar3 + 0x60) = '\x01';
  }
  UNLOCK();
  if (!bVar5) {
    FUN_180200390(lVar1);
  }
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_64 = 0;
    cVar2 = *(char *)(lVar3 + 0x61);
  }
  else {
    local_64 = FUN_180200a50();
    local_64 = local_64 ^ 1;
    cVar2 = *(char *)(lVar3 + 0x61);
  }
  if (cVar2 != '\0') {
    uVar4 = (uint)uStack_a0 >> 8;
    uStack_a0 = CONCAT31((int3)uVar4,(char)local_64);
    local_a8 = lVar1;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_a8,&PTR_FUN_180266128,
                  &PTR_s_C__Users_burne__cargo_registry_s_180265f00);
  }
  local_88 = *(undefined8 *)(lVar3 + 0xc0);
  local_a8 = *(longlong *)(lVar3 + 0xa0);
  uStack_a0 = *(undefined4 *)(lVar3 + 0xa8);
  uStack_9c = *(undefined4 *)(lVar3 + 0xac);
  local_98 = *(undefined4 *)(lVar3 + 0xb0);
  uStack_94 = *(undefined4 *)(lVar3 + 0xb4);
  uStack_90 = *(undefined4 *)(lVar3 + 0xb8);
  uStack_8c = *(undefined4 *)(lVar3 + 0xbc);
  *(undefined8 *)(lVar3 + 0xa0) = 0;
  local_80 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x000180188dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_180266220 + *(int *)(&DAT_180266220 + local_a8 * 4)))
            (&DAT_180266220 + *(int *)(&DAT_180266220 + local_a8 * 4));
  return;
}


