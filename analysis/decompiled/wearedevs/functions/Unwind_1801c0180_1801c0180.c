/* Unwind@1801c0180 @ 1801c0180 */

void Unwind_1801c0180(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  
  bVar1 = *(byte *)(param_2 + 0x176);
  if (*(char *)(param_2 + 0x177) == '\0') {
    *(byte *)(param_2 + 0x175) = bVar1 & 1;
    return;
  }
  lVar2 = *(longlong *)(param_2 + 0x150);
  while (lVar2 != 0) {
    lVar2 = *(longlong *)(lVar2 + 0x18);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x20) = 0;
    }
    FUN_1801b8990();
  }
  *(byte *)(param_2 + 0x175) = bVar1 & 1;
  return;
}


