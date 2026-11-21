/* Unwind@180175ff0 @ 180175ff0 */

void Unwind_180175ff0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  undefined1 uVar2;
  
  bVar1 = *(byte *)(param_2 + 0xdd);
  uVar2 = *(undefined1 *)(param_2 + 0xdf);
  if ((*(char *)(param_2 + 0xde) == '\x01') && (*(longlong *)(param_2 + 0xa0) != 0)) {
    FUN_180174230(param_2 + 0xa0);
  }
  if ((bVar1 & 1) != 0) {
    FUN_180075a40(*(undefined8 *)(param_2 + 200),uVar2);
  }
  return;
}


