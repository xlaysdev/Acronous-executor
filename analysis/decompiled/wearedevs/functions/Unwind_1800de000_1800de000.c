/* Unwind@1800de000 @ 1800de000 */

void Unwind_1800de000(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x19a8);
  if (*(char *)(lVar1 + 0xe69) != '\0') {
    FUN_180091e90(lVar1 + 0x480);
  }
  *(undefined1 *)(lVar1 + 0xe69) = 0;
  FUN_1800df6d0(lVar1 + 0x2d8);
  return;
}


