/* Unwind@18016b1d0 @ 18016b1d0 */

void Unwind_18016b1d0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_2 + 0xd0) = uVar1;
  *(undefined1 *)(param_2 + 0xdf) = 1;
  *(undefined1 *)(param_2 + 0xde) = 0;
  FUN_180168500(uVar1);
  *(undefined8 *)(param_2 + 0xd0) = uVar1;
  *(undefined1 *)(param_2 + 0xdf) = 1;
  *(undefined1 *)(param_2 + 0xde) = 0;
  return;
}


