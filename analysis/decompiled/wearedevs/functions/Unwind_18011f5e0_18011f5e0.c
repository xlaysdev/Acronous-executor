/* Unwind@18011f5e0 @ 18011f5e0 */

void Unwind_18011f5e0(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = (undefined1)*(undefined4 *)(param_2 + 0x1d18);
  *(undefined1 *)(param_2 + 0x1d33) = uVar2;
  uVar1 = (undefined1)*(undefined4 *)(param_2 + 0x1d00);
  *(undefined1 *)(param_2 + 0x1d32) = uVar1;
  *(undefined1 *)(param_2 + 0x1d31) = 0;
  FUN_18000b400(*(undefined8 *)(param_2 + 0x1d10));
  *(undefined1 *)(param_2 + 0x1d33) = uVar2;
  *(undefined1 *)(param_2 + 0x1d32) = uVar1;
  *(undefined1 *)(param_2 + 0x1d31) = 0;
  return;
}


