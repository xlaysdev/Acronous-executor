/* FUN_180125890 @ 180125890 */

void FUN_180125890(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_38;
  
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  local_38 = 0;
  while (local_38 != lVar3) {
    lVar4 = local_38 * 0x60;
    lVar1 = lVar2 + lVar4;
    local_38 = local_38 + 1;
    lVar4 = *(longlong *)(lVar2 + 0x38 + lVar4);
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x20))
                (*(undefined8 *)(lVar1 + 0x50),*(undefined8 *)(lVar1 + 0x40),
                 *(undefined8 *)(lVar1 + 0x48));
    }
    (**(code **)(*(longlong *)(lVar1 + 0x18) + 0x20))
              (*(undefined8 *)(lVar1 + 0x30),*(undefined8 *)(lVar1 + 0x20),
               *(undefined8 *)(lVar1 + 0x28));
  }
  if (*param_1 == 0) {
    return;
  }
  thunk_FUN_1801d3330(lVar2,*param_1 * 0x60,8);
  return;
}


