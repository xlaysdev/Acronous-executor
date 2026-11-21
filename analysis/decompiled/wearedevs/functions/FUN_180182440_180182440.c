/* FUN_180182440 @ 180182440 */

void FUN_180182440(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *local_70;
  undefined8 *local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 *local_48;
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_70 = (undefined8 *)param_1[1];
  local_58 = param_1[2];
  param_1[2] = 0;
  local_68 = local_70 + local_58;
  local_50 = 0;
  local_60 = param_1;
  local_30 = param_1;
  if (local_58 != 0) {
    do {
      uVar2 = *local_70;
      local_70 = local_70 + 1;
      plVar3 = (longlong *)FUN_180175410(uVar2,&PTR_s_C__Users_burne__cargo_registry_s_180264f98);
      LOCK();
      lVar1 = *plVar3;
      if (lVar1 == 0xcc) {
        *plVar3 = 0x84;
      }
      UNLOCK();
      if (lVar1 != 0xcc) {
        (**(code **)(plVar3[2] + 0x20))();
      }
    } while (local_70 != local_68);
  }
  FUN_18016cc40(&local_70);
  lVar1 = local_30[2];
  local_38 = lVar1;
  if (lVar1 != 0) {
    puVar5 = (undefined8 *)local_30[1];
    lVar4 = 1;
    local_48 = puVar5;
    do {
      plVar3 = (longlong *)*puVar5;
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      local_40 = lVar4;
      if (*plVar3 == 0) {
        FUN_1801639b0(puVar5);
      }
      lVar4 = local_40 + 1;
      puVar5 = puVar5 + 1;
    } while (local_40 != lVar1);
  }
  if (*local_30 != 0) {
    thunk_FUN_1801d3330(local_30[1],*local_30 << 3,8);
  }
  return;
}


