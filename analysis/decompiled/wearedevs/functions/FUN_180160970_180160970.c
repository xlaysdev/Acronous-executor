/* FUN_180160970 @ 180160970 */

undefined8 * FUN_180160970(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  plVar2 = *(longlong **)(param_4 + 2);
  lVar3 = *(longlong *)(param_4 + 4);
  if (*param_4 == 1) {
    uVar5 = (**(code **)(lVar3 + 0x38))
                      ((longlong)plVar2 +
                       (*(longlong *)(lVar3 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,param_3);
    LOCK();
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + 1;
    UNLOCK();
    if (*plVar2 == 0 || SCARRY8(lVar1,1) != *plVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar6 = 1;
  }
  else {
    uVar5 = (**(code **)(lVar3 + 0x38))(plVar2,param_3);
    uVar6 = 0;
  }
  *param_1 = uVar6;
  param_1[1] = plVar2;
  param_1[2] = lVar3;
  param_1[3] = uVar5;
  param_1[4] = param_2;
  return param_1;
}


