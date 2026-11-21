/* FUN_18009ec80 @ 18009ec80 */

void FUN_18009ec80(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_38;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  local_38 = 0;
  while (local_38 != lVar2) {
    FUN_18003c220(lVar1 + local_38 * 0x48 + 0x18);
    FUN_180097000(lVar1 + local_38 * 0x48);
    local_38 = local_38 + 1;
  }
  if (*param_1 == 0) {
    return;
  }
  thunk_FUN_1801d3330(lVar1,*param_1 * 0x48,8);
  return;
}


