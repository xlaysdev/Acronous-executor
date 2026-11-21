/* FUN_18010cef0 @ 18010cef0 */

undefined8 * FUN_18010cef0(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  lVar4 = param_2[3];
  uVar2 = *(undefined1 *)((longlong)param_2 + 0x19);
  if (*param_2 == 0) {
    uVar5 = 0;
    plVar6 = (longlong *)param_2[2];
    LOCK();
    lVar1 = *plVar6;
    *plVar6 = *plVar6 + 1;
    UNLOCK();
    if (*plVar6 == 0 || SCARRY8(lVar1,1) != *plVar6 < 0) goto LAB_18010cf49;
  }
  else {
    plVar7 = param_2;
    uVar5 = (**(code **)(param_2[1] + 0x18))();
    plVar6 = (longlong *)param_2[2];
    LOCK();
    lVar1 = *plVar6;
    *plVar6 = *plVar6 + 1;
    UNLOCK();
    param_2 = plVar7;
    if (*plVar6 == 0 || SCARRY8(lVar1,1) != *plVar6 < 0) {
LAB_18010cf49:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  *(char *)(param_1 + 3) = (char)lVar4;
  *(undefined1 *)((longlong)param_1 + 0x19) = uVar2;
  *param_1 = uVar5;
  param_1[1] = param_2;
  param_1[2] = plVar6;
  return param_1;
}


