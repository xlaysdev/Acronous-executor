/* FUN_18018b3f0 @ 18018b3f0 */

undefined8 FUN_18018b3f0(undefined4 param_1,undefined8 param_2)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined *puVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 *in_RCX;
  bool bVar7;
  char *local_a0;
  char local_98;
  char *local_88;
  uint local_6c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar2 = *(longlong *)*in_RCX;
  pcVar1 = (char *)(lVar2 + 0xc0);
  LOCK();
  bVar7 = *(char *)(lVar2 + 0xc0) == '\0';
  if (bVar7) {
    *(char *)(lVar2 + 0xc0) = '\x01';
  }
  UNLOCK();
  if (!bVar7) {
    param_1 = FUN_180200390(pcVar1);
  }
  puVar4 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_6c = 0;
    cVar5 = *(char *)(lVar2 + 0xc1);
  }
  else {
    local_6c = FUN_180200a50(param_1,param_2);
    local_6c = local_6c ^ 1;
    cVar5 = *(char *)(lVar2 + 0xc1);
  }
  local_98 = (char)local_6c;
  if (cVar5 != '\0') {
    local_a0 = pcVar1;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_a0,&PTR_FUN_180266128,
                  &PTR_s_C__Users_burne__cargo_registry_s_180266148);
  }
  if (*(longlong *)(lVar2 + 200) != 0) {
    lVar3 = *(longlong *)(lVar2 + 0xd8);
    *(undefined8 *)(lVar2 + 0xd8) = 0;
    local_88 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00018018b4ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*(code *)(&DAT_180266250 + *(int *)(&DAT_180266250 + lVar3 * 4)))(lVar2 + 0xd8);
    return uVar6;
  }
  if (((local_98 == '\0') && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
     (cVar5 = FUN_180200a50(0,param_2), cVar5 == '\0')) {
    *(undefined1 *)(lVar2 + 0xc1) = 1;
  }
  LOCK();
  cVar5 = *pcVar1;
  *pcVar1 = '\0';
  UNLOCK();
  if (cVar5 == '\x02') {
    WakeByAddressSingle(pcVar1);
  }
  return 1;
}


