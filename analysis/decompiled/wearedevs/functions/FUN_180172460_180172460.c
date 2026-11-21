/* FUN_180172460 @ 180172460 */

void FUN_180172460(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined8 local_80;
  undefined8 *local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 *local_50;
  longlong *local_48;
  longlong *local_40;
  uint local_38;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201b60("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                  ,0x68,&PTR_s_C__Users_burne__cargo_registry_s_1802625d8);
  }
  plVar1 = param_2 + 4;
  LOCK();
  bVar6 = (char)param_2[4] == '\0';
  if (bVar6) {
    *(char *)(param_2 + 4) = '\x01';
  }
  UNLOCK();
  if (!bVar6) {
    FUN_180200390(plVar1);
  }
  puVar3 = PTR_DAT_1802fd600;
  local_48 = plVar1;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_38 = 0;
  }
  else {
    local_38 = FUN_180200a50();
    local_38 = local_38 ^ 1;
  }
  FUN_18017ea30(&local_80,param_2 + 3,param_2 + 5);
  plVar1 = local_48;
  if (((char)local_38 == '\0') && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) {
    local_31 = 1;
    cVar4 = FUN_180200a50();
    if (cVar4 == '\0') {
      *(undefined1 *)((longlong)param_2 + 0x21) = 1;
    }
  }
  LOCK();
  lVar2 = *plVar1;
  *(char *)plVar1 = '\0';
  UNLOCK();
  if ((char)lVar2 == '\x02') {
    local_31 = 1;
    WakeByAddressSingle(plVar1);
  }
  local_68 = local_78;
  local_60 = local_78;
  local_58 = local_80;
  puVar5 = local_78;
  local_50 = local_78 + local_70;
  while (puVar5 != local_78 + local_70) {
    local_40 = (longlong *)*puVar5;
    LOCK();
    local_40[0x12] = local_40[0x12] | 0x80000000;
    UNLOCK();
    local_60 = puVar5 + 1;
    FUN_180180a10(local_40 + 0x10,0x2f);
    LOCK();
    *local_40 = *local_40 + -1;
    UNLOCK();
    if (*local_40 == 0) {
      FUN_180162e30(&local_40);
    }
    puVar5 = puVar5 + 1;
  }
  local_31 = 0;
  FUN_18016ead0(&local_68);
  return;
}


