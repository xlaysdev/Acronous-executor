/* FUN_1800369f0 @ 1800369f0 */

void FUN_1800369f0(undefined1 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_38;
  
  switch(*param_1) {
  case 0:
  case 1:
  case 2:
  case 6:
    break;
  case 3:
    lVar3 = *(longlong *)(param_1 + 8);
    if (lVar3 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x10);
      uVar4 = 1;
LAB_180036aab:
      thunk_FUN_1801d3330(lVar2,lVar3,uVar4);
      return;
    }
    break;
  case 4:
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar3 = *(longlong *)(param_1 + 0x18);
    local_38 = 0;
    lVar1 = lVar2;
    while (lVar3 != local_38) {
      local_38 = local_38 + 1;
      FUN_1800300c0(lVar1);
      lVar1 = lVar1 + 0x20;
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      lVar3 = *(longlong *)(param_1 + 8) << 5;
      uVar4 = 8;
      goto LAB_180036aab;
    }
    break;
  default:
    FUN_180031170(param_1 + 8);
    return;
  }
  return;
}


