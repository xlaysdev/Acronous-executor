/* Unwind@18001f6b0 @ 18001f6b0 */

void Unwind_18001f6b0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x720);
  uVar2 = *(undefined8 *)(param_2 + 0x728);
  if (*(int *)(*(longlong *)(param_2 + 0x770) + 0xa0) == 3) {
    FUN_180018170(*(longlong *)(param_2 + 0x770) + 0xa0);
    *(undefined8 *)(param_2 + 0x738) = uVar2;
    *(undefined8 *)(param_2 + 0x730) = uVar1;
    return;
  }
  *(undefined8 *)(param_2 + 0x738) = uVar2;
  *(undefined8 *)(param_2 + 0x730) = uVar1;
  return;
}


