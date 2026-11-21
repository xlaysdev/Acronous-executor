/* FUN_180181eb0 @ 180181eb0 */

void FUN_180181eb0(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  undefined1 local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  LOCK();
  lVar1 = param_1[4];
  param_1[4] = 0;
  UNLOCK();
  local_30 = param_1;
  if (lVar1 == 0) {
    LOCK();
    *param_1 = *param_1 + -1;
    UNLOCK();
    if (*param_1 == 0) {
      FUN_1801639b0(&local_30);
    }
  }
  else {
    uVar2 = param_1[3];
    uVar3 = *(ulonglong *)(param_1[2] + 0xe8);
    if (uVar3 <= uVar2) {
      local_21 = 1;
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(uVar2,uVar3,&PTR_s_C__Users_burne__cargo_registry_s_180264ec8);
    }
    lVar4 = *(longlong *)(param_1[2] + 0xe0);
    local_21 = 1;
    local_48 = (longlong *)FUN_1801e04b0();
    local_38 = local_48;
    FUN_180167340(lVar4 + uVar2 * 0x80,local_48[2]);
    LOCK();
    *local_38 = *local_38 + -1;
    UNLOCK();
    if (*local_38 == 0) {
      local_21 = 1;
      FUN_1801e3970(&local_48);
    }
    plVar5 = (longlong *)local_30[2];
    LOCK();
    lVar4 = *plVar5;
    *plVar5 = *plVar5 + 1;
    UNLOCK();
    if (*plVar5 == 0 || SCARRY8(lVar4,1) != *plVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    plVar5 = (longlong *)local_30[2];
    local_48 = (longlong *)0x1;
    local_40 = plVar5;
    FUN_180170660(&local_48,1,local_30,lVar1,&PTR_s_C__Users_burne__cargo_registry_s_180264ee0);
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      local_21 = 0;
      FUN_180162f80(&local_40);
    }
  }
  return;
}


