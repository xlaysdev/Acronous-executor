/* FUN_180093930 @ 180093930 */

undefined8 FUN_180093930(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  plVar2 = (longlong *)*param_1;
  LOCK();
  lVar1 = *plVar2;
  *plVar2 = *plVar2 + 1;
  UNLOCK();
  if (*plVar2 == 0 || SCARRY8(lVar1,1) != *plVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_38 = FUN_1800ab020(plVar2 + 0x2e,param_2,param_3,plVar2,param_4);
  local_29 = 1;
  local_48 = param_4;
  local_40 = param_2;
  FUN_180181e80(plVar2 + 0x40,&local_48);
  if (local_40 != 0) {
    local_29 = 0;
    FUN_1801652b0(param_1,local_40);
  }
  return local_38;
}


