/* Unwind@18004dd60 @ 18004dd60 */

void Unwind_18004dd60(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x1445);
  if ((*(byte *)(param_2 + 0x1444) & 1) == 0) {
    *(undefined1 *)(param_2 + 0x1440) = uVar1;
    *(undefined1 *)(param_2 + 0x143f) = 1;
    return;
  }
  FUN_1800430f0(param_2 + 0x1270);
  *(undefined1 *)(param_2 + 0x1440) = uVar1;
  *(undefined1 *)(param_2 + 0x143f) = 0;
  return;
}


