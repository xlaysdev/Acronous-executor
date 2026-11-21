/* Unwind@1800939c0 @ 1800939c0 */

void Unwind_1800939c0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x38);
  if ((lVar1 != 0) && ((*(byte *)(param_2 + 0x4f) & 1) != 0)) {
    cVar2 = FUN_180177f20(lVar1);
    if (cVar2 != '\0') {
      FUN_1801776b0(lVar1);
    }
  }
  cVar2 = FUN_180177ca0(*(undefined8 *)(param_2 + 0x40));
  if (cVar2 != '\0') {
    FUN_1801776a0(*(undefined8 *)(param_2 + 0x40));
  }
  return;
}


