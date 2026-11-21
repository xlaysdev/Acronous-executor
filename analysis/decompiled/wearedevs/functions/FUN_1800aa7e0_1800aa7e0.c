/* FUN_1800aa7e0 @ 1800aa7e0 */

longlong FUN_1800aa7e0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_38 = (longlong *)0x0;
  local_28 = param_1;
  if (param_1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180210578);
  }
  local_30 = param_1;
  FUN_18003c2f0(param_1[7]);
  plVar1 = local_30;
  local_28[7] = param_2;
  uVar2 = FUN_1801775a0(local_30 + 6);
  if ((uVar2 & 5) == 1) {
    (**(code **)(plVar1[4] + 0x10))(plVar1[5]);
  }
  if ((uVar2 & 4) == 0) {
    LOCK();
    *local_30 = *local_30 + -1;
    UNLOCK();
    if (*local_30 == 0) {
      FUN_18003de40(&local_30);
    }
    if (local_38 == (longlong *)0x0) {
      return 0;
    }
    local_28 = local_38;
    uVar2 = FUN_1801775a0(local_38 + 6);
    if ((uVar2 & 5) == 1) {
      (**(code **)(local_28[4] + 0x10))(local_28[5]);
    }
    lVar3 = 0;
  }
  else {
    lVar3 = local_30[7];
    local_30[7] = 0;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180210590);
    }
    LOCK();
    *local_30 = *local_30 + -1;
    UNLOCK();
    if (*local_30 == 0) {
      FUN_18003de40(&local_30);
    }
    if (local_38 == (longlong *)0x0) {
      return lVar3;
    }
    local_28 = local_38;
    uVar2 = FUN_1801775a0(local_38 + 6);
    if ((uVar2 & 5) == 1) {
      (**(code **)(local_28[4] + 0x10))(local_28[5]);
    }
  }
  LOCK();
  *local_28 = *local_28 + -1;
  UNLOCK();
  if (*local_28 == 0) {
    FUN_18003de40(&local_38);
  }
  return lVar3;
}


