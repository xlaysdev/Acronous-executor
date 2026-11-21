/* Unwind@180106920 @ 180106920 */

void Unwind_180106920(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  byte bVar2;
  longlong lVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 0x634);
  bVar2 = *(byte *)(param_2 + 0x635);
  if ((*(byte *)(param_2 + 0x633) & 1) == 0) {
    *(byte *)(param_2 + 0x631) = bVar2 & 1;
    *(undefined1 *)(param_2 + 0x630) = uVar1;
    return;
  }
  lVar3 = *(longlong *)(param_2 + 0x5d0);
  if ((-0x7fffffffffffffff < lVar3) && (lVar3 != 0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x608),lVar3,1);
  }
  *(byte *)(param_2 + 0x631) = bVar2 & 1;
  *(undefined1 *)(param_2 + 0x630) = uVar1;
  return;
}


