/* FUN_18000ada0 @ 18000ada0 */

void FUN_18000ada0(longlong param_1)

{
  longlong lVar1;
  
  if ((*(char *)(param_1 + 0x30) != '\0') && (*(longlong *)(param_1 + 0x38) != 0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x40),*(longlong *)(param_1 + 0x38),1);
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((lVar1 < 0) || (lVar1 == 0)) {
    return;
  }
  thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x18),lVar1 << 5,8);
  return;
}


