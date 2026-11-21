/* FUN_180031970 @ 180031970 */

void FUN_180031970(int *param_1)

{
  longlong lVar1;
  
  if (*param_1 != 2) {
    if (((char)param_1[0xc] != '\0') && (*(longlong *)(param_1 + 0xe) != 0)) {
      thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x10),*(longlong *)(param_1 + 0xe),1);
    }
    lVar1 = *(longlong *)(param_1 + 4);
    if ((-1 < lVar1) && (lVar1 != 0)) {
      thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 6),lVar1 << 5,8);
      return;
    }
  }
  return;
}


