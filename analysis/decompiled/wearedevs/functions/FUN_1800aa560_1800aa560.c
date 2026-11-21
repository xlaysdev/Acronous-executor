/* FUN_1800aa560 @ 1800aa560 */

void FUN_1800aa560(longlong *param_1,longlong *param_2,void *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_40 = (longlong *)0x0;
  local_30 = param_3;
  if (param_2 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180210578);
  }
  local_38 = param_2;
  if ((int)param_2[7] != 4) {
    FUN_1800a5890();
  }
  plVar2 = local_38;
  memcpy(param_2 + 7,local_30,0x98);
  uVar3 = FUN_1801775a0(plVar2 + 6);
  if ((uVar3 & 5) == 1) {
    (**(code **)(plVar2[4] + 0x10))(plVar2[5]);
  }
  plVar2 = local_38;
  if ((uVar3 & 4) == 0) {
    *param_1 = 4;
    LOCK();
    *local_38 = *local_38 + -1;
    UNLOCK();
    if (*local_38 == 0) {
      FUN_18003d580(&local_38);
    }
    if (local_40 == (longlong *)0x0) {
      return;
    }
    local_30 = local_40;
    uVar3 = FUN_1801775a0(local_40 + 6);
    if ((uVar3 & 5) == 1) {
      (**(code **)(local_30[4] + 0x10))(local_30[5]);
    }
  }
  else {
    lVar1 = local_38[7];
    local_38[7] = 4;
    if (lVar1 == 4) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180210590);
    }
    memcpy(param_1 + 1,local_38 + 8,0x90);
    *param_1 = lVar1;
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003d580(&local_38);
    }
    if (local_40 == (longlong *)0x0) {
      return;
    }
    local_30 = local_40;
    uVar3 = FUN_1801775a0(local_40 + 6);
    if ((uVar3 & 5) == 1) {
      (**(code **)(local_30[4] + 0x10))(local_30[5]);
    }
  }
  LOCK();
  *local_30 = *local_30 + -1;
  UNLOCK();
  if (*local_30 == 0) {
    FUN_18003d580(&local_40);
  }
  return;
}


