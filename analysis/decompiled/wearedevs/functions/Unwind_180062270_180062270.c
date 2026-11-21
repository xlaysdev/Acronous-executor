/* Unwind@180062270 @ 180062270 */

void Unwind_180062270(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x1ae);
  if (*(int *)(param_2 + 0x180) != 2) {
    FUN_180161750(param_2 + 0x180,param_2 + 0x198);
  }
  *(byte *)(param_2 + 0x1ad) = bVar1 & 1;
  return;
}


