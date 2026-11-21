/* FUN_18017de30 @ 18017de30 */

void FUN_18017de30(longlong param_1)

{
  FUN_180180a10(param_1 + 0x80,0x2f);
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0xb0) + 0x18))(*(undefined8 *)(param_1 + 0xb8));
  }
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00018017de95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0xc0) + 0x18))(*(undefined8 *)(param_1 + 200));
  return;
}


