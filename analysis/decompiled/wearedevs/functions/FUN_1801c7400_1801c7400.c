/* FUN_1801c7400 @ 1801c7400 */

longlong FUN_1801c7400(void)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong local_28;
  longlong local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  plVar4 = (longlong *)FUN_1801c8690();
  if (((char)plVar4[1] == '\x01') ||
     (plVar4 = (longlong *)FUN_1801fde30(plVar4,0), plVar4 != (longlong *)0x0)) {
    local_28 = *plVar4;
    lVar1 = *(longlong *)(local_28 + 0x818);
    local_20 = local_28;
    if (lVar1 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_1802883e0);
    }
    *(longlong *)(local_28 + 0x818) = lVar1 + 1;
    if (lVar1 == 0) {
      LOCK();
      if (*(ulonglong *)(local_28 + 0x880) == 0) {
        *(ulonglong *)(local_28 + 0x880) = *(ulonglong *)(*(longlong *)(local_28 + 8) + 0x180) | 1;
      }
      UNLOCK();
      uVar2 = *(ulonglong *)(local_28 + 0x828);
      *(ulonglong *)(local_28 + 0x828) = uVar2 + 1;
      if ((uVar2 & 0x7f) == 0) {
        FUN_1801fecc0(*(longlong *)(local_28 + 8) + 0x80,&local_28);
      }
    }
  }
  else {
    uVar5 = FUN_1801c8660();
    local_28 = FUN_1801c8b90(uVar5);
    lVar1 = *(longlong *)(local_28 + 0x818);
    local_20 = local_28;
    if (lVar1 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_1802883e0);
    }
    *(longlong *)(local_28 + 0x818) = lVar1 + 1;
    if (lVar1 == 0) {
      LOCK();
      if (*(ulonglong *)(local_28 + 0x880) == 0) {
        *(ulonglong *)(local_28 + 0x880) = *(ulonglong *)(*(longlong *)(local_28 + 8) + 0x180) | 1;
      }
      UNLOCK();
      uVar2 = *(ulonglong *)(local_28 + 0x828);
      *(ulonglong *)(local_28 + 0x828) = uVar2 + 1;
      if ((uVar2 & 0x7f) == 0) {
        FUN_1801fecc0(*(longlong *)(local_28 + 8) + 0x80,&local_28);
      }
    }
    lVar3 = local_20;
    lVar1 = *(longlong *)(local_20 + 0x820);
    *(longlong *)(local_20 + 0x820) = lVar1 + -1;
    if (lVar1 == 1 && *(longlong *)(local_20 + 0x818) == 0) {
      FUN_1801fe8b0(local_20);
      return lVar3;
    }
  }
  return local_20;
}


