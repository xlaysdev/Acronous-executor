/* FUN_1800e01e0 @ 1800e01e0 */

void FUN_1800e01e0(longlong param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0xe68) == '\0') {
    FUN_1800df6d0();
    FUN_180091e90(param_1 + 0x1a8);
    if (1 < *(byte *)(param_1 + 0x2a8)) {
      plVar1 = *(longlong **)(param_1 + 0x2b0);
      (**(code **)(*plVar1 + 0x20))(plVar1[3],plVar1[1],plVar1[2]);
      thunk_FUN_1801d3330(plVar1,0x20,8);
    }
                    /* WARNING: Could not recover jumptable at 0x0001800e0329. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + 0x2b8) + 0x20))
              (*(undefined8 *)(param_1 + 0x2d0),*(undefined8 *)(param_1 + 0x2c0),
               *(undefined8 *)(param_1 + 0x2c8));
    return;
  }
  if (*(char *)(param_1 + 0xe68) != '\x03') {
    return;
  }
  FUN_1800e07a0(param_1 + 0x608);
  FUN_18000adf0(param_1 + 0x5b0);
  if (1 < *(byte *)(param_1 + 0x580)) {
    plVar1 = *(longlong **)(param_1 + 0x588);
    (**(code **)(*plVar1 + 0x20))(plVar1[3],plVar1[1],plVar1[2]);
    thunk_FUN_1801d3330(plVar1,0x20,8);
  }
  (**(code **)(*(longlong *)(param_1 + 0x590) + 0x20))
            (*(undefined8 *)(param_1 + 0x5a8),*(undefined8 *)(param_1 + 0x598),
             *(undefined8 *)(param_1 + 0x5a0));
  *(undefined1 *)(param_1 + 0xe69) = 0;
  FUN_1800df6d0(param_1 + 0x2d8);
  return;
}


