/* Unwind@1800b8080 @ 1800b8080 */

void Unwind_1800b8080(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x2f90);
  if (*(char *)(lVar1 + 0x539) != '\0') {
    FUN_1800777b0(param_2 + 0x2db0);
  }
  *(undefined1 *)(lVar1 + 0x539) = 0;
  if (*(char *)(lVar1 + 0x53a) == '\0') {
    return;
  }
  FUN_180077530(lVar1 + 0x280);
  return;
}


