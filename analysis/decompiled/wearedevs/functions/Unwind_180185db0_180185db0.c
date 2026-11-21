/* Unwind@180185db0 @ 180185db0 */

void Unwind_180185db0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_2 + 0x58) & 1) != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x78);
    FUN_180181ad0(uVar1);
    thunk_FUN_1801d3330(uVar1,0x78,8);
  }
  return;
}


