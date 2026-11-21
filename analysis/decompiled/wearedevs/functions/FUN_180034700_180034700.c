/* FUN_180034700 @ 180034700 */

void FUN_180034700(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 local_18;
  uint local_14;
  undefined8 local_10;
  
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) != 0) goto LAB_1800347b6;
LAB_18003471b:
  lVar2 = *param_1;
  uVar4 = *(ulonglong *)(lVar2 + 0x18);
  local_18 = (undefined4)(uVar4 >> 0x20);
  if (*(int *)(lVar2 + 0x20) == (int)uVar4) {
    return;
  }
  do {
    local_14 = (uint)uVar4 + 1;
    uVar5 = (uint)(uVar4 >> 0x20);
    if (uVar5 == (uint)uVar4) {
      uVar6 = (ulonglong)local_14 << 0x20;
    }
    else {
      if (local_14 == uVar5) break;
      uVar6 = uVar4 & 0xffffffff00000000;
    }
    LOCK();
    uVar1 = *(ulonglong *)(lVar2 + 0x18);
    if (uVar4 == uVar1) {
      *(ulonglong *)(lVar2 + 0x18) = uVar6 | local_14;
      uVar6 = uVar4;
    }
    else {
      uVar6 = uVar1;
    }
    UNLOCK();
    if (uVar4 == uVar1) {
      local_10 = *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + (uVar4 & 0xff) * 8);
      FUN_1800349e0(&local_10);
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0("queue not empty",0x1f,&PTR_s_C__Users_burne__cargo_registry_s_1802067b0);
    }
    local_18 = (undefined4)(uVar6 >> 0x20);
    uVar4 = uVar6;
    if (*(int *)(lVar2 + 0x20) == (int)uVar6) {
      return;
    }
  } while( true );
  param_1 = (longlong *)CONCAT71((int7)(uVar4 >> 8),1);
  FUN_1801fb094(param_1,&local_18,&local_14,0);
LAB_1800347b6:
  cVar3 = FUN_180200a50();
  if (cVar3 == '\0') {
    return;
  }
  goto LAB_18003471b;
}


