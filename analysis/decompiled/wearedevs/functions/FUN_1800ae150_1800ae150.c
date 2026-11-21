/* FUN_1800ae150 @ 1800ae150 */

char * FUN_1800ae150(char *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char local_50;
  undefined8 local_4f;
  undefined8 uStack_47;
  undefined8 local_3f;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined7 uStack_2f;
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  plVar1 = (longlong *)(param_2 + 0x10);
  plVar2 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x10) != 0) {
    plVar2 = plVar1;
  }
  FUN_18008dcc0(&local_50,param_2,param_3,plVar2);
  if (local_50 == '\x05') {
    local_28 = plVar1;
    if (*plVar1 != 0) {
      FUN_18013c270(plVar1);
      plVar1 = (longlong *)*local_28;
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_18013bc70(local_28);
      }
    }
    *local_28 = 0;
    *param_1 = '\x05';
  }
  else {
    if (local_50 != '\x06') {
      *(ulonglong *)(param_1 + 0x20) = CONCAT71(uStack_2f,uStack_30);
      *(undefined8 *)(param_1 + 0x11) = local_3f;
      *(ulonglong *)(param_1 + 0x19) = CONCAT17(uStack_30,uStack_37);
      *(undefined8 *)(param_1 + 1) = local_4f;
      *(undefined8 *)(param_1 + 9) = uStack_47;
    }
    *param_1 = local_50;
  }
  return param_1;
}


