/* FUN_18017c940 @ 18017c940 */

ulonglong FUN_18017c940(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 unaff_RBX;
  undefined7 uVar3;
  ulonglong uVar2;
  bool bVar4;
  ulonglong *local_40;
  code *local_38;
  ulonglong local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  LOCK();
  bVar4 = *(longlong *)(lVar1 + 0x18) == 3;
  if (bVar4) {
    *(longlong *)(lVar1 + 0x18) = 0;
  }
  UNLOCK();
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar2 = CONCAT71(uVar3,1);
  if (!bVar4) {
    local_28 = *(longlong *)(lVar1 + 0x10);
    LOCK();
    bVar4 = *(char *)(local_28 + 0x50) == '\0';
    if (bVar4) {
      *(char *)(local_28 + 0x50) = '\x01';
    }
    UNLOCK();
    if (bVar4) {
      local_30 = 0;
      LOCK();
      uVar2 = *(ulonglong *)(lVar1 + 0x18);
      bVar4 = uVar2 == 0;
      if (bVar4) {
        *(ulonglong *)(lVar1 + 0x18) = 2;
      }
      else {
        local_30 = uVar2;
      }
      UNLOCK();
      if (bVar4) {
        FUN_180164a60(local_28 + 0x10);
        LOCK();
        local_30 = *(ulonglong *)(lVar1 + 0x18);
        *(ulonglong *)(lVar1 + 0x18) = 0;
        UNLOCK();
        if ((local_30 & 0xfffffffffffffffe) != 2) {
          local_40 = &local_30;
          local_38 = FUN_1801ee720;
                    /* WARNING: Subroutine does not return */
          FUN_180201ee0(&DAT_180264460,&local_40,&PTR_s_C__Users_burne__cargo_registry_s_180264500);
        }
      }
      else {
        if (local_30 != 3) {
          local_40 = &local_30;
          local_38 = FUN_1801ee720;
                    /* WARNING: Subroutine does not return */
          FUN_180201ee0(&DAT_180264518,&local_40,&PTR_s_C__Users_burne__cargo_registry_s_180264540);
        }
        LOCK();
        *(undefined8 *)(lVar1 + 0x18) = 0;
        UNLOCK();
      }
      uVar2 = CONCAT71(uVar3,bVar4) ^ 1;
      LOCK();
      *(undefined1 *)(local_28 + 0x50) = 0;
      UNLOCK();
    }
    else {
      FUN_18017c4b0((longlong *)(lVar1 + 0x10),param_2,1000000000);
    }
  }
  return uVar2 & 0xffffffff;
}


