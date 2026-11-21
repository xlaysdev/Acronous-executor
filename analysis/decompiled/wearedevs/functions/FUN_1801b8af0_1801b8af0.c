/* FUN_1801b8af0 @ 1801b8af0 */

void FUN_1801b8af0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_30;
  
  plVar2 = (longlong *)*param_1;
  while (plVar2 != (longlong *)0x0) {
    lVar4 = plVar2[3];
    *param_1 = lVar4;
    if (lVar4 == 0) {
      param_1[1] = 0;
    }
    else {
      *(undefined8 *)(lVar4 + 0x20) = 0;
    }
    param_1[2] = param_1[2] + -1;
    lVar4 = plVar2[1];
    lVar1 = plVar2[2];
    local_30 = 0;
    lVar3 = lVar4;
    while (lVar1 != local_30) {
      local_30 = local_30 + 1;
      FUN_1801bab00(lVar3);
      lVar3 = lVar3 + 0x158;
    }
    if (*plVar2 != 0) {
      thunk_FUN_1801d3330(plVar2[1],*plVar2 * 0x158,8,param_4,lVar4);
    }
    thunk_FUN_1801d3330(plVar2,0x28,8,param_4,lVar4);
    plVar2 = (longlong *)*param_1;
  }
  return;
}


