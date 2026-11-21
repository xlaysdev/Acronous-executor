/* FUN_180042c50 @ 180042c50 */

void FUN_180042c50(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  if (SBORROW8(0,*(longlong *)(param_1 + 0x22))) {
    plVar1 = *(longlong **)(param_1 + 0x2a);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cc40(param_1 + 0x2a);
    }
    lVar2 = *(longlong *)(param_1 + 0x24);
    if ((!SBORROW8(0,lVar2)) && (lVar2 != 0)) {
      thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x26),lVar2,1,param_4,param_1,uVar3);
    }
  }
  else {
    FUN_1800439a0(param_1 + 0x22);
  }
  if ((char)param_1[0x20] != '\x02') {
    (**(code **)(*(longlong *)(param_1 + 0x18) + 0x20))
              (*(undefined8 *)(param_1 + 0x1e),*(undefined8 *)(param_1 + 0x1a),
               *(undefined8 *)(param_1 + 0x1c));
  }
  if (*param_1 == 3) {
    return;
  }
  FUN_1800430f0();
  return;
}


