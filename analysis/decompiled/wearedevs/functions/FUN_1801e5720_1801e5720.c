/* FUN_1801e5720 @ 1801e5720 */

bool FUN_1801e5720(longlong *param_1,void *param_2,ulonglong param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong _Size;
  ulonglong uVar4;
  
  plVar1 = (longlong *)*param_1;
  uVar4 = plVar1[1];
  uVar2 = plVar1[2];
  uVar3 = uVar2;
  if (uVar4 < uVar2) {
    uVar3 = uVar4;
  }
  uVar4 = uVar4 - uVar3;
  _Size = param_3;
  if (uVar4 < param_3) {
    _Size = uVar4;
  }
  memcpy((void *)(uVar3 + *plVar1),param_2,_Size);
  plVar1[2] = _Size + uVar2;
  if (uVar4 < param_3) {
    if (param_1[1] != 0) {
      FUN_1801e2450(param_1 + 1);
    }
    param_1[1] = (longlong)&PTR_s_failed_to_write_whole_buffer_18028ef30;
  }
  return uVar4 < param_3;
}


