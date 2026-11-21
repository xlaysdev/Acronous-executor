/* FUN_180090300 @ 180090300 */

void FUN_180090300(void *param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 in_R11;
  undefined1 local_1f8 [424];
  ulonglong local_50;
  longlong *plStack_48;
  undefined8 local_40;
  longlong *plStack_38;
  longlong *local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  plStack_38 = *(longlong **)(param_2 + 0x1c0);
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    lVar1 = *plStack_38;
    *plStack_38 = *plStack_38 + 1;
    UNLOCK();
    if (*plStack_38 == 0 || SCARRY8(lVar1,1) != *plStack_38 < 0) goto LAB_180090410;
  }
  local_50 = *(ulonglong *)(param_2 + 0x1a8);
  if (1 < local_50) {
    param_3 = *(longlong **)(param_2 + 0x1b0);
    LOCK();
    lVar1 = *param_3;
    *param_3 = *param_3 + 1;
    UNLOCK();
    if (*param_3 == 0 || SCARRY8(lVar1,1) != *param_3 < 0) goto LAB_180090410;
    param_4 = *(undefined8 *)(param_2 + 0x1b8);
  }
  local_20 = *(undefined8 *)(param_2 + 0x1d8);
  local_30 = *(longlong **)(param_2 + 0x1c8);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    lVar1 = *local_30;
    *local_30 = *local_30 + 1;
    UNLOCK();
    if (*local_30 == 0 || SCARRY8(lVar1,1) != *local_30 < 0) {
LAB_180090410:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    in_R11 = *(undefined8 *)(param_2 + 0x1d0);
  }
  plStack_48 = param_3;
  local_40 = param_4;
  uStack_28 = in_R11;
  FUN_1800e5640(local_1f8);
  *(undefined8 *)((longlong)param_1 + 0x1d8) = local_20;
  *(longlong **)((longlong)param_1 + 0x1c8) = local_30;
  *(undefined8 *)((longlong)param_1 + 0x1d0) = uStack_28;
  *(undefined8 *)((longlong)param_1 + 0x1b8) = local_40;
  *(longlong **)((longlong)param_1 + 0x1c0) = plStack_38;
  *(ulonglong *)((longlong)param_1 + 0x1a8) = local_50;
  *(longlong **)((longlong)param_1 + 0x1b0) = plStack_48;
  memcpy(param_1,local_1f8,0x1a8);
  return;
}


