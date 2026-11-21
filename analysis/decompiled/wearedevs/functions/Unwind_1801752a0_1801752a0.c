/* Unwind@1801752a0 @ 1801752a0 */

void Unwind_1801752a0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x116);
  if (*(char *)(param_2 + 0x115) == '\0') {
    *(byte *)(param_2 + 0x114) = bVar1 & 1;
    *(undefined1 *)(param_2 + 0x113) = 0;
    return;
  }
  FUN_180186000(param_2 + 0x60);
  *(byte *)(param_2 + 0x114) = bVar1 & 1;
  *(undefined1 *)(param_2 + 0x113) = 0;
  return;
}


