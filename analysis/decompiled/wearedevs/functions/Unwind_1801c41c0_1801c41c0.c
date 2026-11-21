/* Unwind@1801c41c0 @ 1801c41c0 */

void Unwind_1801c41c0(undefined8 param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  
  param_2 = param_2 & 0xffffffffffffff80;
  bVar1 = *(byte *)(param_2 + 0x44);
  cVar2 = *(char *)(param_2 + 0x43);
  if (cVar2 != '\0') {
    FUN_1801c4b90(param_2 + 0x130);
  }
  if ((bVar1 & 1) == 0) {
    *(undefined1 *)(param_2 + 0x45) = 0;
    *(char *)(param_2 + 0x46) = cVar2;
    return;
  }
  FUN_1801c4a50(param_2 + 0x230);
  *(undefined1 *)(param_2 + 0x45) = 0;
  *(char *)(param_2 + 0x46) = cVar2;
  return;
}


