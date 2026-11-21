/* Unwind@1800ddd90 @ 1800ddd90 */

void Unwind_1800ddd90(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18b0);
  lVar2 = *(longlong *)(param_2 + 0x19a8);
  *(undefined1 *)(lVar2 + 0x84a) = 0;
  if (*(char *)(lVar2 + 0x849) == '\0') {
    *(undefined8 *)(param_2 + 0x1730) = uVar1;
    return;
  }
  FUN_180091e90(lVar2 + 0x748);
  *(undefined8 *)(param_2 + 0x1730) = uVar1;
  return;
}


