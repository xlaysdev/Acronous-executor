/* FUN_180160160 @ 180160160 */

undefined8 * FUN_180160160(undefined8 *param_1,int *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  plVar2 = *(longlong **)(param_2 + 2);
  lVar3 = *(longlong *)(param_2 + 4);
  if (*param_2 == 1) {
    uVar5 = (**(code **)(lVar3 + 0x70))
                      ((longlong)plVar2 +
                       (*(longlong *)(lVar3 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
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
    uVar5 = (**(code **)(lVar3 + 0x70))(plVar2,param_2 + 6);
    uVar6 = 0;
  }
  param_1[3] = uVar5;
  *param_1 = uVar6;
  param_1[1] = plVar2;
  param_1[2] = lVar3;
  return param_1;
}


